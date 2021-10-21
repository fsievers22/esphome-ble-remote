#include "esphome.h"
#include "BLEDevice.h"

#define get_ble_hid_component(constructor) static_cast<BleHidClientComponent *> \
  (const_cast<custom_component::CustomComponentConstructor *>(&constructor)->get_component(0))
#define ble_hid_keycode(id) get_ble_hid_component(id)->get_keycode_sensor()
#define ble_hid_keypress(id) get_ble_hid_component(id)->get_keypress_sensor()

using namespace esphome;
const static char* TAG = "ble_hid_client.h";

//The address of the ble server we want to connect to
const static char* SERVER_ADDRESS = "14:0A:C5:D0:D4:A2";


// The ble service we are interested in (HID)
const static uint16_t SERVICE_UUID = 0x1812;
// The ble characteristic we are interested in. (Report)
const static uint16_t CHARACTER_UUID = 0x2a4d;

//Key map for amazon firetv stick remote with volume buttons
static std::map<uint8_t, std::string> KEYMAP {{0x52,"UP"},{0x51,"DOWN"},{0x50,"LEFT"},{0x4f,"RIGHT"},
    {0x21,"VOICE"},{0x66,"POWER"},{0xf1,"BACK"},{0x23,"HOME"},
    {0x40,"MENU"},{0xb4,"REWIND"},{0xcd,"PLAY_PAUSE"},{0xb3,"FAST_FORWARD"},
    {0xe9,"VOL_UP"},{0xea,"VOL_DOWN"},{0xe2,"MUTE"}, {0x58,"ENTER"}}; 

class MyClientCallback : public BLEClientCallbacks {
    public:
        void onConnect(BLEClient* pclient);

        void onDisconnect(BLEClient* pclient);
};

class BleHidClientComponent : public PollingComponent{
    private:
        text_sensor::TextSensor* keycodeSensor;
        binary_sensor::BinarySensor* keypressSensor;
        MyClientCallback* myClientCallback;
        BLERemoteCharacteristic* pRemoteCharacteristic;
        BLEClient* pClient;
        BLEScan* pBLEScan;
        BLEAddress bleAddress;
        BLEUUID serviceUUID;
        BLEUUID charUUID;
        bool doConnect;
        bool doScan;

    public:
        BleHidClientComponent();

        float get_setup_priority() const override; 

        void setupNotify(BLERemoteCharacteristic* characterisitc);

        bool connect();

        void scan();

        text_sensor::TextSensor *get_keycode_sensor();
        binary_sensor::BinarySensor *get_keypress_sensor();

        BLEAddress getAddress();

        void stopScan(bool pConnect);

        BLEUUID getServiceUUID();

        void setup() override;

        void update() override;
};

static BleHidClientComponent* staticComponent;
class MyAdvertisedDeviceCallbacks: public BLEAdvertisedDeviceCallbacks {
    private:
        BleHidClientComponent* component;
    public:
        MyAdvertisedDeviceCallbacks(BleHidClientComponent* pComponent);
        void onResult(BLEAdvertisedDevice advertisedDevice);
};