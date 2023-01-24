import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import sensor
from esphome.const import CONF_ID, UNIT_PERCENT, DEVICE_CLASS_BATTERY, STATE_CLASS_MEASUREMENT
from esphome.components import ble_client_hid


DEPENDENCIES = ['ble_client_hid']

Sensor = sensor.sensor_ns.class_(
    "Sensor"
)

CONFIG_SCHEMA = cv.All(
    sensor.sensor_schema(
        Sensor,
        unit_of_measurement=UNIT_PERCENT,
        accuracy_decimals=0,
        device_class=DEVICE_CLASS_BATTERY,
        state_class=STATE_CLASS_MEASUREMENT,
    )
    .extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA)
)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await ble_client_hid.register_battery_sensor(var, config)