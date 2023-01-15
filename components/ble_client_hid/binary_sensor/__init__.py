import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import binary_sensor, ble_client
from esphome.const import CONF_ID
from .. import BLEClientHID, CONF_BLE_CLIENT_HID_ID, ble_client_hid_ns
import ble_client

DEPENDENCIES = ['ble_client_hid']

BLETextSensor = ble_client_hid_ns.class_(
    "BLEBinarySensor",
    binary_sensor.BinarySensor,
    cg.PollingComponent,
    ble_client.BLEClientNode,
)

CONFIG_SCHEMA = cv.All(
    binary_sensor.BINARY_SENSOR_SCHEMA.extend(
        {
            cv.GenerateID(): cv.declare_id(BinarySensor),
            cv.GenerateID(CONF_BLE_CLIENT_HID_ID): cv.use_id(BLEClientHID)
        }
    )
    .extend(cv.polling_component_schema("60s"))
    .extend(ble_client.BLE_CLIENT_HID_SCHEMA)
)

async def to_code(config):
    parent: BLEClientHID = await cg.get_variable(config[CONF_BLE_CLIENT_HID_ID])
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    cg.add(parent.register_ble_node(var))