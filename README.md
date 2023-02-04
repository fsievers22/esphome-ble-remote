# ESPHome external component to read hid events from a ble client
The `ble_client_hid` external component foor ESPHome can be used to capture hid events like key presses from a hid device connected via Bluetooth LE.

#### Tested working with:
- FireTV Remote of [Fire TV Stick - 3rd Gen (2020)](https://developer.amazon.com/docs/fire-tv/device-specifications-fire-tv-streaming-media-player.html?v=ftvstickgen3)
- Nvidia Shield-Fernbedienung (2019) 

## How to Use
### Component:
Multiple `ble_client_hid` components can be configured, but at max three. (See [BLE Client](https://esphome.io/components/ble_client.html) notes for more info).

The device has to use the `esp-idf` framework:
```yaml
esp32:
  board: az-delivery-devkit-v4  #modify to fit your board
  framework:                    #only works n esp-idf framework
    type: esp-idf
```
Each `ble_client_hid` component requires a `ble_client`.
```yaml
esp32_ble_tracker:            

ble_client:
  - id: ble_client_1
    mac_address: "FF:FF:20:00:0F:15"    #modify to fit your ble device

ble_client_hid:
  - id: ble_client_hid_1
    ble_client_id: ble_client_1
```
#### Configuration variables:
- **id**(**Required**, ID): The ID to use for code generation, and for regerence by dependant components
- **ble_client_id**(**Required**, ID): The ID of the `ble_client` component associated with this component
#### Events:
The component sends an event through the HomeAssistant Native API to HomeAssistant, when an hid event happens.
The event is named `esphome.hid_events` and contains a string that contains the following JSON data:
```json
[
    {
        "usage": usage,
        "value": value
    },
    {
        "usage": usage,
        "value": value
    },
    ...
]
```
The usage is a string describing what the value can be used for like the keycode of a keyboard button.

### Battery sensor:
The `ble_client_hid` sensor lets you track the battery level of the BLE HID client.
```yaml
esp32_ble_tracker:            

ble_client:
  - id: ble_client_1
    mac_address: "48:B0:2D:52:29:C6"    #modify to fit your ble device

ble_client_hid:
  - id: ble_client_hid_1
    ble_client_id: ble_client_1

sensor:
  - platform: ble_client_hid
    ble_client_hid_id: ble_client_hid_1
    name: "Battery"
```
#### Configuration variables:
- **ble_client_hid_id**(**Required**, ID): The ID of the `ble_client_hid` component associated with this component
- **id**(**Optional**, ID): Manuallyy specify the ID used for code generation
- All other options from [Sensor](https://esphome.io/components/sensor/index.html)

# Example device configuration:
```yaml
esp32:
  board: az-delivery-devkit-v4  #modify to fit your board
  framework:                    #only works n esp-idf framework
    type: esp-idf

esphome:
  name: example-ble-hid         

external_components:
  - source: components

# Enable logging
logger:
  level: INFO

# Enable Home Assistant API
api:

ota:
  password: !secret ota_password

wifi:
  ssid: !secret wifi_ssid
  password: !secret wifi_password
  fast_connect: on

esp32_ble_tracker:            

ble_client:
  - id: ble_client_1
    mac_address: "48:B0:2D:52:29:C6"    #modify to fit your ble device

ble_client_hid:
  - id: ble_client_hid_1
    ble_client_id: ble_client_1

sensor:
  - platform: ble_client_hid
    ble_client_hid_id: ble_client_hid_1
    name: "Battery"
```