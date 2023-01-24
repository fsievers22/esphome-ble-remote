import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import binary_sensor
from esphome.const import CONF_ID
from esphome.components import ble_client_hid


DEPENDENCIES = ['ble_client_hid']

BinarySensor = binary_sensor.binary_sensor_ns.class_(
    "BinarySensor"
)

CONFIG_SCHEMA = cv.All(
    binary_sensor.BINARY_SENSOR_SCHEMA.extend(
        {
            cv.GenerateID(): cv.declare_id(BinarySensor)
        }
    )
    .extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA)
)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await ble_client_hid.register_keypress_binary_sensor(var, config)