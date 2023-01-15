import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import ble_client
from esphome.const import CONF_ID


DEPENDENCIES = ['ble_client']
CODE_OWNERS=["@fsievers22"]

ble_client_hid_ns = cg.esphome_ns.namespace("ble_client_hid")

BLEClientHID = ble_client_hid_ns.class_(
    "BLEClientHID",
    cg.PollingComponent,
    ble_client.BLEClientNode,
)

CONFIG_SCHEMA = (
    cv.Schema(
        {
            cv.GenerateID(): cv.declare_id(BLEClientHID)
        }
    )
    .extend(cv.polling_component_schema("60s"))
    .extend(ble_client.BLE_CLIENT_SCHEMA)
)

CONF_BLE_CLIENT_HID_ID = "ble_client_hid_id"

BLE_CLIENT_HID_SCHEMA = cv.Schema(
    {
        cv.GenerateID(CONF_BLE_CLIENT_HID_ID): cv.use_id(BLEClientHID),
    }
)

async def register_keycode_text_sensor(var, config):
    parent = await cg.get_variable(config[CONF_BLE_CLIENT_HID_ID])
    cg.add(parent.register_keycode_text_sensor(var))

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await ble_client.register_ble_node(var, config)