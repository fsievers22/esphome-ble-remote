#pragma once

#include "esphome/core/component.h"
#include "esphome/components/ble_client/ble_client.h"
#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"
#include "esphome/components/text_sensor/text_sensor.h"

#ifdef USE_ESP32
#include <esp_gattc_api.h>

namespace esphome {
namespace ble_client_hid {

namespace espbt = esphome::esp32_ble_tracker;

class BLEClientHID : public PollingComponent, public ble_client::BLEClientNode {
 public:
  void loop() override;
  void update() override;
  void gattc_event_handler(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if,
                           esp_ble_gattc_cb_param_t *param) override;

  void dump_config() override;
  float get_setup_priority() const override { return setup_priority::AFTER_BLUETOOTH; }
  void register_keycode_text_sensor(text_sensor::TextSensor *keycode_text_sensor);
  std::string parse_data(uint8_t *value, uint16_t value_len);

 protected:
  std::vector<ble_client::BLECharacteristic *> characteristics;
  std::vector<uint16_t> handles_registered_for_notify;
  text_sensor::TextSensor *keycode_text_sensor;

};

}  // namespace ble_client_hid
}  // namespace esphome
#endif
