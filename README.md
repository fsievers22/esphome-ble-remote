# ESPHome custom text sensor for ble remote (FireTV-Stick remote)
This custom component can be used to capture button presses of a  FireTV-Stick remote. (Maybe also works for other Bluetooth Low Energy HID devices, probably some modifications of the keymap necessary) 

Creates two sensors:
- text sensor for the keycode
- binary sensor for the key state (pressed/released)


Based on the [esp-idf](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html) frameworks [ble_hid_device_demo](https://github.com/espressif/esp-idf/tree/master/examples/bluetooth/bluedroid/ble/ble_hid_device_demo) example

## How to Use
1. Download all files and extract into a folder
2. Replace substitutions at the top of the `.yaml` file
    ```yaml
    substitutions:
    board: az-delivery-devkit-v4 # Your esp32 board

    # Wifi credentials
    wifi_ssid: !secret wifi_ssid # Required to replace
    wifi_password: !secret wifi_password # Required to replace

    # OTA and API
    ota_password: !secret ota_password # Required to replace

    bluetooth_mac_address: "\"00:00:00:00:00:00\"" # Required to replace
    ```
    The Bluetooth MAC adress has to have the form of 6 hexadecimal digit pairs that are separated by colons.
    
    Examples of Bluetooth MAC Adresses:
    - `0A:22:10:30:FA:F4`
    - `FF:FF:FF:FF:FF:FF`
    - `11:22:33:44:55:66`

    To find the Bluetooth MAC Adress of a device follow for example the following [guide](https://www.techwalla.com/articles/how-do-i-find-a-bluetooth-address).

3. Compile and upload with ESPHome
4. After successful upload to an ESP32 board put your remote in pairing mode (press and hold home button on FireTV-Stick remote for 10 seconds) and the ESP32 should automatically pair and connect to your remote 