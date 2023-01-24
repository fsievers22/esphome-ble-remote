#include "ble_client_hid.h"

#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <nvs_flash.h>

#include "esp_bt.h"
#include "esp_bt_defs.h"
#include "esp_bt_main.h"
#include "esp_err.h"
#include "esp_gap_ble_api.h"
#include "esp_gatt_defs.h"
#include "esp_gattc_api.h"
#include "esp_hid_common.h"
#include "esp_hidh.h"
#include "./ble_hidh_static.h"
#include "esp_hidh_private.h"
#include <esp_log.h>
#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"
#include "esphome/core/application.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"
#include "keymap.h"
#include "lufa_hid/Drivers/USB/Class/Common/HIDParser.h"

#ifdef USE_ESP32

namespace esphome
{
  namespace ble_client_hid
  {

    static const char *const TAG = "ble_client_hid";

    static const std::string EMPTY = "";

    void BLEClientHID::loop()
    {
      switch (this->hid_state)
      {
      case HIDState::INIT:
        if (this->node_state == espbt::ClientState::DISCOVERED)
        {
          this->initialize_dev();
          this->hid_state = HIDState::SETUP;
        }
        break;
      case HIDState::BLE_CONNECTED:
        // read necessary characters from ble client device
        this->read_client_characteristics();
        this->hid_state = HIDState::READING_CHARS;
        break;
      case HIDState::READ_CHARS:
        // Configure client
        this->configure_hid_client(); // instantly
        this->hid_state = HIDState::CONFIGURED;
        this->node_state = espbt::ClientState::ESTABLISHED;
      default:
        break;
      }
    }

    void BLEClientHID::dump_config()
    {
      // LOG_TEXT_SENSOR("", "BLE Text Sensor", this);
      ESP_LOGCONFIG(TAG, "  MAC address        : %s",
                    this->parent()->address_str().c_str());
    }

    void BLEClientHID::hidh_event(esp_hidh_event_t event,
                                  esp_hidh_event_data_t *param)
    {
      switch (event)
      {
      case ESP_HIDH_OPEN_EVENT:
      {
        if (param->open.status == ESP_OK)
        {
          const char *dev_name = this->dev->config.device_name ? this->dev->config.device_name : "";
          ESP_LOGI(TAG, "%s OPEN: %s", this->parent()->address_str().c_str(),
                   dev_name);
          esp_ble_hidh_dev_dump(this->dev, stdout);
          this->hid_state = HIDState::OPENED;
        }
        else
        {
          ESP_LOGE(TAG, " OPEN failed!");
        }
        break;
      }
      case ESP_HIDH_BATTERY_EVENT:
      {
        ESP_LOGI(TAG, "%s BATTERY: %d%%", this->parent()->address_str().c_str(),
                 param->battery.level);
        this->battery_sensor->publish_state(param->battery.level);
        break;
      }
      case ESP_HIDH_INPUT_EVENT:
      {
        ESP_LOGI(
            TAG, "%s INPUT: %8s, MAP: %2u, ID: %3u, Len: %d, Data:",
            this->parent()->address_str().c_str(), esp_hid_usage_str(param->input.usage),
            param->input.map_index, param->input.report_id, param->input.length);
        ESP_LOG_BUFFER_HEX(TAG, param->input.data, param->input.length);
        
        for(uint8_t i = 0; i < param->input.length; i++){
            if(param->input.data[i] != 0){
              this->keypress_binary_sensor->publish_state(true);
              goto set_keycode;
            }
        }

        this->keypress_binary_sensor->publish_state(false);
        break;

        set_keycode:
        if(param->input.usage == ESP_HID_USAGE_KEYBOARD){
          //assume no modifier, no multiple keys pressed at once
          //data length for a key = 1byte
        
          ESP_LOGD(TAG,"KEY: %d", param->input.data[0]);
          std::string keystring = KEYBOARD_KEYMAP.at(param->input.data[0]);
          this->keycode_text_sensor->publish_state(keystring.length() > 0 ? keystring : str_sprintf("%#02X",param->input.data[0]));
        }else if(param->input.usage == ESP_HID_USAGE_CCONTROL){
          //assume data length for a key 2 byte
          uint16_t data = param->input.data[0];
          data += param->input.data[1] << 8;
          std::string keystring = CONSUMER_CONTROL_KEYMAP.at(data);
          this->keycode_text_sensor->publish_state(keystring.length() > 0 ? keystring : str_sprintf("%#04X", data));
        } else if(param->input.usage == ESP_HID_USAGE_GAMEPAD){
          
        } else{
          std::string hex_data="0X";
          for(uint8_t i = 0; i < param->input.length; i++){
            hex_data.append(str_sprintf("%02X", param->input.data[i]));
          }
          this->keycode_text_sensor->publish_state(hex_data);
        }
        break;
      }
      case ESP_HIDH_FEATURE_EVENT:
      {
        ESP_LOGI(TAG, "%s FEATURE: %8s, MAP: %2u, ID: %3u, Len: %d",
                 this->parent()->address_str().c_str(), esp_hid_usage_str(param->feature.usage),
                 param->feature.map_index, param->feature.report_id,
                 param->feature.length);
        ESP_LOG_BUFFER_HEX(TAG, param->feature.data, param->feature.length);
        break;
      }
      case ESP_HIDH_CLOSE_EVENT:
      {
        const char *dev_name = this->dev->config.device_name ? this->dev->config.device_name : "";
        ESP_LOGI(TAG, "%s CLOSE: %s", this->parent()->address_str().c_str(),
                 dev_name);
        this->hid_state = HIDState::CLOSED;
        break;
      }
      default:
        ESP_LOGI(TAG, "EVENT: %d", event);
        break;
      }
    }

    void BLEClientHID::read_client_characteristics()
    {
      ESP_LOGD(TAG, "Reading client characteristics");
      using namespace ble_client;

      BLEClient *parent = this->parent();
      BLEService *battery_service =
          parent->get_service(ESP_GATT_UUID_BATTERY_SERVICE_SVC);
      BLEService *device_info_service =
          parent->get_service(ESP_GATT_UUID_DEVICE_INFO_SVC);
      BLEService *hid_service = parent->get_service(ESP_GATT_UUID_HID_SVC);
      BLEService *generic_access_service = parent->get_service(0x1800);

      if (generic_access_service != nullptr)
      {
        BLECharacteristic *device_name_char =
            generic_access_service->get_characteristic(
                ESP_GATT_UUID_GAP_DEVICE_NAME);
        this->schedule_read_char(device_name_char);
      }
      if (device_info_service != nullptr)
      {
        BLECharacteristic *pnp_id_char =
            device_info_service->get_characteristic(ESP_GATT_UUID_PNP_ID);
        this->schedule_read_char(pnp_id_char);
        BLECharacteristic *manufacturer_char =
            device_info_service->get_characteristic(ESP_GATT_UUID_MANU_NAME);
        this->schedule_read_char(manufacturer_char);
        BLECharacteristic *serial_number_char =
            device_info_service->get_characteristic(
                ESP_GATT_UUID_SERIAL_NUMBER_STR);
        this->schedule_read_char(serial_number_char);
      }
      if (hid_service != nullptr)
      {
        BLECharacteristic *hid_report_map_char =
            hid_service->get_characteristic(ESP_GATT_UUID_HID_REPORT_MAP);
        this->schedule_read_char(hid_report_map_char);
        ESP_LOGD(TAG, "Found %d characteristics", hid_service->characteristics.size());
        for (auto *chr : hid_service->characteristics)
        {
          if (chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_BT_KB_INPUT &&
              chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_BT_KB_OUTPUT &&
              chr->uuid.get_uuid().uuid.uuid16 !=
                  ESP_GATT_UUID_HID_BT_MOUSE_INPUT &&
              chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_REPORT)
          {
            continue;
          }

          BLEDescriptor *rpt_ref_desc =
              chr->get_descriptor(ESP_GATT_UUID_RPT_REF_DESCR);
          if (rpt_ref_desc != nullptr)
          {
            if (esp_ble_gattc_read_char_descr(
                    parent->get_gattc_if(), parent->get_conn_id(),
                    rpt_ref_desc->handle, ESP_GATT_AUTH_REQ_NO_MITM) != ESP_OK)
            {
              ESP_LOGW(TAG, "scheduling reading of RPT_REF_DESCR failed.");
            }
            this->handles_to_read.insert(
                std::make_pair(rpt_ref_desc->handle, nullptr));
          }
        }
      }
    }
    void BLEClientHID::on_gatt_read_finished(GATTReadData *data)
    {
      std::map<uint16_t, GATTReadData *>::iterator itr;
      itr = this->handles_to_read.find(data->handle_);
      if (itr != this->handles_to_read.end())
      {
        itr->second = data;
      }
      // check if all handles have been read:
      for (auto const &element : this->handles_to_read)
      {
        if (element.second == nullptr)
        {
          return;
        }
      }
      this->hid_state = HIDState::READ_CHARS;
    }

    void BLEClientHID::gattc_event_handler(esp_gattc_cb_event_t event,
                                           esp_gatt_if_t gattc_if,
                                           esp_ble_gattc_cb_param_t *param)
    {
      esp_ble_gattc_cb_param_t *p_data = param;
      esp_hidh_dev_report_t *report = NULL;
      switch (event)
      {
      case ESP_GATTC_OPEN_EVT:
      {
        if (param->open.status == ESP_GATT_OK)
        {
          ESP_LOGI(TAG, "[%s] Connected successfully!",
                   this->parent()->address_str().c_str());
          break;
        }
        break;
      }
      case ESP_GATTC_CONNECT_EVT:
      {
        auto ret = esp_ble_set_encryption(param->connect.remote_bda,
                                          ESP_BLE_SEC_ENCRYPT);
        if (ret)
        {
          ESP_LOGE(TAG, "[%d] [%s] esp_ble_set_encryption error, status=%d",
                   this->parent()->get_connection_index(),
                   this->parent()->address_str().c_str(), ret);
        }
        break;
      }
      case ESP_GATTC_DISCONNECT_EVT:
      {
        ESP_LOGW(TAG, "[%s] Disconnected!",
                 this->parent()->address_str().c_str());
        this->status_set_warning();
        this->keycode_text_sensor->publish_state(EMPTY);
        break;
      }
      case ESP_GATTC_SEARCH_RES_EVT:
      {
        if (p_data->search_res.srvc_id.uuid.uuid.uuid16 ==
            ESP_GATT_UUID_HID_SVC)
        {
          this->dev->status = ESP_GATT_OK;
          // this->dev->config.report_maps_len++;
          ESP_LOGD(TAG, "SEARCH_RES HID Service was found");
        }
        break;
      }
      case ESP_GATTC_SEARCH_CMPL_EVT:
      {
        if (this->dev->status == ESP_GATT_NOT_FOUND)
        {
          // service not found
          ESP_LOGE(TAG, "SEARCH_CMPL HID Service was not found on the device");
          this->dev->status = ESP_GATT_CONN_NONE;
          this->status_set_warning();
          this->keycode_text_sensor->publish_state(EMPTY);
        }
        else if (p_data->search_cmpl.status)
        {
          ESP_LOGD(TAG, "GATTC search completed successful");
          this->dev->status = p_data->search_cmpl.status;
        }
        else
        {
          ESP_LOGD(TAG, "GATTC search completed mid successful, with status, %d", p_data->search_cmpl.status);
        }
        this->hid_state = HIDState::BLE_CONNECTED;
        this->dev->connected = true;
        break;
      }
      case ESP_GATTC_READ_CHAR_EVT:
      case ESP_GATTC_READ_DESCR_EVT:
      {
        if (param->read.conn_id != this->parent()->get_conn_id())
          break;
        if (param->read.status != ESP_OK)
        {
          ESP_LOGW(TAG, "GATTC read failed with status code %d", param->read.status);
          break;
        }
        GATTReadData *data = new GATTReadData(param->read.handle, param->read.value, param->read.value_len);
        this->on_gatt_read_finished(data);
        break;
      }
      case ESP_GATTC_WRITE_DESCR_EVT:
      {
        if (param->write.conn_id != this->parent()->get_conn_id())
          break;
        dev->status = p_data->write.status;
        break;
      }
      case ESP_GATTC_WRITE_CHAR_EVT:
      {
        if (param->write.conn_id != this->parent()->get_conn_id())
          break;
        dev->status = p_data->write.status;
        if (p_data->write.status)
        {
          ESP_LOGE(TAG, "WRITE_CHAR: conn_id %d, handle %d, status 0x%x",
                   p_data->write.conn_id, p_data->write.handle,
                   p_data->write.status);
        }
        break;
      }
      case ESP_GATTC_REG_FOR_NOTIFY_EVT:
      {
        break;
      }
      case ESP_GATTC_NOTIFY_EVT:
      {
        if (param->notify.conn_id != this->parent()->get_conn_id())
          break;
        esp_hidh_event_data_t p = {0};
        if (p_data->notify.handle == dev->ble.battery_handle)
        {
          p.battery.dev = dev;
          p.battery.level = p_data->notify.value[0];
          this->hidh_event(ESP_HIDH_BATTERY_EVENT, &p);
        }
        else
        {
          report = esp_hidh_dev_get_report_by_handle(dev, p_data->notify.handle);
          if (report)
          {
            esp_hidh_event_data_t *p_param = NULL;
            size_t event_data_size = sizeof(esp_hidh_event_data_t);

            if (p_data->notify.value_len && p_data->notify.value)
            {
              event_data_size += p_data->notify.value_len;
            }

            if ((p_param = (esp_hidh_event_data_t *)malloc(event_data_size)) ==
                NULL)
            {
              ESP_LOGE(TAG, "%s malloc event data failed!", __func__);
              break;
            }
            memset(p_param, 0, event_data_size);
            if (p_data->notify.value_len && p_data->notify.value)
            {
              memcpy(((uint8_t *)p_param) + sizeof(esp_hidh_event_data_t),
                     p_data->notify.value, p_data->notify.value_len);
            }

            if (report->report_type == ESP_HID_REPORT_TYPE_FEATURE)
            {
              p_param->feature.dev = dev;
              p_param->feature.map_index = report->map_index;
              p_param->feature.report_id = report->report_id;
              p_param->feature.usage = report->usage;
              p_param->feature.length = p_data->notify.value_len;
              p_param->feature.data = p_data->notify.value;
              this->hidh_event(ESP_HIDH_FEATURE_EVENT, p_param);
            }
            else
            {
              p_param->input.dev = dev;
              p_param->input.map_index = report->map_index;
              p_param->input.report_id = report->report_id;
              p_param->input.usage = report->usage;
              p_param->input.length = p_data->notify.value_len;
              p_param->input.data = p_data->notify.value;
              this->hidh_event(ESP_HIDH_INPUT_EVENT, p_param);
            }
            if (p_param)
            {
              free(p_param);
              p_param = NULL;
            }
          }
        }
        break;
      }
      case ESP_GATTC_CLOSE_EVT:
      {
        if (param->close.conn_id != this->parent()->get_conn_id())
          break;
        ESP_LOGV(TAG,
                 "CLOSE bda " ESP_BD_ADDR_STR
                 ", conn_id %d, status 0x%x, reason 0x%x",
                 ESP_BD_ADDR_HEX(p_data->close.remote_bda), p_data->close.conn_id,
                 p_data->close.status, p_data->close.reason);
        if (!dev->connected)
        {
          dev->status = p_data->close.reason;
          dev->ble.conn_id = -1;
        }
        else
        {
          dev->connected = false;
          dev->status = p_data->close.status;
          // free the device in the wrapper event handler
          dev->in_use = false;

          esp_hidh_event_data_t p = {0};
          p.close.dev = dev;
          p.close.reason = p_data->close.reason;
          p.close.status = ESP_OK;
          this->hidh_event(ESP_HIDH_CLOSE_EVENT, &p);
        }
        break;
      }
      default:
      {
        break;
      }
      }
    }

    void BLEClientHID::register_keypress_binary_sensor(binary_sensor::BinarySensor *keypress_binary_sensor){
      this->keypress_binary_sensor = keypress_binary_sensor;
    }

    void BLEClientHID::register_battery_sensor(sensor::Sensor *battery_sensor){
      this->battery_sensor = battery_sensor;
    }

    void BLEClientHID::register_keycode_text_sensor(
        text_sensor::TextSensor *keycode_text_sensor)
    {
      this->keycode_text_sensor = keycode_text_sensor;
    }

    void BLEClientHID::schedule_read_char(
        ble_client::BLECharacteristic *characteristic)
    {
      if (characteristic != nullptr &&
          ((characteristic->properties & ESP_GATT_CHAR_PROP_BIT_READ) != 0))
      {
        if (esp_ble_gattc_read_char(
                this->parent()->get_gattc_if(), this->parent()->get_conn_id(),
                characteristic->handle, ESP_GATT_AUTH_REQ_NO_MITM) != ESP_OK)
        {
          ESP_LOGW(TAG, "read_char failed");
        }
        this->handles_to_read.insert(
            std::make_pair(characteristic->handle, nullptr));
      }
      else
      {
        ESP_LOGW(TAG, "read_char failed");
      }
    }

    void BLEClientHID::configure_hid_client()
    {
      esp_hidh_dev_report_t *report = NULL;
      esp_hid_report_map_t *map;
      dev->config.report_maps_len = 1;
      dev->config.report_maps = (esp_hid_raw_report_map_t *)malloc(dev->config.report_maps_len * sizeof(esp_hid_raw_report_map_t));
      if (dev->config.report_maps == NULL)
      {
        ESP_LOGE(TAG, "malloc report maps failed");
        return;
      }
      memset(dev->config.report_maps, 0, dev->config.report_maps_len * sizeof(esp_hid_raw_report_map_t));
      using namespace ble_client;

      BLEClient *parent = this->parent();
      BLEService *battery_service =
          parent->get_service(ESP_GATT_UUID_BATTERY_SERVICE_SVC);
      BLEService *device_info_service =
          parent->get_service(ESP_GATT_UUID_DEVICE_INFO_SVC);
      BLEService *hid_service = parent->get_service(ESP_GATT_UUID_HID_SVC);
      BLEService *generic_access_service = parent->get_service(0x1800);

      if (generic_access_service != nullptr)
      {
        BLECharacteristic *device_name_char =
            generic_access_service->get_characteristic(
                ESP_GATT_UUID_GAP_DEVICE_NAME);
        dev->config.device_name = (const char *)this->handles_to_read[device_name_char->handle]->value_;
      }
      if (battery_service != nullptr)
      {
        BLECharacteristic *battery_level_char =
            battery_service->get_characteristic(ESP_GATT_UUID_BATTERY_LEVEL);
        if (battery_level_char != nullptr &&
            ((battery_level_char->properties & ESP_GATT_CHAR_PROP_BIT_READ) != 0))
        {
          this->dev->ble.battery_handle = battery_level_char->handle;
        }
      }
      if (device_info_service != nullptr)
      {
        BLECharacteristic *pnp_id_char =
            device_info_service->get_characteristic(ESP_GATT_UUID_PNP_ID);
        uint8_t *rdata = this->handles_to_read[pnp_id_char->handle]->value_;
        dev->config.vendor_id = *((uint16_t *)&rdata[1]);
        dev->config.product_id = *((uint16_t *)&rdata[3]);
        dev->config.version = *((uint16_t *)&rdata[5]);
        delete this->handles_to_read[pnp_id_char->handle];
        this->handles_to_read.erase(pnp_id_char->handle);

        BLECharacteristic *manufacturer_char =
            device_info_service->get_characteristic(ESP_GATT_UUID_MANU_NAME);
        dev->config.manufacturer_name = (const char *)this->handles_to_read[manufacturer_char->handle]->value_;
        BLECharacteristic *serial_number_char =
            device_info_service->get_characteristic(
                ESP_GATT_UUID_SERIAL_NUMBER_STR);
        dev->config.serial_number = (const char *)this->handles_to_read[serial_number_char->handle]->value_;
      }
      if (hid_service != nullptr)
      {
        dev->config.report_maps =
            (esp_hid_raw_report_map_t *)malloc(sizeof(esp_hid_raw_report_map_t));
        if (dev->config.report_maps == NULL)
        {
          ESP_LOGE(TAG, "malloc report maps failed");
          return;
        }
        BLECharacteristic *hid_report_map_char =
            hid_service->get_characteristic(ESP_GATT_UUID_HID_REPORT_MAP);
        dev->config.report_maps[0].data = (const uint8_t *)this->handles_to_read[hid_report_map_char->handle]->value_;
        dev->config.report_maps[0].len = this->handles_to_read[hid_report_map_char->handle]->value_len_;
        for (auto *chr : hid_service->characteristics)
        {
          if (chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_BT_KB_INPUT &&
              chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_BT_KB_OUTPUT &&
              chr->uuid.get_uuid().uuid.uuid16 !=
                  ESP_GATT_UUID_HID_BT_MOUSE_INPUT &&
              chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_REPORT)
          {
            continue;
          }
          report = (esp_hidh_dev_report_t *)malloc(sizeof(esp_hidh_dev_report_t));
          if (report == NULL)
          {
            ESP_LOGE(TAG, "malloc esp_hidh_dev_report_t failed");
            return;
          }
          report->next = NULL;
          report->permissions = chr->properties;
          report->handle = chr->handle;
          report->ccc_handle = 0;
          report->report_id = 0;
          report->map_index = 0;
          if (chr->uuid.get_uuid().uuid.uuid16 == ESP_GATT_UUID_HID_BT_KB_INPUT)
          {
            report->protocol_mode = ESP_HID_PROTOCOL_MODE_BOOT;
            report->report_type = ESP_HID_REPORT_TYPE_INPUT;
            report->usage = ESP_HID_USAGE_KEYBOARD;
            report->value_len = 8;
          }
          else if (chr->uuid.get_uuid().uuid.uuid16 ==
                   ESP_GATT_UUID_HID_BT_KB_OUTPUT)
          {
            report->protocol_mode = ESP_HID_PROTOCOL_MODE_BOOT;
            report->report_type = ESP_HID_REPORT_TYPE_OUTPUT;
            report->usage = ESP_HID_USAGE_KEYBOARD;
            report->value_len = 8;
          }
          else if (chr->uuid.get_uuid().uuid.uuid16 ==
                   ESP_GATT_UUID_HID_BT_MOUSE_INPUT)
          {
            report->protocol_mode = ESP_HID_PROTOCOL_MODE_BOOT;
            report->report_type = ESP_HID_REPORT_TYPE_INPUT;
            report->usage = ESP_HID_USAGE_MOUSE;
            report->value_len = 8;
          }
          else
          {
            report->protocol_mode = ESP_HID_PROTOCOL_MODE_REPORT;
            report->report_type = 0;
            report->usage = ESP_HID_USAGE_GENERIC;
            report->value_len = 0;
          }
          if (report != NULL)
          {
            BLEDescriptor *client_config_desc =
                chr->get_descriptor(ESP_GATT_UUID_CHAR_CLIENT_CONFIG);
            if (client_config_desc != nullptr &&
                (report->permissions & ESP_GATT_CHAR_PROP_BIT_NOTIFY) != 0)
            {
              report->ccc_handle = client_config_desc->handle;
            }
            BLEDescriptor *rpt_ref_desc =
                chr->get_descriptor(ESP_GATT_UUID_RPT_REF_DESCR);
            if (rpt_ref_desc != nullptr)
            {
              report->report_id = this->handles_to_read[rpt_ref_desc->handle]->value_[0];
              report->report_type = this->handles_to_read[rpt_ref_desc->handle]->value_[1];
              delete this->handles_to_read[rpt_ref_desc->handle];
              this->handles_to_read.erase(rpt_ref_desc->handle);
            }
            report->next = dev->reports;
            dev->reports = report;
            dev->reports_len++;
          }
        }

        if (dev->reports_len && dev->config.report_maps[0].len)
        {
          ESP_LOG_BUFFER_HEX(TAG, dev->config.report_maps[0].data, dev->config.report_maps[0].len);
          map = esp_hid_parse_report_map(dev->config.report_maps[0].data, dev->config.report_maps[0].len);
          if (map)
          {
            if (dev->ble.appearance == 0)
            {
              dev->ble.appearance = map->appearance;
            }
            report = dev->reports;
            while (report)
            {
              if (report->map_index == 0)
              {
                for (uint8_t i = 0; i < map->reports_len; i++)
                {
                  esp_hid_report_item_t *r = &map->reports[i];
                  if (report->protocol_mode == ESP_HID_PROTOCOL_MODE_BOOT && report->protocol_mode == r->protocol_mode && report->report_type == r->report_type && report->usage == r->usage)
                  {
                    report->report_id = r->report_id;
                    report->value_len = r->value_len;
                  }
                  else if (report->protocol_mode == r->protocol_mode && report->report_type == r->report_type && report->report_id == r->report_id)
                  {
                    report->usage = r->usage;
                    report->value_len = r->value_len;
                  }
                }
              }
              report = report->next;
            }
            free(map->reports);
            free(map);
            map = NULL;
          }
        }
      }
      // call hid event
      esp_hidh_event_data_t p = {0};
      p.open.status = ESP_OK;
      p.open.dev = dev;
      this->hidh_event(ESP_HIDH_OPEN_EVENT, &p);

      attach_report_listeners(this->parent()->get_gattc_if(), this->dev);
    }

    void BLEClientHID::initialize_dev()
    {
      esp_err_t ret;

      this->dev = (esp_hidh_dev_t *)calloc(1, sizeof(esp_hidh_dev_t));
      if (this->dev == NULL)
      {
        ESP_LOGE(TAG, "malloc esp_hidh_dev_t failed");
        return;
      }

      if (this->dev == NULL)
      {
        ESP_LOGE(TAG, "malloc esp_hidh_dev_t failed");
        return;
      }

      this->dev->in_use = true;
      this->dev->transport = ESP_HID_TRANSPORT_BLE;
      memcpy(this->dev->bda, this->parent()->get_remote_bda(),
             sizeof(esp_bd_addr_t));
      this->dev->ble.address_type = this->parent()->get_remote_addr_type();
      this->dev->ble.appearance = ESP_HID_APPEARANCE_GENERIC;
      this->dev->ble.conn_id = this->parent()->get_conn_id();

      // dev->close = this->parent()->disconnect();
      // dev->report_write = esp_ble_hidh_dev_report_write;
      // dev->report_read = esp_ble_hidh_dev_report_read;
      // dev->dump = esp_ble_hidh_dev_dump;
    }

  } // namespace ble_client_hid
} // namespace esphome
#endif