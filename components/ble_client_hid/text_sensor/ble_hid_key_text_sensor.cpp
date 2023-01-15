#include "ble_hid_key_text_sensor.h"

#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"
#include "esphome/core/application.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"


#include <nvs_flash.h>
#include <freertos/FreeRTOSConfig.h>
#include <esp_bt_main.h>
#include <esp_bt.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_gap_ble_api.h>
#include <esp_bt_defs.h>

#ifdef USE_ESP32

namespace esphome {
namespace ble_client {

static const char *const TAG = "ble_text_sensor";

static const std::string EMPTY = "";

void BLEHIDKeyTextSensor::loop() {}

void BLEHIDKeyTextSensor::dump_config() {
  LOG_TEXT_SENSOR("", "BLE Text Sensor", this);
  ESP_LOGCONFIG(TAG, "  MAC address        : %s", this->parent()->address_str().c_str());
  LOG_UPDATE_INTERVAL(this);
}

void BLEHIDKeyTextSensor::gattc_event_handler(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if,
                                        esp_ble_gattc_cb_param_t *param) {
  switch (event) {
    case ESP_GATTC_OPEN_EVT: {
      if (param->open.status == ESP_GATT_OK) {
        ESP_LOGI(TAG, "[%s] Connected successfully!", this->get_name().c_str());
        break;
      }
      break;
    }
    case ESP_GATTC_CONNECT_EVT: {
      auto ret = esp_ble_set_encryption(param->connect.remote_bda, ESP_BLE_SEC_ENCRYPT);
      if(ret){
        ESP_LOGE(TAG, "[%d] [%s] esp_ble_set_encryption error, status=%d", this->parent()->get_connection_index(),
          this->parent()->address_str().c_str(), ret);
      }
      break;
    }
    case ESP_GATTC_DISCONNECT_EVT: {
      ESP_LOGW(TAG, "[%s] Disconnected!", this->get_name().c_str());
      this->status_set_warning();
      this->publish_state(EMPTY);
      break;
    }
    case ESP_GATTC_SEARCH_CMPL_EVT: {
      bool found_hid_report_descriptor = false;
      this->characteristics.clear();
      this->handles_registered_for_notify.clear();
      auto *service = this->parent()->get_service(ESP_GATT_UUID_HID_SVC);
      if (service == nullptr){
        this->status_set_warning();
        this->publish_state(EMPTY);
        ESP_LOGW(TAG, "No HID service found. Probably not a HID device");
        break;
      }
      if(!service->parsed){
        service->parse_characteristics();
      }
      for(auto *chr : service->characteristics){
        if(chr->uuid == espbt::ESPBTUUID::from_uint16(ESP_GATT_UUID_HID_REPORT) && chr->properties & ESP_GATT_CHAR_PROP_BIT_NOTIFY){
          this->characteristics.push_back(chr);
          auto *descr = chr->get_descriptor(ESP_GATT_UUID_RPT_REF_DESCR);
          if (descr != nullptr ) {
            found_hid_report_descriptor = true;
            auto status = esp_ble_gattc_register_for_notify(this->parent()->get_gattc_if(),
                                                        this->parent()->get_remote_bda(), chr->handle);
          if (status) {
            ESP_LOGW(TAG, "esp_ble_gattc_register_for_notify failed, status=%d", status);
          }
          }
        }
      }
      if (!found_hid_report_descriptor){
        this->status_set_warning();
        this->publish_state(EMPTY);
        ESP_LOGW(TAG, "No HID report descriptor found.");
        break;
      }
      break;
    }
    case ESP_GATTC_NOTIFY_EVT: {
      if (param->notify.conn_id != this->parent()->get_conn_id() 
        || std::find(this->handles_registered_for_notify.begin(), this->handles_registered_for_notify.end(), param->notify.handle) == this->handles_registered_for_notify.end())
        break;
      ESP_LOGV(TAG, "[%s] ESP_GATTC_NOTIFY_EVT: handle=0x%x, value=0x%x", this->get_name().c_str(),
               param->notify.handle, param->notify.value[0]);
      this->publish_state(this->parse_data(param->notify.value, param->notify.value_len));
      break;
    }
    case ESP_GATTC_REG_FOR_NOTIFY_EVT: {
      for(auto *chr : this->characteristics){
        if(chr->handle == param->reg_for_notify.handle){
          if(std::find(this->handles_registered_for_notify.begin(),
            this->handles_registered_for_notify.end(),
            chr->handle) == this->handles_registered_for_notify.end()){
              this->handles_registered_for_notify.push_back(chr->handle);
            }
        }
      }
      if(this->handles_registered_for_notify.size() == this->characteristics.size()){
        this->node_state = espbt::ClientState::ESTABLISHED;
      }
      break;
    }
    default:
      break;
  }
}

std::string BLEHIDKeyTextSensor::parse_data(uint8_t *value, uint16_t value_len) {
  std::string text(value, value + value_len);
  return text;
}

void BLEHIDKeyTextSensor::setup(){
  //this->ble_security_setup();
}

void BLEHIDKeyTextSensor::update() {
  if (this->node_state != espbt::ClientState::ESTABLISHED) {
    ESP_LOGW(TAG, "[%s] Cannot poll, not connected", this->get_name().c_str());
    return;
  }
  if (this->handles_registered_for_notify.empty()) {
    ESP_LOGW(TAG, "[%s] Cannot poll, no service or characteristic found", this->get_name().c_str());
    return;
  }
}

}  // namespace ble_client
}  // namespace esphome
#endif