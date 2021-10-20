#include "esphome.h"
#include "BLEDevice.h"
#define DEBUG
#define LOG_TAG "ble_hid_client.h"
// The remote service we wish to connect to.
static BLEUUID serviceUUID((uint16_t) 0x1812);
static BLEAddress bleAddress("14:0A:C5:D0:D4:A2");
// The characteristic of the remote service we are interested in.
static BLEUUID charUUID((uint16_t) 0x2a4d);

namespace esphome{

    class MyClientCallback : public BLEClientCallbacks {
        private:
            bool connected = false;
        public:
            void onConnect(BLEClient* pclient) {
                connected = true;
            };

            void onDisconnect(BLEClient* pclient) {
                connected = false;
                ESP_LOGI("ble_hid_client","onDisconnect");
            };

            bool isConnected(){
                return connected;
            };
    };

    static void notifyCallback(BLERemoteCharacteristic* pBLERemoteCharacteristic, uint8_t* pData, size_t length, bool isNotify){
        #ifdef DEBUG
            ESP_LOGI("ble_hid_client","Notify callback for characteristic ");
            ESP_LOGI("ble_hid_client",pBLERemoteCharacteristic->getUUID().toString().c_str());
            ESP_LOGI("ble_hid_client"," of data length ");
            //ESP_LOGI("vle_hid_client",length);
            ESP_LOGI("ble_hid_client","data: ");
            for (size_t i = 0; i < length; i++)
            {
                ESP_LOGI("ble_hid_client","%2x", pData[i]);
            }
        #endif
    };

    class MySecurity : public BLESecurityCallbacks {
        uint32_t onPassKeyRequest()
        {
            ESP_LOGI(LOG_TAG, "PassKeyRequest");
            return 123456;
        }

        void onPassKeyNotify(uint32_t pass_key)
        {
            ESP_LOGI(LOG_TAG, "On passkey Notify number:%d", pass_key);
        }

        bool onSecurityRequest()
        {
            ESP_LOGI(LOG_TAG, "On Security Request");
            return true;
        }

        void onAuthenticationComplete(esp_ble_auth_cmpl_t cmpl)
        {
            ESP_LOGI(LOG_TAG, "Starting BLE work!");
            if(cmpl.success)
            {
                uint16_t length;
                esp_ble_gap_get_whitelist_size(&length);
                ESP_LOGD(LOG_TAG, "size: %d", length);
            }
        }

        bool onConfirmPIN(unsigned int v)
        {
            ESP_LOGI(LOG_TAG, "On Confirmed Pin Request %d", v);
            return true;
        }
    };

    class BleHidClientSensor : public esphome::Component, public esphome::sensor::Sensor {
        private:
            MyClientCallback* myClientCallback = new MyClientCallback();
            BLERemoteCharacteristic* pRemoteCharacteristic;
            BLEClient* pClient;

            long last_log = 0;
            long last_scan = 0;
        public:
            float get_setup_priority() const override { return esphome::setup_priority::LATE; }
            void setupNotify(BLERemoteCharacteristic* characterisitc){
                if(characterisitc->canNotify()){
                    characterisitc->registerForNotify(notifyCallback);
                    ESP_LOGI(LOG_TAG,"Setup Notify for characteristic %s with handle %x", characterisitc->getUUID().toString().c_str(), characterisitc->getHandle());
                }
            }
            bool connectToServer() {
                ESP_LOGI("ble_hid_client","Forming a connection to %s", bleAddress.toString().c_str());
                
        
                if(!pClient->connect(bleAddress)) {  
                    //Connection failed
                    return false;
                }
                ESP_LOGI("ble_hid_client"," - Connected to server");

                // Obtain a reference to the service we are after in the remote BLE server.
                BLERemoteService* pRemoteService = pClient->getService(serviceUUID);


                std::map<uint16_t, BLERemoteCharacteristic*>* characteristics =pRemoteService->getCharacteristicsByHandle();
                std::map<uint16_t, BLERemoteCharacteristic*>::iterator it;
                ESP_LOGI(LOG_TAG, "Handles for Characterisitc %s: ", charUUID.toString().c_str());
                for (it = characteristics->begin(); it != characteristics->end(); it++){
                    uint16_t handle = it->first;
                    BLERemoteCharacteristic* characteristic = it->second;
                    if(characteristic->getUUID().equals(charUUID)){
                        ESP_LOGI(LOG_TAG, "\t%x", handle);
                        setupNotify(characteristic);
                    }
                }
                return true;
            };

            void setup() override {
                ESP_LOGI(LOG_TAG,"Starting Arduino BLE Client application...");
                BLESecurity* pSecurity = new BLESecurity();
                pSecurity->setAuthenticationMode(ESP_LE_AUTH_REQ_SC_BOND);
                pSecurity->setRespEncryptionKey(ESP_BLE_ENC_KEY_MASK | ESP_BLE_ID_KEY_MASK);
                BLEDevice::m_appId = (uint16_t) 0x1;

                BLEDevice::init("ESP32Test");
                BLEDevice::setEncryptionLevel(ESP_BLE_SEC_ENCRYPT);
                BLEDevice::setSecurityCallbacks(new MySecurity());
                ESP_LOGI(LOG_TAG, "App ID: %x", BLEDevice::m_appId);
                pClient = BLEDevice::createClient();
                ESP_LOGI("ble_hid_client"," - Created client");

                pClient->setClientCallbacks(myClientCallback);
            };

            void loop() override {
                if(!myClientCallback->isConnected()){
                    if(!connectToServer()){
                        ESP_LOGI("ble_hid_client", "Connection failed");
                    }
                }
                sleep(1);
            };
    };
}