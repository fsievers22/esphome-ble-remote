#include "ble_hid_client.h"
#include "nvs.h"
#include "nvs_flash.h"
#include "esp_bt.h"
#include "esp_gap_ble_api.h"
#include "esp_gattc_api.h"
#include "esp_gatt_defs.h"
#include "esp_bt_main.h"
#include "esp_gatt_common_api.h"
#include "esp_log.h"

namespace esphome{
    

    #define BLE_TAG               "ble_hid_client.cpp"
    #define REMOTE_SERVICE_UUID   ESP_GATT_UUID_HID_SVC
    #define REMOTE_NOTIFY_UUID    0x2A4D

    static esp_gattc_char_elem_t *char_elem_result   = NULL;
    static esp_gattc_descr_elem_t *descr_elem_result = NULL;
    static esp_bd_addr_t ble_remote_address = {0x14,0x0A,0xC5,0xD0,0xD4,0xA2};

    ///Declare static functions
    static void esp_gap_cb(esp_gap_ble_cb_event_t event, esp_ble_gap_cb_param_t *param);
    static void esp_gattc_cb(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if, esp_ble_gattc_cb_param_t *param);
    static void gattc_profile_event_handler(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if, esp_ble_gattc_cb_param_t *param);


    static esp_bt_uuid_t remote_filter_service_uuid = {
        .len = ESP_UUID_LEN_16,
        .uuid = {.uuid16 = REMOTE_SERVICE_UUID,},
    };

    static esp_bt_uuid_t remote_filter_char_uuid = {
        .len = ESP_UUID_LEN_16,
        .uuid = {.uuid16 = REMOTE_NOTIFY_UUID,},
    };

    //Key map for amazon firetv stick remote with volume buttons
    static std::map<uint8_t, std::string> KEYMAP {{0x52,"UP"},{0x51,"DOWN"},{0x50,"LEFT"},{0x4f,"RIGHT"},
                                                {0x21,"VOICE"},{0x66,"POWER"},{0xf1,"BACK"},{0x23,"HOME"},
                                                {0x40,"MENU"},{0xb4,"REWIND"},{0xcd,"PLAY_PAUSE"},{0xb3,"FAST_FORWARD"},
                                                {0xe9,"VOL_UP"},{0xea,"VOL_DOWN"},{0xe2,"MUTE"}, {0x58,"ENTER"}}; 

    static bool is_scanning = false;
    static bool scan_setup_complete = false;
    static bool connect = false;
    static bool get_service = false;
    static const char remote_device_name[] = "ESP_BLE_SECURITY";

    static text_sensor::TextSensor* keycodeSensor = new text_sensor::TextSensor();;
    static binary_sensor::BinarySensor* keypressSensor = new binary_sensor::BinarySensor();

    static esp_ble_scan_params_t ble_scan_params = {
        .scan_type              = BLE_SCAN_TYPE_ACTIVE,
        .own_addr_type          = BLE_ADDR_TYPE_RANDOM,
        .scan_filter_policy     = BLE_SCAN_FILTER_ALLOW_ONLY_WLST,
        .scan_interval          = 0x50,
        .scan_window            = 0x20,
        .scan_duplicate         = BLE_SCAN_DUPLICATE_ENABLE
    };


    #define PROFILE_NUM 1
    #define PROFILE_A_APP_ID 0
    #define INVALID_HANDLE   0

    struct gattc_profile_inst {
        esp_gattc_cb_t gattc_cb;
        uint16_t gattc_if;
        uint16_t app_id;
        uint16_t conn_id;
        uint16_t service_start_handle;
        uint16_t service_end_handle;
        esp_bd_addr_t remote_bda;
    };

    /* One gatt-based profile one app_id and one gattc_if, this array will store the gattc_if returned by ESP_GATTS_REG_EVT */
    static struct gattc_profile_inst gl_profile_tab[PROFILE_NUM] = {
        [PROFILE_A_APP_ID] = {
            .gattc_cb = gattc_profile_event_handler,
            .gattc_if = ESP_GATT_IF_NONE,       /* Not get the gatt_if, so initial is ESP_GATT_IF_NONE */
        },
    };

    static char *ble_addr_to_str(char *addr_buffer, uint8_t *bytes){
        sprintf(addr_buffer,"%02x:%02x:%02x:%02x:%02x:%02x", bytes[0],bytes[1],bytes[2],bytes[3],bytes[4],bytes[5]);
        return addr_buffer;
    }

    static const char *esp_key_type_to_str(esp_ble_key_type_t key_type)
    {
    const char *key_str = NULL;
    switch(key_type) {
        case ESP_LE_KEY_NONE:
            key_str = "ESP_LE_KEY_NONE";
            break;
        case ESP_LE_KEY_PENC:
            key_str = "ESP_LE_KEY_PENC";
            break;
        case ESP_LE_KEY_PID:
            key_str = "ESP_LE_KEY_PID";
            break;
        case ESP_LE_KEY_PCSRK:
            key_str = "ESP_LE_KEY_PCSRK";
            break;
        case ESP_LE_KEY_PLK:
            key_str = "ESP_LE_KEY_PLK";
            break;
        case ESP_LE_KEY_LLK:
            key_str = "ESP_LE_KEY_LLK";
            break;
        case ESP_LE_KEY_LENC:
            key_str = "ESP_LE_KEY_LENC";
            break;
        case ESP_LE_KEY_LID:
            key_str = "ESP_LE_KEY_LID";
            break;
        case ESP_LE_KEY_LCSRK:
            key_str = "ESP_LE_KEY_LCSRK";
            break;
        default:
            key_str = "INVALID BLE KEY TYPE";
            break;

        }
        return key_str;
    }

    static char *esp_auth_req_to_str(esp_ble_auth_req_t auth_req)
    {
    char *auth_str = NULL;
    switch(auth_req) {
        case ESP_LE_AUTH_NO_BOND:
            auth_str = "ESP_LE_AUTH_NO_BOND";
            break;
        case ESP_LE_AUTH_BOND:
            auth_str = "ESP_LE_AUTH_BOND";
            break;
        case ESP_LE_AUTH_REQ_MITM:
            auth_str = "ESP_LE_AUTH_REQ_MITM";
            break;
        case ESP_LE_AUTH_REQ_BOND_MITM:
            auth_str = "ESP_LE_AUTH_REQ_BOND_MITM";
            break;
        case ESP_LE_AUTH_REQ_SC_ONLY:
            auth_str = "ESP_LE_AUTH_REQ_SC_ONLY";
            break;
        case ESP_LE_AUTH_REQ_SC_BOND:
            auth_str = "ESP_LE_AUTH_REQ_SC_BOND";
            break;
        case ESP_LE_AUTH_REQ_SC_MITM:
            auth_str = "ESP_LE_AUTH_REQ_SC_MITM";
            break;
        case ESP_LE_AUTH_REQ_SC_MITM_BOND:
            auth_str = "ESP_LE_AUTH_REQ_SC_MITM_BOND";
            break;
        default:
            auth_str = "INVALID BLE AUTH REQ";
            break;
    }
    return auth_str;
    }

    static void gattc_profile_event_handler(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if, esp_ble_gattc_cb_param_t *param)
    {
        esp_ble_gattc_cb_param_t *p_data = (esp_ble_gattc_cb_param_t *)param;

        switch (event) {
            case ESP_GATTC_REG_EVT:{
                ESP_LOGD(BLE_TAG, "REG_EVT");
                esp_ble_gap_config_local_privacy(true);
                break;
            }
            case ESP_GATTC_OPEN_EVT:{
                if (param->open.status != ESP_GATT_OK){
                    ESP_LOGE(BLE_TAG, "open failed, error status = %x", p_data->open.status);
                    break;
                }
                ESP_LOGD(BLE_TAG, "open success");
                gl_profile_tab[PROFILE_A_APP_ID].conn_id = p_data->open.conn_id;
                memcpy(gl_profile_tab[PROFILE_A_APP_ID].remote_bda, p_data->open.remote_bda, sizeof(esp_bd_addr_t));
                char addr_buffer[18];
                ESP_LOGD(BLE_TAG, "REMOTE BDA: %s", ble_addr_to_str(addr_buffer, gl_profile_tab[PROFILE_A_APP_ID].remote_bda));
                esp_err_t mtu_ret = esp_ble_gattc_send_mtu_req(gattc_if, p_data->open.conn_id);
                if (mtu_ret){
                    ESP_LOGE(BLE_TAG, "config MTU error, error code = %x", mtu_ret);
                }
                break;
            }
            case ESP_GATTC_CFG_MTU_EVT: {
                if (param->cfg_mtu.status != ESP_GATT_OK){
                    ESP_LOGE(BLE_TAG,"config mtu failed, error status = %x", param->cfg_mtu.status);
                }
                ESP_LOGD(BLE_TAG, "ESP_GATTC_CFG_MTU_EVT, Status %d, MTU %d, conn_id %d", param->cfg_mtu.status, param->cfg_mtu.mtu, param->cfg_mtu.conn_id);
                esp_ble_gattc_search_service(gattc_if, param->cfg_mtu.conn_id, &remote_filter_service_uuid);
                break;
            }
            case ESP_GATTC_SEARCH_RES_EVT: {
                ESP_LOGD(BLE_TAG, "SEARCH RES: conn_id = %x is primary service %d", p_data->search_res.conn_id, p_data->search_res.is_primary);
                ESP_LOGD(BLE_TAG, "start handle %d end handle %d current handle value %d", p_data->search_res.start_handle, p_data->search_res.end_handle, p_data->search_res.srvc_id.inst_id);
                if (p_data->search_res.srvc_id.uuid.len == ESP_UUID_LEN_16 && p_data->search_res.srvc_id.uuid.uuid.uuid16 == REMOTE_SERVICE_UUID) {
                    ESP_LOGD(BLE_TAG, "UUID16: %x", p_data->search_res.srvc_id.uuid.uuid.uuid16);
                    get_service = true;
                    gl_profile_tab[PROFILE_A_APP_ID].service_start_handle = p_data->search_res.start_handle;
                    gl_profile_tab[PROFILE_A_APP_ID].service_end_handle = p_data->search_res.end_handle;
                }
                break;
            }
            case ESP_GATTC_SEARCH_CMPL_EVT: {
                if (p_data->search_cmpl.status != ESP_GATT_OK){
                    ESP_LOGE(BLE_TAG, "search service failed, error status = %x", p_data->search_cmpl.status);
                    break;
                }
                if(p_data->search_cmpl.searched_service_source == ESP_GATT_SERVICE_FROM_REMOTE_DEVICE) {
                    ESP_LOGD(BLE_TAG, "Get service information from remote device");
                } else if (p_data->search_cmpl.searched_service_source == ESP_GATT_SERVICE_FROM_NVS_FLASH) {
                    ESP_LOGD(BLE_TAG, "Get service information from flash");
                } else {
                    ESP_LOGD(BLE_TAG, "unknown service source");
                }
                if (get_service){
                    uint16_t count  = 10;
                    uint16_t offset = 0;
                    esp_gatt_status_t ret_status = esp_ble_gattc_get_attr_count(gattc_if,
                                                                                gl_profile_tab[PROFILE_A_APP_ID].conn_id,
                                                                                ESP_GATT_DB_CHARACTERISTIC,
                                                                                gl_profile_tab[PROFILE_A_APP_ID].service_start_handle,
                                                                                gl_profile_tab[PROFILE_A_APP_ID].service_end_handle,
                                                                                INVALID_HANDLE,
                                                                                &count);
                    if (ret_status != ESP_GATT_OK){
                        ESP_LOGE(BLE_TAG, "esp_ble_gattc_get_attr_count error, %d", __LINE__);
                    }
                    if (count > 0){
                        esp_gattc_char_elem_t char_elem_result[count];
                        if (!char_elem_result){
                            ESP_LOGE(BLE_TAG, "gattc no mem");
                        }else{
                            ret_status = esp_ble_gattc_get_char_by_uuid( gattc_if,
                                                                    gl_profile_tab[PROFILE_A_APP_ID].conn_id,
                                                                    gl_profile_tab[PROFILE_A_APP_ID].service_start_handle,
                                                                    gl_profile_tab[PROFILE_A_APP_ID].service_end_handle,
                                                                    remote_filter_char_uuid,
                                                                    char_elem_result,
                                                                    &count);
                            if (ret_status != ESP_GATT_OK){
                                ESP_LOGE(BLE_TAG, "esp_ble_gattc_get_char_by_uuid error");
                            }
                            if(count>0){
                                ESP_LOGD(BLE_TAG,"Found handles for characteristic %04x:",remote_filter_char_uuid.uuid.uuid16);
                            }
                            for(uint8_t i=0; i < count; i++){
                                if(char_elem_result[i].properties & ESP_GATT_CHAR_PROP_BIT_NOTIFY){
                                    ESP_LOGD(BLE_TAG,"\t%02x",char_elem_result[i].char_handle);
                                    esp_ble_gattc_register_for_notify (gattc_if, gl_profile_tab[PROFILE_A_APP_ID].remote_bda, char_elem_result[i].char_handle);
                                }
                            }

                            /*  Every service have only one char in our 'ESP_GATTS_DEMO' demo, so we used first 'char_elem_result' */
                            /* if (count > 0 && (char_elem_result[0].properties & ESP_GATT_CHAR_PROP_BIT_NOTIFY)){
                                gl_profile_tab[PROFILE_A_APP_ID].char_handle = char_elem_result[0].char_handle;
                                esp_ble_gattc_register_for_notify (gattc_if, gl_profile_tab[PROFILE_A_APP_ID].remote_bda, char_elem_result[0].char_handle);
                            } */
                        }
                        /* free char_elem_result */
                    }else{
                        ESP_LOGE(BLE_TAG, "no char found");
                    }
                }

                break;
            }
            case ESP_GATTC_REG_FOR_NOTIFY_EVT: {
                if (p_data->reg_for_notify.status != ESP_GATT_OK){
                    ESP_LOGE(BLE_TAG, "reg for notify failed, error status = %x", p_data->reg_for_notify.status);
                    break;
                }

                    uint16_t count = 0;
                    uint16_t offset = 0;
                    uint16_t notify_en = 1;
                    esp_gatt_status_t ret_status = esp_ble_gattc_get_attr_count(gattc_if,
                                                                                gl_profile_tab[PROFILE_A_APP_ID].conn_id,
                                                                                ESP_GATT_DB_DESCRIPTOR,
                                                                                gl_profile_tab[PROFILE_A_APP_ID].service_start_handle,
                                                                                gl_profile_tab[PROFILE_A_APP_ID].service_end_handle,
                                                                                p_data->reg_for_notify.handle,
                                                                                &count);
                    if (ret_status != ESP_GATT_OK){
                        ESP_LOGE(BLE_TAG, "esp_ble_gattc_get_attr_count error, %d", __LINE__);
                    }
                    if (count > 0){
                        descr_elem_result = new esp_gattc_descr_elem_t[count];
                        //descr_elem_result = malloc(sizeof *descr_elem_result * count);
                        if (!descr_elem_result){
                            ESP_LOGE(BLE_TAG, "malloc error, gattc no mem");
                        }else{
                            ret_status = esp_ble_gattc_get_all_descr(gattc_if,
                                                                    gl_profile_tab[PROFILE_A_APP_ID].conn_id,
                                                                    p_data->reg_for_notify.handle,
                                                                    descr_elem_result,
                                                                    &count,
                                                                    offset);
                        if (ret_status != ESP_GATT_OK){
                            ESP_LOGE(BLE_TAG, "esp_ble_gattc_get_all_descr error, %d", __LINE__);
                        }

                            for (int i = 0; i < count; ++i)
                            {
                                if (descr_elem_result[i].uuid.len == ESP_UUID_LEN_16 && descr_elem_result[i].uuid.uuid.uuid16 == ESP_GATT_UUID_CHAR_CLIENT_CONFIG)
                                {
                                    esp_ble_gattc_write_char_descr (gattc_if,
                                                                    gl_profile_tab[PROFILE_A_APP_ID].conn_id,
                                                                    descr_elem_result[i].handle,
                                                                    sizeof(notify_en),
                                                                    (uint8_t *)&notify_en,
                                                                    ESP_GATT_WRITE_TYPE_RSP,
                                                                    ESP_GATT_AUTH_REQ_SIGNED_NO_MITM);

                                    break;
                                }
                            }
                        }
                        delete[] descr_elem_result;
                    }

                break;
            }
            case ESP_GATTC_NOTIFY_EVT:{
                ESP_LOGD(BLE_TAG, "ESP_GATTC_NOTIFY_EVT");
                if(p_data->notify.value_len > 0){
                    uint8_t dataBit = p_data->notify.value[0];
                    if(dataBit == 0){
                        ESP_LOGI(BLE_TAG,"Released key");
                        keypressSensor->publish_state(false);
                    }
                    else if(KEYMAP.count(dataBit) > 0){
                        std::string key = KEYMAP.at(dataBit);
                        ESP_LOGI(BLE_TAG,"Pressed key %s", key.c_str());
                        keycodeSensor->publish_state(key);
                        keypressSensor->publish_state(true);
                    }
                    else{
                        ESP_LOGW(BLE_TAG,"No key defined for databits %x", dataBit);
                    }
                }
                break;
            }
            case ESP_GATTC_WRITE_DESCR_EVT:{
                if (p_data->write.status != ESP_GATT_OK){
                    ESP_LOGE(BLE_TAG, "write descr failed, error status = %x", p_data->write.status);
                    break;
                }
                ESP_LOGD(BLE_TAG, "write descr success");
                break;
            }
            case ESP_GATTC_SRVC_CHG_EVT: {
                esp_bd_addr_t bda;
                memcpy(bda, p_data->srvc_chg.remote_bda, sizeof(esp_bd_addr_t));
                ESP_LOGD(BLE_TAG, "ESP_GATTC_SRVC_CHG_EVT, bd_addr:");
                char addr_buffer[18];
                ESP_LOGD(BLE_TAG,"%s",ble_addr_to_str(addr_buffer, bda));
                break;
            }
            case ESP_GATTC_WRITE_CHAR_EVT:{
                if (p_data->write.status != ESP_GATT_OK){
                    ESP_LOGE(BLE_TAG, "write char failed, error status = %x", p_data->write.status);
                    break;
                }
                ESP_LOGD(BLE_TAG, "Write char success ");
                break;
            }
            case ESP_GATTC_DISCONNECT_EVT:{
                ESP_LOGD(BLE_TAG, "ESP_GATTC_DISCONNECT_EVT, reason = 0x%x", p_data->disconnect.reason);
                ESP_LOGI(BLE_TAG,"Disconnected from BLE-Device");
                connect = false;
                get_service = false;
                break;
            }
            default:
                break;
        }
    }

    static char *read_bit_buffer(char *buffer, uint8_t *bytes, uint8_t len){
        buffer[len] = '\0';
        for(uint8_t i=0; i < len; i++){
            buffer[i] = bytes[i];
        }
        return buffer;
    }

    static void esp_gap_cb(esp_gap_ble_cb_event_t event, esp_ble_gap_cb_param_t *param)
    {
        uint8_t *adv_name = NULL;
        uint8_t adv_name_len = 0;
        switch (event) {
        case ESP_GAP_BLE_SET_LOCAL_PRIVACY_COMPLETE_EVT:{
            if (param->local_privacy_cmpl.status != ESP_BT_STATUS_SUCCESS){
                ESP_LOGE(BLE_TAG, "config local privacy failed, error code =%x", param->local_privacy_cmpl.status);
                break;
            }
            esp_err_t scan_ret = esp_ble_gap_set_scan_params(&ble_scan_params);
            if (scan_ret){
                ESP_LOGE(BLE_TAG, "set scan params error, error code = %x", scan_ret);
            }
            break;
        }
        case ESP_GAP_BLE_SCAN_PARAM_SET_COMPLETE_EVT: {
            //the unit of the duration is second
            scan_setup_complete = true;
            ESP_LOGD(BLE_TAG,"Setting scan parameters complete");
            break;
        }
        case ESP_GAP_BLE_SCAN_START_COMPLETE_EVT:{
            //scan start complete event to indicate scan start successfully or failed
            if (param->scan_start_cmpl.status != ESP_BT_STATUS_SUCCESS) {
                is_scanning = false;
                ESP_LOGE(BLE_TAG, "scan start failed, error status = %x", param->scan_start_cmpl.status);
                break;
            }
            ESP_LOGD(BLE_TAG, "Scan start success");
            break;
        }
        case ESP_GAP_BLE_PASSKEY_REQ_EVT:{                           /* passkey request event */
            /* Call the following function to input the passkey which is displayed on the remote device */
            //esp_ble_passkey_reply(gl_profile_tab[PROFILE_A_APP_ID].remote_bda, true, 0x00);
            ESP_LOGD(BLE_TAG, "ESP_GAP_BLE_PASSKEY_REQ_EVT");
            break;
        }
        case ESP_GAP_BLE_OOB_REQ_EVT: {
            ESP_LOGD(BLE_TAG, "ESP_GAP_BLE_OOB_REQ_EVT");
            uint8_t tk[16] = {1}; //If you paired with OOB, both devices need to use the same tk
            esp_ble_oob_req_reply(param->ble_security.ble_req.bd_addr, tk, sizeof(tk));
            break;
        }
        case ESP_GAP_BLE_LOCAL_IR_EVT:{                               /* BLE local IR event */
            ESP_LOGD(BLE_TAG, "ESP_GAP_BLE_LOCAL_IR_EVT");
            break;
        }
        case ESP_GAP_BLE_LOCAL_ER_EVT:{                               /* BLE local ER event */
            ESP_LOGD(BLE_TAG, "ESP_GAP_BLE_LOCAL_ER_EVT");
            break;
        }
        case ESP_GAP_BLE_SEC_REQ_EVT:{
            /* send the positive(true) security response to the peer device to accept the security request.
            If not accept the security request, should send the security response with negative(false) accept value*/
            esp_ble_gap_security_rsp(param->ble_security.ble_req.bd_addr, true);
            break;
        }
        case ESP_GAP_BLE_NC_REQ_EVT:{
            /* The app will receive this evt when the IO has DisplayYesNO capability and the peer device IO also has DisplayYesNo capability.
            show the passkey number to the user to confirm it with the number displayed by peer device. */
            esp_ble_confirm_reply(param->ble_security.ble_req.bd_addr, true);
            ESP_LOGD(BLE_TAG, "ESP_GAP_BLE_NC_REQ_EVT, the passkey Notify number:%d", param->ble_security.key_notif.passkey);
            break;
        }
        case ESP_GAP_BLE_PASSKEY_NOTIF_EVT:{  ///the app will receive this evt when the IO  has Output capability and the peer device IO has Input capability.
            ///show the passkey number to the user to input it in the peer device.
            ESP_LOGD(BLE_TAG, "The passkey Notify number:%06d", param->ble_security.key_notif.passkey);
            break;
        }
        case ESP_GAP_BLE_KEY_EVT:{
            //shows the ble key info share with peer device to the user.
            ESP_LOGD(BLE_TAG, "key type = %s", esp_key_type_to_str(param->ble_security.ble_key.key_type));
            break;
        }
        case ESP_GAP_BLE_AUTH_CMPL_EVT: {
            esp_bd_addr_t bd_addr;
            memcpy(bd_addr, param->ble_security.auth_cmpl.bd_addr, sizeof(esp_bd_addr_t));
            ESP_LOGD(BLE_TAG, "remote BD_ADDR: %08x%04x",\
                    (bd_addr[0] << 24) + (bd_addr[1] << 16) + (bd_addr[2] << 8) + bd_addr[3],
                    (bd_addr[4] << 8) + bd_addr[5]);
            ESP_LOGD(BLE_TAG, "address type = %d", param->ble_security.auth_cmpl.addr_type);
            ESP_LOGI(BLE_TAG, "Pairing %s",param->ble_security.auth_cmpl.success ? "success" : "fail");
            if (!param->ble_security.auth_cmpl.success) {
                ESP_LOGI(BLE_TAG, "fail reason = 0x%x",param->ble_security.auth_cmpl.fail_reason);
            } else {
                ESP_LOGI(BLE_TAG, "auth mode = %s",esp_auth_req_to_str(param->ble_security.auth_cmpl.auth_mode));
            }
            break;
        }
        case ESP_GAP_BLE_SCAN_RESULT_EVT: {
            esp_ble_gap_cb_param_t *scan_result = (esp_ble_gap_cb_param_t *)param;
            switch (scan_result->scan_rst.search_evt) {
            case ESP_GAP_SEARCH_INQ_RES_EVT:{
                ESP_LOGD(BLE_TAG,"Found device");
                
                adv_name = esp_ble_resolve_adv_data(scan_result->scan_rst.ble_adv,
                                                    ESP_BLE_AD_TYPE_NAME_CMPL, &adv_name_len);
                uint8_t *service_uuid = NULL;
                uint8_t service_uuid_len = 0;
                service_uuid = esp_ble_resolve_adv_data(scan_result->scan_rst.ble_adv,ESP_BLE_AD_TYPE_16SRV_CMPL, &service_uuid_len);
                if (adv_name != NULL && service_uuid_len > 1 && service_uuid[0] == 0x12 && service_uuid[1] == 0x18) {
                    ESP_LOGI(BLE_TAG,"Found HID device:");
                    char ble_addr_str[18];
                    char remote_device_name[adv_name_len+1];
                    ESP_LOGI(BLE_TAG,"\taddress: %s",ble_addr_to_str(ble_addr_str,scan_result->scan_rst.bda));
                    read_bit_buffer(remote_device_name,adv_name,adv_name_len);
                    ESP_LOGI(BLE_TAG,"\tname: %s",remote_device_name);
                    if (connect == false) {
                        connect = true;
                        ESP_LOGI(BLE_TAG, "connect to the remote device.");
                        esp_ble_gap_stop_scanning();
                        esp_ble_gattc_open(gl_profile_tab[PROFILE_A_APP_ID].gattc_if, scan_result->scan_rst.bda, scan_result->scan_rst.ble_addr_type, true);
                    }
                }
                break;
            }
            case ESP_GAP_SEARCH_INQ_CMPL_EVT:{
                ESP_LOGD(BLE_TAG,"Scan ended");
                is_scanning = false;
                break;
            }
            case ESP_GAP_SEARCH_SEARCH_CANCEL_CMPL_EVT:{
                ESP_LOGD(BLE_TAG,"Scan canceled");
                is_scanning = false;
                break;
            }
            default:
                ESP_LOGD(BLE_TAG,"Scan event: %d", scan_result->scan_rst.search_evt);
                break;
            }
            break;
        }

        case ESP_GAP_BLE_SCAN_STOP_COMPLETE_EVT:{
            is_scanning = false;
            if (param->scan_stop_cmpl.status != ESP_BT_STATUS_SUCCESS){
                is_scanning = true;
                ESP_LOGE(BLE_TAG, "Scan stop failed, error status = %x", param->scan_stop_cmpl.status);
                break;
            }
            ESP_LOGD(BLE_TAG, "Stop scan successfully");
            break;
        }
        default:
            break;
        }
    }

    static void esp_gattc_cb(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if, esp_ble_gattc_cb_param_t *param)
    {
        ESP_LOGD(BLE_TAG, "EVT %d, gattc if %d", event, gattc_if);

        /* If event is register event, store the gattc_if for each profile */
        if (event == ESP_GATTC_REG_EVT) {
            if (param->reg.status == ESP_GATT_OK) {
                gl_profile_tab[param->reg.app_id].gattc_if = gattc_if;
            } else {
                ESP_LOGI(BLE_TAG, "Reg app failed, app_id %04x, status %d",
                        param->reg.app_id,
                        param->reg.status);
                return;
            }
        }

        /* If the gattc_if equal to profile A, call profile A cb handler,
        * so here call each profile's callback */
        do {
            int idx;
            for (idx = 0; idx < PROFILE_NUM; idx++) {
                if (gattc_if == ESP_GATT_IF_NONE || /* ESP_GATT_IF_NONE, not specify a certain gatt_if, need to call every profile cb function */
                        gattc_if == gl_profile_tab[idx].gattc_if) {
                    if (gl_profile_tab[idx].gattc_cb) {
                        gl_profile_tab[idx].gattc_cb(event, gattc_if, param);
                    }
                }
            }
        } while (0);
    }
    BleHidClientComponent::BleHidClientComponent():PollingComponent(100){
        
    };

    text_sensor::TextSensor *BleHidClientComponent::getKeycodeSensor(){
        return keycodeSensor;
    }

    binary_sensor::BinarySensor *BleHidClientComponent::getKeypressSensor(){
        return keypressSensor;
    }

    void BleHidClientComponent::setup() {
        ESP_LOGD(BLE_TAG,"Start of setup");
        // Initialize NVS.
        esp_err_t ret = nvs_flash_init();
        if (ret == ESP_ERR_NVS_NO_FREE_PAGES || ret == ESP_ERR_NVS_NEW_VERSION_FOUND) {
            ESP_ERROR_CHECK(nvs_flash_erase());
            ret = nvs_flash_init();
        }
        ESP_ERROR_CHECK( ret );

        ESP_ERROR_CHECK(esp_bt_controller_mem_release(ESP_BT_MODE_CLASSIC_BT));

        esp_bt_controller_config_t bt_cfg = BT_CONTROLLER_INIT_CONFIG_DEFAULT();
        ret = esp_bt_controller_init(&bt_cfg);
        if (ret) {
            ESP_LOGE(BLE_TAG, "%s initialize controller failed: %s\n", __func__, esp_err_to_name(ret));
            return;
        }

        ret = esp_bt_controller_enable(ESP_BT_MODE_BLE);
        if (ret) {
            ESP_LOGE(BLE_TAG, "%s enable controller failed: %s\n", __func__, esp_err_to_name(ret));
            return;
        }

        ret = esp_bluedroid_init();
        if (ret) {
            ESP_LOGE(BLE_TAG, "%s init bluetooth failed: %s\n", __func__, esp_err_to_name(ret));
            return;
        }

        ret = esp_bluedroid_enable();
        if (ret) {
            ESP_LOGE(BLE_TAG, "%s enable bluetooth failed: %s\n", __func__, esp_err_to_name(ret));
            return;
        }

        //register the  callback function to the gap module
        ret = esp_ble_gap_register_callback(esp_gap_cb);
        if (ret){
            ESP_LOGE(BLE_TAG, "%s gap register error, error code = %x\n", __func__, ret);
            return;
        }

        //register the callback function to the gattc module
        ret = esp_ble_gattc_register_callback(esp_gattc_cb);
        if(ret){
            ESP_LOGE(BLE_TAG, "%s gattc register error, error code = %x\n", __func__, ret);
            return;
        }

        ret = esp_ble_gattc_app_register(PROFILE_A_APP_ID);
        if (ret){
            ESP_LOGE(BLE_TAG, "%s gattc app register error, error code = %x\n", __func__, ret);
        }

        ret = esp_ble_gatt_set_local_mtu(200);
        if (ret){
            ESP_LOGE(BLE_TAG, "set local  MTU failed, error code = %x", ret);
        }

        /* set the security iocap & auth_req & key size & init key response key parameters to the stack*/
        esp_ble_auth_req_t auth_req = ESP_LE_AUTH_REQ_SC_BOND;     //bonding with peer device after authentication
        esp_ble_io_cap_t iocap = ESP_IO_CAP_NONE;           //set the IO capability to No output No input
        uint8_t key_size = 16;      //the key size should be 7~16 bytes
        uint8_t init_key = ESP_BLE_ENC_KEY_MASK | ESP_BLE_ID_KEY_MASK;
        uint8_t rsp_key = ESP_BLE_ENC_KEY_MASK | ESP_BLE_ID_KEY_MASK;
        uint8_t oob_support = ESP_BLE_OOB_DISABLE;
        esp_ble_gap_set_security_param(ESP_BLE_SM_AUTHEN_REQ_MODE, &auth_req, sizeof(uint8_t));
        esp_ble_gap_set_security_param(ESP_BLE_SM_IOCAP_MODE, &iocap, sizeof(uint8_t));
        esp_ble_gap_set_security_param(ESP_BLE_SM_MAX_KEY_SIZE, &key_size, sizeof(uint8_t));
        esp_ble_gap_set_security_param(ESP_BLE_SM_OOB_SUPPORT, &oob_support, sizeof(uint8_t));
        /* If your BLE device act as a Slave, the init_key means you hope which types of key of the master should distribute to you,
        and the response key means which key you can distribute to the Master;
        If your BLE device act as a master, the response key means you hope which types of key of the slave should distribute to you,
        and the init key means which key you can distribute to the slave. */
        esp_ble_gap_set_security_param(ESP_BLE_SM_SET_INIT_KEY, &init_key, sizeof(uint8_t));
        esp_ble_gap_set_security_param(ESP_BLE_SM_SET_RSP_KEY, &rsp_key, sizeof(uint8_t));
        
        esp_ble_gap_update_whitelist(true,ble_remote_address,BLE_WL_ADDR_TYPE_PUBLIC);
        ESP_LOGD(BLE_TAG, "Finished setup");
    };

    void BleHidClientComponent::update() {
        if(!is_scanning && !connect && scan_setup_complete){
            uint32_t duration = 3600;
            ESP_LOGI(BLE_TAG, "Start scanning for HID-BLE-Devices for %d seconds", duration);
            is_scanning = true;
            esp_ble_gap_start_scanning(duration);
        }
    };
    /* text_sensor::TextSensor *BleHidClientComponent::get_keycode_sensor(){
        return keycodeSensor;
    }

    binary_sensor::BinarySensor *BleHidClientComponent::get_keypress_sensor(){
        return keypressSensor;
    } */
};