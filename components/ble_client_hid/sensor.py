import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import (
    CONF_TYPE,
    UNIT_PERCENT,
    DEVICE_CLASS_BATTERY,
    STATE_CLASS_MEASUREMENT,
    UNIT_EMPTY,
    DEVICE_CLASS_EMPTY,
    STATE_CLASS_NONE,
)
from esphome.components import ble_client_hid


DEPENDENCIES = ['ble_client_hid']

TYPE_BATTERY = "battery"
TYPE_LAST_EVENT_VALUE = "last_event_value"

BatterySensor = sensor.sensor_ns.class_(
    "Sensor"
)

LastEventValueSensor = sensor.sensor_ns.class_(
    "Sensor"
)

CONFIG_SCHEMA = cv.All(
    cv.typed_schema(
        {
            TYPE_BATTERY: sensor.sensor_schema(
                BatterySensor,
                unit_of_measurement=UNIT_PERCENT,
                accuracy_decimals=0,
                device_class=DEVICE_CLASS_BATTERY,
                state_class=STATE_CLASS_MEASUREMENT,
            )
            .extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA),
            TYPE_LAST_EVENT_VALUE: sensor.sensor_schema(
                LastEventValueSensor,
                unit_of_measurement=UNIT_EMPTY,
                accuracy_decimals=0,
                device_class=DEVICE_CLASS_EMPTY,
                state_class=STATE_CLASS_NONE,
            )
            .extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA),
        },
    ),
)

async def battery_sensor_to_code(config):
    var = await sensor.new_sensor(config)
    await ble_client_hid.register_battery_sensor(var, config)

async def last_event_value_sensor_to_code(config):
    var = await sensor.new_sensor(config)
    await ble_client_hid.register_last_event_value_sensor(var, config)

async def to_code(config):
    if config[CONF_TYPE] == TYPE_BATTERY:
        await battery_sensor_to_code(config)
    elif config[CONF_TYPE] == TYPE_LAST_EVENT_VALUE:
        await last_event_value_sensor_to_code(config)
    