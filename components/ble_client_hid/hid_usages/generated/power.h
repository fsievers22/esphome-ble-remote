#include "usages.h"

const Usage* const USAGE_INAME = new Usage(1,"iName", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PRESENT_STATUS = new Usage(2,"Present Status", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHANGED_STATUS = new Usage(3,"Changed Status", std::vector<std::string>{ "CL"});
const Usage* const USAGE_UPS = new Usage(4,"UPS", std::vector<std::string>{ "CA"});
const Usage* const USAGE_POWER_SUPPLY = new Usage(5,"Power Supply", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BATTERY_SYSTEM = new Usage(16,"Battery System", std::vector<std::string>{ "CP"});
const Usage* const USAGE_BATTERY_SYSTEM_ID = new Usage(17,"Battery System Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BATTERY = new Usage(18,"Battery", std::vector<std::string>{ "CP"});
const Usage* const USAGE_BATTERY_ID = new Usage(19,"Battery Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CHARGER = new Usage(20,"Charger", std::vector<std::string>{ "CP"});
const Usage* const USAGE_CHARGER_ID = new Usage(21,"Charger Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_POWER_CONVERTER = new Usage(22,"Power Converter", std::vector<std::string>{ "CP"});
const Usage* const USAGE_POWER_CONVERTER_ID = new Usage(23,"Power Converter Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_OUTLET_SYSTEM = new Usage(24,"Outlet System", std::vector<std::string>{ "CP"});
const Usage* const USAGE_OUTLET_SYSTEM_ID = new Usage(25,"Outlet System Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_INPUT = new Usage(26,"Input", std::vector<std::string>{ "CP"});
const Usage* const USAGE_INPUT_ID = new Usage(27,"Input Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_OUTPUT = new Usage(28,"Output", std::vector<std::string>{ "CP"});
const Usage* const USAGE_OUTPUT_ID = new Usage(29,"Output Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_FLOW = new Usage(30,"Flow", std::vector<std::string>{ "CP"});
const Usage* const USAGE_FLOW_ID = new Usage(31,"Flow Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_OUTLET = new Usage(32,"Outlet", std::vector<std::string>{ "CP"});
const Usage* const USAGE_OUTLET_ID = new Usage(33,"Outlet Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_GANG = new Usage(34,"Gang", std::vector<std::string>{ "CL","CP"});
const Usage* const USAGE_GANG_ID = new Usage(35,"Gang Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_POWER_SUMMARY = new Usage(36,"Power Summary", std::vector<std::string>{ "CL","CP"});
const Usage* const USAGE_POWER_SUMMARY_ID = new Usage(37,"Power Summary Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_VOLTAGE = new Usage(48,"Voltage", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CURRENT = new Usage(49,"Current", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FREQUENCY = new Usage(50,"Frequency", std::vector<std::string>{ "DV"});
const Usage* const USAGE_APPARENT_POWER = new Usage(51,"Apparent Power", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ACTIVE_POWER = new Usage(52,"Active Power", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PERCENT_LOAD = new Usage(53,"Percent Load", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TEMPERATURE = new Usage(54,"Temperature", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HUMIDITY = new Usage(55,"Humidity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BAD_COUNT = new Usage(56,"Bad Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONFIG_VOLTAGE = new Usage(64,"Config Voltage", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_CURRENT = new Usage(65,"Config Current", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_FREQUENCY = new Usage(66,"Config Frequency", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_APPARENT_POWER = new Usage(67,"Config Apparent Power", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_ACTIVE_POWER = new Usage(68,"Config Active Power", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_PERCENT_LOAD = new Usage(69,"Config Percent Load", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_TEMPERATURE = new Usage(70,"Config Temperature", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_CONFIG_HUMIDITY = new Usage(71,"Config Humidity", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_SWITCH_ON_CONTROL = new Usage(80,"Switch On Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SWITCH_OFF_CONTROL = new Usage(81,"Switch Off Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TOGGLE_CONTROL = new Usage(82,"Toggle Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LOW_VOLTAGE_TRANSFER = new Usage(83,"Low Voltage Transfer", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HIGH_VOLTAGE_TRANSFER = new Usage(84,"High Voltage Transfer", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DELAY_BEFORE_REBOOT = new Usage(85,"Delay Before Reboot", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DELAY_BEFORE_STARTUP = new Usage(86,"Delay Before Startup", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DELAY_BEFORE_SHUTDOWN = new Usage(87,"Delay Before Shutdown", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TEST = new Usage(88,"Test", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MODULE_RESET = new Usage(89,"Module Reset", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AUDIBLE_ALARM_CONTROL = new Usage(90,"Audible Alarm Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PRESENT = new Usage(96,"Present", std::vector<std::string>{ "DF"});
const Usage* const USAGE_GOOD = new Usage(97,"Good", std::vector<std::string>{ "DF"});
const Usage* const USAGE_INTERNAL_FAILURE = new Usage(98,"Internal Failure", std::vector<std::string>{ "DF"});
const Usage* const USAGE_VOLTAG_OUT_OF_RANGE = new Usage(99,"Voltag Out Of Range", std::vector<std::string>{ "DF"});
const Usage* const USAGE_FREQUENCY_OUT_OF_RANGE = new Usage(100,"Frequency Out Of Range", std::vector<std::string>{ "DF"});
const Usage* const USAGE_OVERLOAD = new Usage(101,"Overload", std::vector<std::string>{ "DF"});
const Usage* const USAGE_OVER_CHARGED = new Usage(102,"Over Charged", std::vector<std::string>{ "DF"});
const Usage* const USAGE_OVER_TEMPERATURE = new Usage(103,"Over Temperature", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SHUTDOWN_REQUESTED = new Usage(104,"Shutdown Requested", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SHUTDOWN_IMMINENT = new Usage(105,"Shutdown Imminent", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SWITCH_ON_OFF = new Usage(107,"Switch On/Off", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SWITCHABLE = new Usage(108,"Switchable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_USED = new Usage(109,"Used", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BOOST = new Usage(110,"Boost", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BUCK = new Usage(111,"Buck", std::vector<std::string>{ "DF"});
const Usage* const USAGE_INITIALIZED = new Usage(112,"Initialized", std::vector<std::string>{ "DF"});
const Usage* const USAGE_TESTED = new Usage(113,"Tested", std::vector<std::string>{ "DF"});
const Usage* const USAGE_AWAITING_POWER = new Usage(114,"Awaiting Power", std::vector<std::string>{ "DF"});
const Usage* const USAGE_COMMUNICATION_LOST = new Usage(115,"Communication Lost", std::vector<std::string>{ "DF"});
const Usage* const USAGE_IMANUFACTURER = new Usage(253,"iManufacturer", std::vector<std::string>{ "SV"});
const Usage* const USAGE_IPRODUCT = new Usage(254,"iProduct", std::vector<std::string>{ "SV"});
const Usage* const USAGE_ISERIALNUMBER = new Usage(255,"iSerialNumber", std::vector<std::string>{ "SV"});


const UsagePage* const USAGE_PAGE_POWER = new UsagePage(132, "Power", std::map<uint16_t, const Usage* const>{
	{1, USAGE_INAME},
	{2, USAGE_PRESENT_STATUS},
	{3, USAGE_CHANGED_STATUS},
	{4, USAGE_UPS},
	{5, USAGE_POWER_SUPPLY},
	{16, USAGE_BATTERY_SYSTEM},
	{17, USAGE_BATTERY_SYSTEM_ID},
	{18, USAGE_BATTERY},
	{19, USAGE_BATTERY_ID},
	{20, USAGE_CHARGER},
	{21, USAGE_CHARGER_ID},
	{22, USAGE_POWER_CONVERTER},
	{23, USAGE_POWER_CONVERTER_ID},
	{24, USAGE_OUTLET_SYSTEM},
	{25, USAGE_OUTLET_SYSTEM_ID},
	{26, USAGE_INPUT},
	{27, USAGE_INPUT_ID},
	{28, USAGE_OUTPUT},
	{29, USAGE_OUTPUT_ID},
	{30, USAGE_FLOW},
	{31, USAGE_FLOW_ID},
	{32, USAGE_OUTLET},
	{33, USAGE_OUTLET_ID},
	{34, USAGE_GANG},
	{35, USAGE_GANG_ID},
	{36, USAGE_POWER_SUMMARY},
	{37, USAGE_POWER_SUMMARY_ID},
	{48, USAGE_VOLTAGE},
	{49, USAGE_CURRENT},
	{50, USAGE_FREQUENCY},
	{51, USAGE_APPARENT_POWER},
	{52, USAGE_ACTIVE_POWER},
	{53, USAGE_PERCENT_LOAD},
	{54, USAGE_TEMPERATURE},
	{55, USAGE_HUMIDITY},
	{56, USAGE_BAD_COUNT},
	{64, USAGE_CONFIG_VOLTAGE},
	{65, USAGE_CONFIG_CURRENT},
	{66, USAGE_CONFIG_FREQUENCY},
	{67, USAGE_CONFIG_APPARENT_POWER},
	{68, USAGE_CONFIG_ACTIVE_POWER},
	{69, USAGE_CONFIG_PERCENT_LOAD},
	{70, USAGE_CONFIG_TEMPERATURE},
	{71, USAGE_CONFIG_HUMIDITY},
	{80, USAGE_SWITCH_ON_CONTROL},
	{81, USAGE_SWITCH_OFF_CONTROL},
	{82, USAGE_TOGGLE_CONTROL},
	{83, USAGE_LOW_VOLTAGE_TRANSFER},
	{84, USAGE_HIGH_VOLTAGE_TRANSFER},
	{85, USAGE_DELAY_BEFORE_REBOOT},
	{86, USAGE_DELAY_BEFORE_STARTUP},
	{87, USAGE_DELAY_BEFORE_SHUTDOWN},
	{88, USAGE_TEST},
	{89, USAGE_MODULE_RESET},
	{90, USAGE_AUDIBLE_ALARM_CONTROL},
	{96, USAGE_PRESENT},
	{97, USAGE_GOOD},
	{98, USAGE_INTERNAL_FAILURE},
	{99, USAGE_VOLTAG_OUT_OF_RANGE},
	{100, USAGE_FREQUENCY_OUT_OF_RANGE},
	{101, USAGE_OVERLOAD},
	{102, USAGE_OVER_CHARGED},
	{103, USAGE_OVER_TEMPERATURE},
	{104, USAGE_SHUTDOWN_REQUESTED},
	{105, USAGE_SHUTDOWN_IMMINENT},
	{107, USAGE_SWITCH_ON_OFF},
	{108, USAGE_SWITCHABLE},
	{109, USAGE_USED},
	{110, USAGE_BOOST},
	{111, USAGE_BUCK},
	{112, USAGE_INITIALIZED},
	{113, USAGE_TESTED},
	{114, USAGE_AWAITING_POWER},
	{115, USAGE_COMMUNICATION_LOST},
	{253, USAGE_IMANUFACTURER},
	{254, USAGE_IPRODUCT},
	{255, USAGE_ISERIALNUMBER},
});
