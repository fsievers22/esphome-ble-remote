#include "esphome.h"
#include "BLEDevice.h"

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

class BleHidClientSensor : public PollingComponent, public text_sensor::TextSensor{
    private:
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
        BleHidClientSensor();

        float get_setup_priority() const override; 

        void setupNotify(BLERemoteCharacteristic* characterisitc);

        bool connect();

        void scan();

        BLEAddress getAddress();

        void stopScan(bool pConnect);

        void startScan();

        BLEUUID getServiceUUID();

        void setup() override;

        void update() override;
};

static BleHidClientSensor* static_sensor;

class MyAdvertisedDeviceCallbacks: public BLEAdvertisedDeviceCallbacks {
    private:
        BleHidClientSensor* sensor;
    public:
        MyAdvertisedDeviceCallbacks(BleHidClientSensor* pSensor);
        void onResult(BLEAdvertisedDevice advertisedDevice);
};


//static void notifyCallback(BLERemoteCharacteristic* pBLERemoteCharacteristic, uint8_t* pData, size_t length, bool isNotify);

/* class MySecurity : public BLESecurityCallbacks {
    uint32_t onPassKeyRequest()
    {
        ESP_LOGI(TAG, "PassKeyRequest");
        return 123456;
    }

    void onPassKeyNotify(uint32_t pass_key)
    {
        ESP_LOGI(TAG, "On passkey Notify number:%d", pass_key);
    }

    bool onSecurityRequest()
    {
        ESP_LOGI(TAG, "On Security Request");
        return true;
    }

    void onAuthenticationComplete(esp_ble_auth_cmpl_t cmpl)
    {
        ESP_LOGI(TAG, "Starting BLE work!");
        if(cmpl.success)
        {
            uint16_t length;
            esp_ble_gap_get_whitelist_size(&length);
            ESP_LOGD(TAG, "size: %d", length);
        }
    }

    bool onConfirmPIN(unsigned int v)
    {
        ESP_LOGI(TAG, "On Confirmed Pin Request %d", v);
        return true;
    }
}; */