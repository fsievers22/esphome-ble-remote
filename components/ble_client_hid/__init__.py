import esphome.codegen as cg
from esphome.core import CORE
from esphome.components.esp32 import add_idf_sdkconfig_option
import esphome.config_validation as cv
from esphome.components import ble_client
from esphome.const import CONF_ID


DEPENDENCIES = ['ble_client']
CODE_OWNERS=["@fsievers22"]

MULTI_CONF=3

ble_client_hid_ns = cg.esphome_ns.namespace("ble_client_hid")

BLEClientHID = ble_client_hid_ns.class_(
    "BLEClientHID",
    cg.Component,
    ble_client.BLEClientNode,
)

CONFIG_SCHEMA = (
    cv.Schema(
        {
            cv.GenerateID(): cv.declare_id(BLEClientHID)
        }
    )
    .extend(cv.COMPONENT_SCHEMA)
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

async def register_keypress_binary_sensor(var, config):
    parent = await cg.get_variable(config[CONF_BLE_CLIENT_HID_ID])
    cg.add(parent.register_keypress_binary_sensor(var))

async def register_battery_sensor(var, config):
    parent = await cg.get_variable(config[CONF_BLE_CLIENT_HID_ID])
    cg.add(parent.register_battery_sensor(var))

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)
    await ble_client.register_ble_node(var, config)