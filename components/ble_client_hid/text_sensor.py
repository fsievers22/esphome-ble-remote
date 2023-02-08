import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import text_sensor
from esphome.const import CONF_ID
from esphome.components import ble_client_hid


DEPENDENCIES = ['ble_client_hid']

TextSensor = text_sensor.text_sensor_ns.class_(
    "TextSensor"
)

CONFIG_SCHEMA = cv.All(
    text_sensor.TEXT_SENSOR_SCHEMA.extend(
        {
            cv.GenerateID(): cv.declare_id(TextSensor)
        }
    )
    .extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA)
)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await ble_client_hid.register_last_event_usage_text_sensor(var, config)