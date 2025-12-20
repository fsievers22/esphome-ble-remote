import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import text_sensor
from esphome.const import CONF_TYPE
from esphome.components import ble_client_hid


DEPENDENCIES = ['ble_client_hid']

TYPE_LAST_EVENT_USAGE = "last_event_usage"
TYPE_LAST_EVENT_CODE = "last_event_code"

TextSensor = text_sensor.text_sensor_ns.class_(
    "TextSensor"
)

# Updated: Fixed deprecation warning by replacing text_sensor.TEXT_SENSOR_SCHEMA
# with text_sensor.text_sensor_schema(TextSensor) to comply with ESPHome 2025.11.0 changes
# Reference: https://developers.esphome.io/blog/2025/05/14/_schema-deprecations/
CONFIG_SCHEMA = cv.All(
    cv.typed_schema(
        {
            TYPE_LAST_EVENT_USAGE: text_sensor.text_sensor_schema(
                TextSensor
            ).extend(
                {
                    cv.GenerateID(): cv.declare_id(TextSensor)
                }
            ).extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA),
            TYPE_LAST_EVENT_CODE: text_sensor.text_sensor_schema(
                TextSensor
            ).extend(
                {
                    cv.GenerateID(): cv.declare_id(TextSensor)
                }
            ).extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA),
        },
    ),
)

async def last_event_usage_to_code(config):
    var = await text_sensor.new_text_sensor(config)
    await ble_client_hid.register_last_event_usage_text_sensor(var, config)

async def last_event_code_to_code(config):
    var = await text_sensor.new_text_sensor(config)
    await ble_client_hid.register_last_event_code_text_sensor(var, config)

async def to_code(config):
    if config[CONF_TYPE] == TYPE_LAST_EVENT_USAGE:
        await last_event_usage_to_code(config)
    elif config[CONF_TYPE] == TYPE_LAST_EVENT_CODE:
        await last_event_code_to_code(config)
