#include "ble_hid_client.h"

void MyClientCallback::onConnect(BLEClient* pclient) {
    ESP_LOGI(TAG, "Connected to server with address %s", pclient->getPeerAddress().toString().c_str());
};

void MyClientCallback::onDisconnect(BLEClient* pclient) {
    ESP_LOGI(TAG,"Disconnected from server with address %s", pclient->getPeerAddress().toString().c_str());
};

static void notifyCallback(BLERemoteCharacteristic* pBLERemoteCharacteristic, uint8_t* pData, size_t length, bool isNotify){

   if(length > 0){
        uint8_t dataBit = pData[0];
        if(dataBit == 0){
            ESP_LOGD(TAG,"Released key");
            static_sensor->publish_state("0");
        }
        else if(KEYMAP.count(dataBit) > 0){
            std::string key = KEYMAP.at(dataBit);
            ESP_LOGD(TAG,"Pressed key %s", key.c_str());
            static_sensor->publish_state(key);
        }
        else{
            ESP_LOGW(TAG,"No key defined for databits %x", dataBit);
        }
   }
};

MyAdvertisedDeviceCallbacks::MyAdvertisedDeviceCallbacks(BleHidClientSensor* pSensor) : sensor(pSensor){};

void MyAdvertisedDeviceCallbacks::onResult(BLEAdvertisedDevice advertisedDevice) {
    // We have found a device, let us now see if it has the right address and contains the service we are looking for.
    if (advertisedDevice.getAddress().equals(sensor->getAddress()) && 
        advertisedDevice.haveServiceUUID() && 
        advertisedDevice.isAdvertisingService(sensor->getServiceUUID())) {
        ESP_LOGD(TAG,"Found device with proper address (%s) and service (%s)", sensor->getAddress().toString().c_str(), sensor->getServiceUUID().toString().c_str());
        //Stop scanning and start trying to connect to the server
        sensor->stopScan(true);
    }
} 

float BleHidClientSensor::get_setup_priority() const {
    return setup_priority::LATE; 
};

void BleHidClientSensor::setupNotify(BLERemoteCharacteristic* characterisitc){
    if(characterisitc->canNotify()){
        characterisitc->registerForNotify(notifyCallback);
        ESP_LOGD(TAG,"Setup Notify for characteristic %s with handle %x", characterisitc->getUUID().toString().c_str(), characterisitc->getHandle());
    }
};

BleHidClientSensor::BleHidClientSensor() : PollingComponent(2000), 
    bleAddress(SERVER_ADDRESS), 
    serviceUUID(SERVICE_UUID), 
    charUUID(CHARACTER_UUID), 
    doConnect(false),
    doScan(true){};

BLEUUID BleHidClientSensor::getServiceUUID(){
    return serviceUUID;
}

BLEAddress BleHidClientSensor::getAddress(){
    return bleAddress;
}

bool BleHidClientSensor::connect() {
    ESP_LOGD(TAG,"Forming a connection to %s", bleAddress.toString().c_str());
    if(!pClient->connect(bleAddress)) {  
        //Connection failed
        ESP_LOGD(TAG,"Connection failed");
        return false;
    }
    ESP_LOGD(TAG," - Connected to server");

    // Obtain a reference to the service we are after in the remote BLE server.
    BLERemoteService* pRemoteService = pClient->getService(serviceUUID);


    std::map<uint16_t, BLERemoteCharacteristic*>* characteristics =pRemoteService->getCharacteristicsByHandle();
    std::map<uint16_t, BLERemoteCharacteristic*>::iterator it;
    for (it = characteristics->begin(); it != characteristics->end(); it++){
        uint16_t handle = it->first;
        BLERemoteCharacteristic* characteristic = it->second;
        if(characteristic->getUUID().equals(charUUID)){
            setupNotify(characteristic);
        }
    }
    return true;
};

void BleHidClientSensor::stopScan(bool pConnect){
    pBLEScan->stop();
    doScan = false;
    doConnect = true;
}

void BleHidClientSensor::scan(){
    pBLEScan->start(1);
}

void BleHidClientSensor::setup() {
    ESP_LOGD(TAG,"Starting Arduino BLE Client application...");
    static_sensor = this;
    myClientCallback = new MyClientCallback();
    BLESecurity* pSecurity = new BLESecurity();
    pSecurity->setAuthenticationMode(ESP_LE_AUTH_REQ_SC_BOND);
    pSecurity->setRespEncryptionKey(ESP_BLE_ENC_KEY_MASK | ESP_BLE_ID_KEY_MASK);
    BLEDevice::init("ESP32Test");
    BLEDevice::setEncryptionLevel(ESP_BLE_SEC_ENCRYPT);
    pClient = BLEDevice::createClient();
    pClient->setClientCallbacks(myClientCallback);

    pBLEScan = BLEDevice::getScan();
    pBLEScan->setAdvertisedDeviceCallbacks(new MyAdvertisedDeviceCallbacks(this));
    pBLEScan->setInterval(0x80);
    pBLEScan->setWindow(0x10);
    pBLEScan->setActiveScan(true);
};

void BleHidClientSensor::update() {
    if(doScan){
        scan();
    }else if(doConnect){
        if(!connect()){
            doScan = true;
        }else{
            doConnect = false;
        }
    }else if(!pClient->isConnected()){
        doScan = true;
    }
};
