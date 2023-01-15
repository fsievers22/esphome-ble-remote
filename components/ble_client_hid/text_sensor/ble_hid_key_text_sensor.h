#pragma once

#include "esphome/core/component.h"
#include "esphome/components/ble_client/ble_client.h"
#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"
#include "esphome/components/text_sensor/text_sensor.h"

#ifdef USE_ESP32
#include <esp_gattc_api.h>

namespace esphome {
namespace ble_client {

namespace espbt = esphome::esp32_ble_tracker;

class BLEHIDKeyTextSensor : public text_sensor::TextSensor, public PollingComponent, public BLEClientNode {
 public:
  void setup() override;
  void loop() override;
  void update() override;
  void gattc_event_handler(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if,
                           esp_ble_gattc_cb_param_t *param) override;

  void dump_config() override;
  float get_setup_priority() const override { return setup_priority::AFTER_BLUETOOTH; }
  void ble_security_setup();
  std::string parse_data(uint8_t *value, uint16_t value_len);

 protected:
  std::vector<BLECharacteristic *> characteristics;
  std::vector<uint16_t> handles_registered_for_notify;
  espbt::ESPBTUUID descr_uuid_;
};

}  // namespace ble_client
}  // namespace esphome
#endif
