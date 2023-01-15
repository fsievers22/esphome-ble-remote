import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import text_sensor, ble_client
from esphome.const import CONF_ID


DEPENDENCIES = ['ble_client']

BLEHIDKeyTextSensor = ble_client.ble_client_ns.class_(
    "BLEHIDKeyTextSensor",
    text_sensor.TextSensor,
    cg.PollingComponent,
    ble_client.BLEClientNode,
)

CONFIG_SCHEMA = cv.All(
    text_sensor.TEXT_SENSOR_SCHEMA.extend(
        {
            cv.GenerateID(): cv.declare_id(BLEHIDKeyTextSensor)
        }
    )
    .extend(cv.polling_component_schema("60s"))
    .extend(ble_client.BLE_CLIENT_SCHEMA)
)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await ble_client.register_ble_node(var, config)