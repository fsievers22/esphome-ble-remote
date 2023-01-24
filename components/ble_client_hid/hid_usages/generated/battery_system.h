#include "usages.h"

const Usage* const USAGE_SMART_BATTERY_BATTERY_MODE = new Usage(1,"Smart Battery Battery Mode", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SMART_BATTERY_BATTERY_STATUS = new Usage(2,"Smart Battery Battery Status", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SMART_BATTERY_ALARM_WARNING = new Usage(3,"Smart Battery Alarm Warning", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SMART_BATTERY_CHARGER_MODE = new Usage(4,"Smart Battery Charger Mode", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SMART_BATTERY_CHARGER_STATUS = new Usage(5,"Smart Battery Charger Status", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SMART_BATTERY_CHARGER_SPEC_INFO = new Usage(6,"Smart Battery Charger Spec Info", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SMART_BATTERY_SELECTOR_STATE = new Usage(7,"Smart Battery Selector State", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SMART_BATTERY_SELECTOR_PRESETS = new Usage(8,"Smart Battery Selector Presets", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SMART_BATTERY_SELECTOR_INFO = new Usage(9,"Smart Battery Selector Info", std::vector<std::string>{ "CL"});
const Usage* const USAGE_OPTIONAL_MFG_FUNCTION_ = new Usage(16,"Optional Mfg Function 1", std::vector<std::string>{ "DV"});
const Usage* const USAGE_OPTIONAL_MFG_FUNCTION_ = new Usage(17,"Optional Mfg Function 2", std::vector<std::string>{ "DV"});
const Usage* const USAGE_OPTIONAL_MFG_FUNCTION_ = new Usage(18,"Optional Mfg Function 3", std::vector<std::string>{ "DV"});
const Usage* const USAGE_OPTIONAL_MFG_FUNCTION_ = new Usage(19,"Optional Mfg Function 4", std::vector<std::string>{ "DV"});
const Usage* const USAGE_OPTIONAL_MFG_FUNCTION_ = new Usage(20,"Optional Mfg Function 5", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONNECTION_TO_SM_BUS = new Usage(21,"Connection To SM Bus", std::vector<std::string>{ "DF"});
const Usage* const USAGE_OUTPUT_CONNECTION = new Usage(22,"Output Connection", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CHARGER_CONNECTION = new Usage(23,"Charger Connection", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BATTERY_INSERTION = new Usage(24,"Battery Insertion", std::vector<std::string>{ "DF"});
const Usage* const USAGE_USE_NEXT = new Usage(25,"Use Next", std::vector<std::string>{ "DF"});
const Usage* const USAGE_OK_TO_USE = new Usage(26,"OK To Use", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BATTERY_SUPPORTED = new Usage(27,"Battery Supported", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SELECTOR_REVISION = new Usage(28,"Selector Revision", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CHARGING_INDICATOR = new Usage(29,"Charging Indicator", std::vector<std::string>{ "DF"});
const Usage* const USAGE_MANUFACTURER_ACCESS = new Usage(40,"Manufacturer Access", std::vector<std::string>{ "DV"});
const Usage* const USAGE_REMAINING_CAPACITY_LIMIT = new Usage(41,"Remaining Capacity Limit", std::vector<std::string>{ "DV"});
const Usage* const USAGE_REMAINING_TIME_LIMIT = new Usage(42,"Remaining Time Limit", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AT_RATE = new Usage(43,"At Rate", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CAPACITY_MODE = new Usage(44,"Capacity Mode", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BROADCAST_TO_CHARGER = new Usage(45,"Broadcast To Charger", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PRIMARY_BATTERY = new Usage(46,"Primary Battery", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CHARGE_CONTROLLER = new Usage(47,"Charge Controller", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TERMINATE_CHARGE = new Usage(64,"Terminate Charge", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TERMINATE_DISCHARGE = new Usage(65,"Terminate Discharge", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BELOW_REMAINING_CAPACITY_LIMIT = new Usage(66,"Below Remaining Capacity Limit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REMAINING_TIME_LIMIT_EXPIRED = new Usage(67,"Remaining Time Limit Expired", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHARGING = new Usage(68,"Charging", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DISCHARGING = new Usage(69,"Discharging", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FULLY_CHARGED = new Usage(70,"Fully Charged", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FULLY_DISCHARGED = new Usage(71,"Fully Discharged", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CONDITIONING_FLAG = new Usage(72,"Conditioning Flag", std::vector<std::string>{ "DF"});
const Usage* const USAGE_AT_RATE_OK = new Usage(73,"At Rate OK", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SMART_BATTERY_ERROR_CODE = new Usage(74,"Smart Battery Error Code", std::vector<std::string>{ "DV"});
const Usage* const USAGE_NEED_REPLACEMENT = new Usage(75,"Need Replacement", std::vector<std::string>{ "DF"});
const Usage* const USAGE_AT_RATE_TIME_TO_FULL = new Usage(96,"At Rate Time To Full", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AT_RATE_TIME_TO_EMPTY = new Usage(97,"At Rate Time To Empty", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AVERAGE_CURRENT = new Usage(98,"Average Current", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MAX_ERROR = new Usage(99,"Max Error", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RELATIVE_STATE_OF_CHARGE = new Usage(100,"Relative State Of Charge", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ABSOLUTE_STATE_OF_CHARGE = new Usage(101,"Absolute State Of Charge", std::vector<std::string>{ "DV"});
const Usage* const USAGE_REMAINING_CAPACITY = new Usage(102,"Remaining Capacity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FULL_CHARGE_CAPACITY = new Usage(103,"Full Charge Capacity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RUN_TIME_TO_EMPTY = new Usage(104,"Run Time To Empty", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AVERAGE_TIME_TO_EMPTY = new Usage(105,"Average Time To Empty", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AVERAGE_TIME_TO_FULL = new Usage(106,"Average Time To Full", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CYCLE_COUNT = new Usage(107,"Cycle Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BATTERY_PACK_MODEL_LEVEL = new Usage(128,"Battery Pack Model Level", std::vector<std::string>{ "SV"});
const Usage* const USAGE_INTERNAL_CHARGE_CONTROLLER = new Usage(129,"Internal Charge Controller", std::vector<std::string>{ "SF"});
const Usage* const USAGE_PRIMARY_BATTERY_SUPPORT = new Usage(130,"Primary Battery Support", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DESIGN_CAPACITY = new Usage(131,"Design Capacity", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SPECIFICATION_INFO = new Usage(132,"Specification Info", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MANUFACTURE_DATE = new Usage(133,"Manufacture Date", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SERIAL_NUMBER = new Usage(134,"Serial Number", std::vector<std::string>{ "SV"});
const Usage* const USAGE_IMANUFACTURER_NAME = new Usage(135,"iManufacturer Name", std::vector<std::string>{ "SV"});
const Usage* const USAGE_IDEVICE_NAME = new Usage(136,"iDevice Name", std::vector<std::string>{ "SV"});
const Usage* const USAGE_IDEVICE_CHEMISTRY = new Usage(137,"iDevice Chemistry", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MANUFACTURER_DATA = new Usage(138,"Manufacturer Data", std::vector<std::string>{ "SV"});
const Usage* const USAGE_RECHARGABLE = new Usage(139,"Rechargable", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WARNING_CAPACITY_LIMIT = new Usage(140,"Warning Capacity Limit", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CAPACITY_GRANULARITY_ = new Usage(141,"Capacity Granularity 1", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CAPACITY_GRANULARITY_ = new Usage(142,"Capacity Granularity 2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_IOEM_INFORMATION = new Usage(143,"iOEM Information", std::vector<std::string>{ "SV"});
const Usage* const USAGE_INHIBIT_CHARGE = new Usage(192,"Inhibit Charge", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ENABLE_POLLING = new Usage(193,"Enable Polling", std::vector<std::string>{ "DF"});
const Usage* const USAGE_RESET_TO_ZERO = new Usage(194,"Reset To Zero", std::vector<std::string>{ "DF"});
const Usage* const USAGE_AC_PRESENT = new Usage(208,"AC Present", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BATTERY_PRESENT = new Usage(209,"Battery Present", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POWER_FAIL = new Usage(210,"Power Fail", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ALARM_INHIBITED = new Usage(211,"Alarm Inhibited", std::vector<std::string>{ "DV"});
const Usage* const USAGE_THERMISTOR_UNDER_RANGE = new Usage(212,"Thermistor Under Range", std::vector<std::string>{ "DV"});
const Usage* const USAGE_THERMISTOR_HOT = new Usage(213,"Thermistor Hot", std::vector<std::string>{ "DV"});
const Usage* const USAGE_THERMISTOR_COLD = new Usage(214,"Thermistor Cold", std::vector<std::string>{ "DV"});
const Usage* const USAGE_THERMISTOR_OVER_RANGE = new Usage(215,"Thermistor Over Range", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VOLTAGE_OUT_OF_RANGE = new Usage(216,"Voltage Out Of Range", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CURRENT_OUT_OF_RANGE = new Usage(217,"Current Out Of Range", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CURRENT_NOT_REGULATED = new Usage(218,"Current Not Regulated", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VOLTAGE_NOT_REGULATED = new Usage(219,"Voltage Not Regulated", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MASTER_MODE = new Usage(220,"Master Mode", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CHARGER_SELECTOR_SUPPORT = new Usage(240,"Charger Selector Support", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CHARGER_SPEC = new Usage(241,"Charger Spec", std::vector<std::string>{ "SV"});
const Usage* const USAGE_LEVEL_ = new Usage(242,"Level 2", std::vector<std::string>{ "SF"});
const Usage* const USAGE_LEVEL_ = new Usage(243,"Level 3", std::vector<std::string>{ "SF"});


const UsagePage* const USAGE_PAGE_BATTERY_SYSTEM = new UsagePage(133, "Battery System", std::map<uint16_t, const Usage* const>{
	{1, USAGE_SMART_BATTERY_BATTERY_MODE},
	{2, USAGE_SMART_BATTERY_BATTERY_STATUS},
	{3, USAGE_SMART_BATTERY_ALARM_WARNING},
	{4, USAGE_SMART_BATTERY_CHARGER_MODE},
	{5, USAGE_SMART_BATTERY_CHARGER_STATUS},
	{6, USAGE_SMART_BATTERY_CHARGER_SPEC_INFO},
	{7, USAGE_SMART_BATTERY_SELECTOR_STATE},
	{8, USAGE_SMART_BATTERY_SELECTOR_PRESETS},
	{9, USAGE_SMART_BATTERY_SELECTOR_INFO},
	{16, USAGE_OPTIONAL_MFG_FUNCTION_},
	{17, USAGE_OPTIONAL_MFG_FUNCTION_},
	{18, USAGE_OPTIONAL_MFG_FUNCTION_},
	{19, USAGE_OPTIONAL_MFG_FUNCTION_},
	{20, USAGE_OPTIONAL_MFG_FUNCTION_},
	{21, USAGE_CONNECTION_TO_SM_BUS},
	{22, USAGE_OUTPUT_CONNECTION},
	{23, USAGE_CHARGER_CONNECTION},
	{24, USAGE_BATTERY_INSERTION},
	{25, USAGE_USE_NEXT},
	{26, USAGE_OK_TO_USE},
	{27, USAGE_BATTERY_SUPPORTED},
	{28, USAGE_SELECTOR_REVISION},
	{29, USAGE_CHARGING_INDICATOR},
	{40, USAGE_MANUFACTURER_ACCESS},
	{41, USAGE_REMAINING_CAPACITY_LIMIT},
	{42, USAGE_REMAINING_TIME_LIMIT},
	{43, USAGE_AT_RATE},
	{44, USAGE_CAPACITY_MODE},
	{45, USAGE_BROADCAST_TO_CHARGER},
	{46, USAGE_PRIMARY_BATTERY},
	{47, USAGE_CHARGE_CONTROLLER},
	{64, USAGE_TERMINATE_CHARGE},
	{65, USAGE_TERMINATE_DISCHARGE},
	{66, USAGE_BELOW_REMAINING_CAPACITY_LIMIT},
	{67, USAGE_REMAINING_TIME_LIMIT_EXPIRED},
	{68, USAGE_CHARGING},
	{69, USAGE_DISCHARGING},
	{70, USAGE_FULLY_CHARGED},
	{71, USAGE_FULLY_DISCHARGED},
	{72, USAGE_CONDITIONING_FLAG},
	{73, USAGE_AT_RATE_OK},
	{74, USAGE_SMART_BATTERY_ERROR_CODE},
	{75, USAGE_NEED_REPLACEMENT},
	{96, USAGE_AT_RATE_TIME_TO_FULL},
	{97, USAGE_AT_RATE_TIME_TO_EMPTY},
	{98, USAGE_AVERAGE_CURRENT},
	{99, USAGE_MAX_ERROR},
	{100, USAGE_RELATIVE_STATE_OF_CHARGE},
	{101, USAGE_ABSOLUTE_STATE_OF_CHARGE},
	{102, USAGE_REMAINING_CAPACITY},
	{103, USAGE_FULL_CHARGE_CAPACITY},
	{104, USAGE_RUN_TIME_TO_EMPTY},
	{105, USAGE_AVERAGE_TIME_TO_EMPTY},
	{106, USAGE_AVERAGE_TIME_TO_FULL},
	{107, USAGE_CYCLE_COUNT},
	{128, USAGE_BATTERY_PACK_MODEL_LEVEL},
	{129, USAGE_INTERNAL_CHARGE_CONTROLLER},
	{130, USAGE_PRIMARY_BATTERY_SUPPORT},
	{131, USAGE_DESIGN_CAPACITY},
	{132, USAGE_SPECIFICATION_INFO},
	{133, USAGE_MANUFACTURE_DATE},
	{134, USAGE_SERIAL_NUMBER},
	{135, USAGE_IMANUFACTURER_NAME},
	{136, USAGE_IDEVICE_NAME},
	{137, USAGE_IDEVICE_CHEMISTRY},
	{138, USAGE_MANUFACTURER_DATA},
	{139, USAGE_RECHARGABLE},
	{140, USAGE_WARNING_CAPACITY_LIMIT},
	{141, USAGE_CAPACITY_GRANULARITY_},
	{142, USAGE_CAPACITY_GRANULARITY_},
	{143, USAGE_IOEM_INFORMATION},
	{192, USAGE_INHIBIT_CHARGE},
	{193, USAGE_ENABLE_POLLING},
	{194, USAGE_RESET_TO_ZERO},
	{208, USAGE_AC_PRESENT},
	{209, USAGE_BATTERY_PRESENT},
	{210, USAGE_POWER_FAIL},
	{211, USAGE_ALARM_INHIBITED},
	{212, USAGE_THERMISTOR_UNDER_RANGE},
	{213, USAGE_THERMISTOR_HOT},
	{214, USAGE_THERMISTOR_COLD},
	{215, USAGE_THERMISTOR_OVER_RANGE},
	{216, USAGE_VOLTAGE_OUT_OF_RANGE},
	{217, USAGE_CURRENT_OUT_OF_RANGE},
	{218, USAGE_CURRENT_NOT_REGULATED},
	{219, USAGE_VOLTAGE_NOT_REGULATED},
	{220, USAGE_MASTER_MODE},
	{240, USAGE_CHARGER_SELECTOR_SUPPORT},
	{241, USAGE_CHARGER_SPEC},
	{242, USAGE_LEVEL_},
	{243, USAGE_LEVEL_},
});
