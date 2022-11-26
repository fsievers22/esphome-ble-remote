#include "esphome.h"

namespace esphome {
    class BleHidClientComponent : public PollingComponent {
        private:
          text_sensor::TextSensor* keycodeSensor = new text_sensor::TextSensor();;
          binary_sensor::BinarySensor* keypressSensor = new binary_sensor::BinarySensor();
            
        public:
          BleHidClientComponent(const char ble_address[]);
          void setup() override;
          void update() override;
          float get_setup_priority() const override { return setup_priority::LATE; }
          text_sensor::TextSensor* getKeycodeSensor();
          binary_sensor::BinarySensor* getKeypressSensor();
    };
};