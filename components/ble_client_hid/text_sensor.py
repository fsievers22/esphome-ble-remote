import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import text_sensor
from esphome.const import CONF_TYPE
from esphome.components import ble_client_hid


DEPENDENCIES = ['ble_client_hid']

TYPE_LAST_EVENT_USAGE = "last_event_usage"

LastEventUsageTextSensor = text_sensor.text_sensor_ns.class_(
    "TextSensor"
)

CONFIG_SCHEMA = cv.All(
    cv.typed_schema(
        {
            TYPE_LAST_EVENT_USAGE: text_sensor.text_sensor_schema(
                LastEventUsageTextSensor
            )
            .extend(ble_client_hid.BLE_CLIENT_HID_SCHEMA),
        },
    ),
)

async def last_event_usage_text_sensor_to_code(config):
    var = await text_sensor.new_text_sensor(config)
    await ble_client_hid.register_last_event_usage_text_sensor(var, config)

async def to_code(config):
    if config[CONF_TYPE] == TYPE_LAST_EVENT_USAGE:
        await last_event_usage_text_sensor_to_code(config)
