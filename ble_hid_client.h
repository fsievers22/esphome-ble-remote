#include "esphome.h"


#define get_ble_hid_component(constructor) static_cast<BleHidClientComponent *> \
  (const_cast<custom_component::CustomComponentConstructor *>(&constructor)->get_component(0))
#define ble_hid_keycode(id) get_ble_hid_component(id)->getKeycodeSensor()
#define ble_hid_keypress(id) get_ble_hid_component(id)->getKeypressSensor()

namespace esphome {
    class BleHidClientComponent : public PollingComponent {
        private:
            
        public:
            BleHidClientComponent();
            void setup() override;
            void update() override;
            float get_setup_priority() const override { return setup_priority::LATE; }
            text_sensor::TextSensor* getKeycodeSensor();
            binary_sensor::BinarySensor* getKeypressSensor();
    };
};