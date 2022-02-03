#include "esphome.h"

#include <esp_gap_ble_api.h>
#include <esp_gattc_api.h>
#include <esp_bt_defs.h>

#define get_ble_hid_component(constructor) static_cast<BleHidClientComponent *> \
  (const_cast<custom_component::CustomComponentConstructor *>(&constructor)->get_component(0))
#define ble_hid_keycode(id) get_ble_hid_component(id)->get_keycode_sensor()
#define ble_hid_keypress(id) get_ble_hid_component(id)->get_keypress_sensor()


namespace esphome {
    class BleHidClientComponent : public PollingComponent{
        private:
            text_sensor::TextSensor* keycodeSensor;
            binary_sensor::BinarySensor* keypressSensor;
        public:
            BleHidClientComponent();
            void setup() override;
            void update() override;
            text_sensor::TextSensor *get_keycode_sensor();
            binary_sensor::BinarySensor *get_keypress_sensor();
    };
};