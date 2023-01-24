#include "usages.h"

const Usage* const USAGE_GENERAL_PURPOSE_IO_CARD = new Usage(1,"General Purpose IO Card", std::vector<std::string>{ "CA"});
const Usage* const USAGE_COIN_DOOR = new Usage(2,"Coin Door", std::vector<std::string>{ "CA"});
const Usage* const USAGE_WATCHDOG_TIMER = new Usage(3,"Watchdog Timer", std::vector<std::string>{ "CA"});
const Usage* const USAGE_GENERAL_PURPOSE_ANALOG_INPUT_STATE = new Usage(48,"General Purpose Analog Input State", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GENERAL_PURPOSE_DIGITAL_INPUT_STATE = new Usage(49,"General Purpose Digital Input State", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GENERAL_PURPOSE_OPTICAL_INPUT_STATE = new Usage(50,"General Purpose Optical Input State", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GENERAL_PURPOSE_DIGITAL_OUTPUT_STATE = new Usage(51,"General Purpose Digital Output State", std::vector<std::string>{ "DV"});
const Usage* const USAGE_NUMBER_OF_COIN_DOORS = new Usage(52,"Number of Coin Doors", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COIN_DRAWER_DROP_COUNT = new Usage(53,"Coin Drawer Drop Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COIN_DRAWER_START = new Usage(54,"Coin Drawer Start", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_COIN_DRAWER_SERVICE = new Usage(55,"Coin Drawer Service", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_COIN_DRAWER_TILT = new Usage(56,"Coin Drawer Tilt", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_COIN_DOOR_TEST = new Usage(57,"Coin Door Test", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_COIN_DOOR_LOCKOUT = new Usage(64,"Coin Door Lockout", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_WATCHDOG_TIMEOUT = new Usage(65,"Watchdog Timeout", std::vector<std::string>{ "DV"});
const Usage* const USAGE_WATCHDOG_ACTION = new Usage(66,"Watchdog Action", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_WATCHDOG_REBOOT = new Usage(67,"Watchdog Reboot", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WATCHDOG_RESTART = new Usage(68,"Watchdog Restart", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ALARM_INPUT = new Usage(69,"Alarm Input", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COIN_DOOR_COUNTER = new Usage(70,"Coin Door Counter", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_I_O_DIRECTION_MAPPING = new Usage(71,"I/O Direction Mapping", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SET_I_O_DIRECTION_MAPPING = new Usage(72,"Set I/O Direction Mapping", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EXTENDED_OPTICAL_INPUT_STATE = new Usage(73,"Extended Optical Input State", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PIN_PAD_INPUT_STATE = new Usage(74,"Pin Pad Input State", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PIN_PAD_STATUS = new Usage(75,"Pin Pad Status", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PIN_PAD_OUTPUT = new Usage(76,"Pin Pad Output", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_PIN_PAD_COMMAND = new Usage(77,"Pin Pad Command", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_ARCADE = new UsagePage(145, "Arcade", std::map<uint16_t, const Usage* const>{
	{1, USAGE_GENERAL_PURPOSE_IO_CARD},
	{2, USAGE_COIN_DOOR},
	{3, USAGE_WATCHDOG_TIMER},
	{48, USAGE_GENERAL_PURPOSE_ANALOG_INPUT_STATE},
	{49, USAGE_GENERAL_PURPOSE_DIGITAL_INPUT_STATE},
	{50, USAGE_GENERAL_PURPOSE_OPTICAL_INPUT_STATE},
	{51, USAGE_GENERAL_PURPOSE_DIGITAL_OUTPUT_STATE},
	{52, USAGE_NUMBER_OF_COIN_DOORS},
	{53, USAGE_COIN_DRAWER_DROP_COUNT},
	{54, USAGE_COIN_DRAWER_START},
	{55, USAGE_COIN_DRAWER_SERVICE},
	{56, USAGE_COIN_DRAWER_TILT},
	{57, USAGE_COIN_DOOR_TEST},
	{64, USAGE_COIN_DOOR_LOCKOUT},
	{65, USAGE_WATCHDOG_TIMEOUT},
	{66, USAGE_WATCHDOG_ACTION},
	{67, USAGE_WATCHDOG_REBOOT},
	{68, USAGE_WATCHDOG_RESTART},
	{69, USAGE_ALARM_INPUT},
	{70, USAGE_COIN_DOOR_COUNTER},
	{71, USAGE_I_O_DIRECTION_MAPPING},
	{72, USAGE_SET_I_O_DIRECTION_MAPPING},
	{73, USAGE_EXTENDED_OPTICAL_INPUT_STATE},
	{74, USAGE_PIN_PAD_INPUT_STATE},
	{75, USAGE_PIN_PAD_STATUS},
	{76, USAGE_PIN_PAD_OUTPUT},
	{77, USAGE_PIN_PAD_COMMAND},
});
