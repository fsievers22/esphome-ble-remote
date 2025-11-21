#include "ble_client_hid.h"

#include "usages.h"

#ifdef USE_ESP32

namespace esphome {
namespace ble_client_hid {

static const char *const TAG = "ble_client_hid";

static const std::string EMPTY = "";

static TickType_t last_run = 0;

void BLEClientHID::loop() {
  switch (this->hid_state) {
    case HIDState::BLE_CONNECTED:
      this->read_client_characteristics();  // not instant, finished when
                                            // hid_state = HIDState::READ_CHARS
      this->hid_state = HIDState::READING_CHARS;
      break;
    case HIDState::READ_CHARS:
      this->configure_hid_client();
      this->hid_state = HIDState::NOTIFICATIONS_REGISTERING;
    case HIDState::NOTIFICATIONS_REGISTERED:
      esp_ble_gap_update_conn_params(&this->preferred_conn_params);
      this->hid_state = HIDState::CONN_PARAMS_UPDATING;
    default:
      break;
  }
}

void BLEClientHID::dump_config() {
  ESP_LOGCONFIG(TAG, "BLE Client HID:");
  ESP_LOGCONFIG(TAG, "  MAC address        : %s",
                this->parent()->address_str().c_str());
}

void BLEClientHID::gap_event_handler(esp_gap_ble_cb_event_t event,
  esp_ble_gap_cb_param_t *param) {
   switch (event)
   {
   case ESP_GAP_BLE_UPDATE_CONN_PARAMS_EVT:
    ESP_LOGI(TAG, "Updated conn params to interval=%.2f ms, latency=%u, timeout=%.1f ms", param->update_conn_params.conn_int * 1.25f, param->update_conn_params.latency, param->update_conn_params.timeout * 10.f);
    this->hid_state = HIDState::CONFIGURED;
    this->node_state = espbt::ClientState::ESTABLISHED;
    /* code */
     break;
   default:
     break;
   }
  }

void BLEClientHID::read_client_characteristics() {
  ESP_LOGD(TAG, "Reading client characteristics");
  using namespace ble_client;
  BLEService *battery_service =
      this->parent()->get_service(ESP_GATT_UUID_BATTERY_SERVICE_SVC);
  BLEService *device_info_service =
      this->parent()->get_service(ESP_GATT_UUID_DEVICE_INFO_SVC);

  BLEService *hid_service = this->parent()->get_service(ESP_GATT_UUID_HID_SVC);
  BLEService *generic_access_service = this->parent()->get_service(0x1800);

  if (generic_access_service != nullptr) {
    BLECharacteristic *device_name_char =
        generic_access_service->get_characteristic(
            ESP_GATT_UUID_GAP_DEVICE_NAME);
    BLECharacteristic *pref_conn_params_char = generic_access_service->get_characteristic(ESP_GATT_UUID_GAP_PREF_CONN_PARAM);
    this->schedule_read_char(pref_conn_params_char);
    this->schedule_read_char(device_name_char);
  }
  if (device_info_service != nullptr) {
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
  if (hid_service != nullptr) {
    BLECharacteristic *hid_report_map_char =
        hid_service->get_characteristic(ESP_GATT_UUID_HID_REPORT_MAP);
    this->schedule_read_char(hid_report_map_char);
    ESP_LOGD(TAG, "Found %d characteristics",
             hid_service->characteristics.size());
    for (auto *chr : hid_service->characteristics) {
      if (chr->uuid.get_uuid().uuid.uuid16 != ESP_GATT_UUID_HID_REPORT) {
        continue;
      }

      BLEDescriptor *rpt_ref_desc =
          chr->get_descriptor(ESP_GATT_UUID_RPT_REF_DESCR);
      if (rpt_ref_desc != nullptr) {
        if (esp_ble_gattc_read_char_descr(
                this->parent()->get_gattc_if(), this->parent()->get_conn_id(),
                rpt_ref_desc->handle, ESP_GATT_AUTH_REQ_NO_MITM) != ESP_OK) {
          ESP_LOGW(TAG, "scheduling reading of RPT_REF_DESCR failed.");
        }
        this->handles_to_read.insert(
            std::make_pair(rpt_ref_desc->handle, nullptr));
      }
    }
  }
}
void BLEClientHID::on_gatt_read_finished(GATTReadData *data) {
  std::map<uint16_t, GATTReadData *>::iterator itr;
  itr = this->handles_to_read.find(data->handle_);
  if (itr != this->handles_to_read.end()) {
    itr->second = data;
  }
  // check if all handles have been read:
  for (auto const &element : this->handles_to_read) {
    if (element.second == nullptr) {
      return;
    }
  }
  this->hid_state = HIDState::READ_CHARS;
}

void BLEClientHID::gattc_event_handler(esp_gattc_cb_event_t event,
                                       esp_gatt_if_t gattc_if,
                                       esp_ble_gattc_cb_param_t *param) {
  esp_ble_gattc_cb_param_t *p_data = param;
  switch (event) {
    case ESP_GATTC_CONNECT_EVT: {
      auto ret = esp_ble_set_encryption(param->connect.remote_bda,
                                        ESP_BLE_SEC_ENCRYPT);
      if (ret) {
        ESP_LOGE(TAG, "[%d] [%s] esp_ble_set_encryption error, status=%d",
                 this->parent()->get_connection_index(),
                 this->parent()->address_str().c_str(), ret);
      }
      esp_gap_conn_params_t params;
      ret = esp_ble_get_current_conn_params(
          this->parent()->get_remote_bda(), &params);
      if (ret != ESP_OK) {
        ESP_LOGW(TAG, "Failed to get conn params");
      }
      ESP_LOGI(TAG, "conn params: interval=%u, latency=%u, timeout=%u",
               params.interval, params.latency, params.timeout);
      break;
    }
    case ESP_GATTC_DISCONNECT_EVT: {
      ESP_LOGW(TAG, "[%s] Disconnected!",
               this->parent()->address_str().c_str());
      this->status_set_warning("Diconnected");
      break;
    }
    case ESP_GATTC_SEARCH_RES_EVT: {
      if (p_data->search_res.srvc_id.uuid.uuid.uuid16 ==
          ESP_GATT_UUID_HID_SVC) {
        this->hid_state = HIDState::HID_SERVICE_FOUND;
        ESP_LOGD(TAG, "GATT HID service found on device %s",
                 this->parent()->address_str().c_str());
      }
      break;
    }
    case ESP_GATTC_SEARCH_CMPL_EVT: {
      if (this->hid_state != HIDState::HID_SERVICE_FOUND) {
        // service not found
        ESP_LOGW(TAG, "No GATT HID service found on device %s",
                 this->parent()->address_str().c_str());
        this->hid_state = HIDState::NO_HID_SERVICE;
        this->status_set_warning("Invalid device config");
        break;
      }
      ESP_LOGD(TAG, "GATTC search finished with status code %d",
               p_data->search_cmpl.status);
      this->hid_state = HIDState::BLE_CONNECTED;
      esp_gap_conn_params_t params;
      esp_err_t ret = esp_ble_get_current_conn_params(
          this->parent()->get_remote_bda(), &params);
      if (ret != ESP_OK) {
        ESP_LOGW(TAG, "Failed to get conn params");
      }
      ESP_LOGI(TAG, "conn params: interval=%u, latency=%u, timeout=%u",
               params.interval, params.latency, params.timeout);
      break;
    }
    case ESP_GATTC_READ_CHAR_EVT:
    case ESP_GATTC_READ_DESCR_EVT: {
      if (param->read.conn_id != this->parent()->get_conn_id()) break;
      if (param->read.status != ESP_OK) {
        ESP_LOGW(TAG, "GATTC read failed with status code %d",
                 param->read.status);
        break;
      }
      GATTReadData *data = new GATTReadData(
          param->read.handle, param->read.value, param->read.value_len);
      this->on_gatt_read_finished(data);
      break;
    }
    case ESP_GATTC_NOTIFY_EVT: {
      if (param->notify.conn_id != this->parent()->get_conn_id()) break;
      if (p_data->notify.handle == this->battery_handle) {
        uint8_t battery_level = p_data->notify.value[0];
        if (this->battery_sensor == nullptr) {
          break;
        }
        this->battery_sensor->publish_state(battery_level);
      } else {
        // has to be hid report
        this->send_input_report_event(p_data);
      }
      break;
    }
    case ESP_GATTC_REG_FOR_NOTIFY_EVT: {
      if (param->notify.conn_id != this->parent()->get_conn_id()) break;
      this->handles_waiting_for_notify_registration--;
      if(this->handles_waiting_for_notify_registration == 0){
        this->hid_state = HIDState::NOTIFICATIONS_REGISTERED;
      }
      break;
    }
    default: {
      break;
    }
  }
}

void BLEClientHID::send_input_report_event(esp_ble_gattc_cb_param_t *p_data) {
  ESP_LOGD(TAG, "Received HID input report from handle %d",
           p_data->notify.handle);
  uint8_t *data = new uint8_t[p_data->notify.value_len + 1];
  memcpy(data + 1, p_data->notify.value, p_data->notify.value_len);
  data[0] = this->handle_report_id[p_data->notify.handle];
  std::vector<HIDReportItemValue> hid_report_values =
      this->hid_report_map->parse(data);
  if (hid_report_values.size() == 0) {
    delete[] data;
    return;
  }
  for (HIDReportItemValue value : hid_report_values) {
    std::string usage;
    if (USAGE_PAGES.count(value.usage.page) > 0 &&
        USAGE_PAGES.at(value.usage.page).usages_.count(value.usage.usage) > 0) {
      usage = USAGE_PAGES.at(value.usage.page).usages_.at(value.usage.usage);
    } else {
      usage = std::to_string(value.usage.page) + "_" +
              std::to_string(value.usage.usage);
    }
    this->fire_homeassistant_event(
        "esphome.hid_events",
        {{"usage", usage}, {"value", std::to_string(value.value)}});
    if (this->last_event_usage_text_sensor != nullptr) {
      this->last_event_usage_text_sensor->publish_state(usage);
    }
    if (this->last_event_value_sensor != nullptr) {
      this->last_event_value_sensor->publish_state(value.value);
    }
    ESP_LOGI(TAG, "Send HID event to HomeAssistant: usage: %s, value: %d",
             usage.c_str(), value.value);
  }

  delete[] data;
}

void BLEClientHID::register_last_event_value_sensor(
    sensor::Sensor *last_event_value_sensor) {
  this->last_event_value_sensor = last_event_value_sensor;
}

void BLEClientHID::register_battery_sensor(sensor::Sensor *battery_sensor) {
  this->battery_sensor = battery_sensor;
}

void BLEClientHID::register_last_event_usage_text_sensor(
    text_sensor::TextSensor *last_event_usage_text_sensor) {
  this->last_event_usage_text_sensor = last_event_usage_text_sensor;
}

void BLEClientHID::schedule_read_char(
    ble_client::BLECharacteristic *characteristic) {
  if (characteristic != nullptr &&
      ((characteristic->properties & ESP_GATT_CHAR_PROP_BIT_READ) != 0)) {
    if (esp_ble_gattc_read_char(
            this->parent()->get_gattc_if(), this->parent()->get_conn_id(),
            characteristic->handle, ESP_GATT_AUTH_REQ_NO_MITM) != ESP_OK) {
      ESP_LOGW(TAG, "read_char failed");
    }
    this->handles_to_read.insert(
        std::make_pair(characteristic->handle, nullptr));
    return;
  }
  ESP_LOGW(TAG, "characteristic not found");
}

uint8_t *BLEClientHID::parse_characteristic_data(
    ble_client::BLEService *service, uint16_t uuid) {
  using namespace ble_client;
  BLECharacteristic *characteristic = service->get_characteristic(uuid);
  if (characteristic == nullptr) {
    ESP_LOGD(TAG, "No characteristic with uuid %#X found on device", uuid);
    return nullptr;
  }
  if (handles_to_read.count(characteristic->handle) >= 1) {
    ESP_LOGD(
        TAG,
        "Characteristic parsed for uuid %#X and handle %#X starts with %#X",
        uuid, characteristic->handle,
        *(handles_to_read[characteristic->handle]->value_));
    return handles_to_read[characteristic->handle]->value_;
  }
  ESP_LOGD(TAG,
           "Characteristic with uuid %#X and handle %#X not stored in "
           "handles_to_read",
           uuid, characteristic->handle);
  return nullptr;
}

void BLEClientHID::configure_hid_client() {
  using namespace ble_client;
  BLEService *battery_service =
      this->parent()->get_service(ESP_GATT_UUID_BATTERY_SERVICE_SVC);
  BLEService *device_info_service =
      this->parent()->get_service(ESP_GATT_UUID_DEVICE_INFO_SVC);
  BLEService *hid_service = this->parent()->get_service(ESP_GATT_UUID_HID_SVC);
  BLEService *generic_access_service = this->parent()->get_service(0x1800);

  if (generic_access_service != nullptr) {
    uint8_t *t_device_name = this->parse_characteristic_data(
        generic_access_service, ESP_GATT_UUID_GAP_DEVICE_NAME);
    if (t_device_name != nullptr) {
      this->device_name = (const char *)t_device_name;
    } else {
      this->device_name = "Generic";
    }
  }
  if (battery_service != nullptr) {
    BLECharacteristic *battery_level_char =
        battery_service->get_characteristic(ESP_GATT_UUID_BATTERY_LEVEL);
    if (battery_level_char != nullptr &&
        ((battery_level_char->properties & ESP_GATT_CHAR_PROP_BIT_NOTIFY) !=
         0)) {
      this->battery_handle = battery_level_char->handle;
      auto status = esp_ble_gattc_register_for_notify(
          this->parent()->get_gattc_if(), this->parent()->get_remote_bda(),
          battery_level_char->handle);
      
      if (status != ESP_OK) {
        ESP_LOGW(TAG, "Register for notify failed for handle %d with status=%d",
                 battery_level_char->handle, status);
      } else {
        this->handles_waiting_for_notify_registration++;
      }
    }
  }
  if (device_info_service != nullptr) {
    BLECharacteristic *pnp_id_char =
        device_info_service->get_characteristic(ESP_GATT_UUID_PNP_ID);
    uint8_t *rdata = this->handles_to_read[pnp_id_char->handle]->value_;
    this->vendor_id = *((uint16_t *)&rdata[1]);
    this->product_id = *((uint16_t *)&rdata[3]);
    this->version = *((uint16_t *)&rdata[5]);
    delete this->handles_to_read[pnp_id_char->handle];
    this->handles_to_read.erase(pnp_id_char->handle);

    uint8_t *t_manufacturer = this->parse_characteristic_data(
        device_info_service, ESP_GATT_UUID_MANU_NAME);
    if (t_manufacturer != nullptr) {
      this->manufacturer = (const char *)t_manufacturer;
    } else {
      this->manufacturer = "Generic";
    }

    uint8_t *t_serial = this->parse_characteristic_data(
        device_info_service, ESP_GATT_UUID_SERIAL_NUMBER_STR);
    if (t_serial != nullptr) {
      this->serial_number = (const char *)t_serial;
    } else {
      this->serial_number = "000000";
    }
  }
  if (hid_service != nullptr) {
    BLECharacteristic *hid_report_map_char =
        hid_service->get_characteristic(ESP_GATT_UUID_HID_REPORT_MAP);
    ESP_LOGD(TAG, "Parse HID Report Map");
    HIDReportMap::esp_logd_report_map(
        this->handles_to_read[hid_report_map_char->handle]->value_,
        this->handles_to_read[hid_report_map_char->handle]->value_len_);
    this->hid_report_map = HIDReportMap::parse_report_map_data(
        this->handles_to_read[hid_report_map_char->handle]->value_,
        this->handles_to_read[hid_report_map_char->handle]->value_len_);
    ESP_LOGD(TAG, "Parse HID Report Map Done");
    std::vector<BLECharacteristic *> chars = hid_service->characteristics;
    for (BLECharacteristic *hid_char : chars) {
      if (hid_char->uuid.get_uuid().uuid.uuid16 == ESP_GATT_UUID_HID_REPORT) {
        if (hid_char->properties & ESP_GATT_CHAR_PROP_BIT_NOTIFY) {
          auto status = esp_ble_gattc_register_for_notify(
              this->parent()->get_gattc_if(), this->parent()->get_remote_bda(),
              hid_char->handle);
          if (status != ESP_OK) {
            ESP_LOGW(TAG,
                     "Register for notify failed for handle %d with status=%d",
                     hid_char->handle, status);
          } else {
            this->handles_waiting_for_notify_registration++;
          }
        }
        BLEDescriptor *rpt_ref_desc =
            hid_char->get_descriptor(ESP_GATT_UUID_RPT_REF_DESCR);
        if (rpt_ref_desc != nullptr) {
          handle_report_id.insert(std::make_pair(
              hid_char->handle,
              this->handles_to_read[rpt_ref_desc->handle]->value_[0]));
          ESP_LOGD(TAG, "Report ID for handle %d is %d", hid_char->handle,
                   this->handles_to_read[rpt_ref_desc->handle]->value_[0]);
        }
      }
    }
  }
  if(generic_access_service != nullptr){
    uint8_t *t_conn_params = this->parse_characteristic_data(generic_access_service, ESP_GATT_UUID_GAP_PREF_CONN_PARAM);
    if(t_conn_params != nullptr){
      this->preferred_conn_params.min_int = t_conn_params[0] | (t_conn_params[1] << 8);
      this->preferred_conn_params.max_int = t_conn_params[2] | (t_conn_params[3] << 8);
      this->preferred_conn_params.latency = t_conn_params[4] | (t_conn_params[5] << 8);
      this->preferred_conn_params.timeout = t_conn_params[6] | (t_conn_params[7] << 8);
      memcpy(this->preferred_conn_params.bda, this->parent()->get_remote_bda(), 6);
      ESP_LOGI(TAG, "Got preferred connection paramters: interval: %.2f - %.2f ms, latency: %u, timeout: %.1f ms", preferred_conn_params.min_int * 1.25f, preferred_conn_params.max_int * 1.25f, preferred_conn_params.latency, preferred_conn_params.timeout*10.f);
    }
  }
  // delete read data:
  for (auto &kv : this->handles_to_read) {
    delete kv.second;
  }
  this->handles_to_read.clear();
}

}  // namespace ble_client_hid
}  // namespace esphome
#endif