#include "esphome/core/component.h"
#include "esphome/components/ble_client/ble_client.h"
#include "esphome/components/esp32_ble_tracker/esp32_ble_tracker.h"
#include "esphome/components/text_sensor/text_sensor.h"
#include "esphome/components/binary_sensor/binary_sensor.h"
#include "esphome/components/sensor/sensor.h"
#include "hid_parser.h"

#ifdef USE_ESP32
#include <esp_gattc_api.h>
#include <esp_hidh.h>

namespace esphome {
namespace ble_client_hid {

namespace espbt=esphome::esp32_ble_tracker;

enum class HIDState {
  // Initial state
  INIT,
  SETUP,

  HID_SERVICE_FOUND,

  NO_HID_SERVICE,
  // Client is coonnected
  BLE_CONNECTED,
  // Start reading relevant client characteristics
  READING_CHARS,
  // Finished reaading client characteristics
  READ_CHARS,
  // Configure ble client with read chars e. g. register fr notify
  CONFIGURING,
  // Finished configuring e. g. notify registered
  CONFIGURED,
  // HID opened
  OPENED,
  // HID closed
  CLOSED,
};

class GATTReadData {
  public:
    GATTReadData(uint16_t handle, uint8_t *value, uint16_t value_len){
      this->handle_ = handle;
      this->value_len_ = value_len;
      this->value_ = new uint8_t[value_len];
      memcpy(this->value_, value, sizeof(uint8_t) * value_len);
    }
    ~GATTReadData(){
      delete value_;
    }
  public:
    uint8_t *value_;
    uint16_t value_len_;
    uint16_t handle_;
};

class BLEClientHID : public Component, public ble_client::BLEClientNode {
 public:
  void loop() override;
  void gattc_event_handler(esp_gattc_cb_event_t event, esp_gatt_if_t gattc_if,
                           esp_ble_gattc_cb_param_t *param) override;

  void dump_config() override;
  void hidh_event(esp_hidh_event_t event, esp_hidh_event_data_t *param);
  void schedule_read_char(ble_client::BLECharacteristic *characteristic);
  void on_gatt_read_finished(GATTReadData *data);
  void read_client_characteristics();
  float get_setup_priority() const override { return setup_priority::AFTER_BLUETOOTH; }
  void register_battery_sensor(sensor::Sensor * battery_sensor);
  void configure_hid_client();
  void initialize_dev();
  
 protected:
  HIDReportMap* hid_report_map;
  std::vector<ble_client::BLECharacteristic *> characteristics;
  std::vector<uint16_t> handles_registered_for_notify;
  std::map<uint16_t, GATTReadData *> handles_to_read;
  std::map<uint16_t, uint8_t> handle_report_id;
  sensor::Sensor *battery_sensor;
  HIDState hid_state = HIDState::INIT;
  uint16_t battery_handle;
  uint16_t vendor_id;
  uint16_t product_id;
  uint16_t version;
  std::string device_name;
  std::string manufacturer;
  std::string serial_number;
  
};

}  // namespace ble_client_hid
}  // namespace esphome
#endif
