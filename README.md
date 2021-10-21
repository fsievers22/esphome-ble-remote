# ESPHome custom text sensor for ble remote (FireTV-Stick remote)
This custom component can be used to capture button presses of a BLE-Bluetooth remote, especially a FireTV-Stick remote.
May also be used as base for standalone esp32 applications without esphome. 

Creates two sensors:
- text sensor for the key name
- binary sensor for the state (pressed/released)


Based on https://github.com/chegewara/esp32-hid-keyboard-client with following important improvements:
- Changed the security of ble conection, because otherwise the remote would not automatically reconnect after connection loss/reboot
- Changed how the characteristics are registered for notify (before only one handle of the characteristic was used --> not all keypresses recognized)
  - remote uses multiple handles for hid characteristic
  - find characteristics by handle to get all handles, so you are able to register all for notification
