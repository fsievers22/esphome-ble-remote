#include "ble_hid_client.h"

namespace esphome{
    void BleHidClientComponent::setup() {
    };

    void BleHidClientComponent::update() {
    };
    text_sensor::TextSensor *BleHidClientComponent::get_keycode_sensor(){
        return keycodeSensor;
    }

    binary_sensor::BinarySensor *BleHidClientComponent::get_keypress_sensor(){
        return keypressSensor;
    }
};