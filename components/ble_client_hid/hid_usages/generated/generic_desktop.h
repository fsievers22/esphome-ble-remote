#include "usages.h"

const Usage* const USAGE_POINTER = new Usage(1,"Pointer", std::vector<std::string>{ "CP"});
const Usage* const USAGE_MOUSE = new Usage(2,"Mouse", std::vector<std::string>{ "CA"});
const Usage* const USAGE_JOYSTICK = new Usage(4,"Joystick", std::vector<std::string>{ "CA"});
const Usage* const USAGE_GAMEPAD = new Usage(5,"Gamepad", std::vector<std::string>{ "CA"});
const Usage* const USAGE_KEYBOARD = new Usage(6,"Keyboard", std::vector<std::string>{ "CA"});
const Usage* const USAGE_KEYPAD = new Usage(7,"Keypad", std::vector<std::string>{ "CA"});
const Usage* const USAGE_MULTI_AXIS_CONTROLLER = new Usage(8,"Multi-axis Controller", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TABLET_PC_SYSTEM_CONTROLS = new Usage(9,"Tablet PC System Controls", std::vector<std::string>{ "CA"});
const Usage* const USAGE_WATER_COOLING_DEVICE = new Usage(10,"Water Cooling Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_COMPUTER_CHASSIS_DEVICE = new Usage(11,"Computer Chassis Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_WIRELESS_RADIO_CONTROLS = new Usage(12,"Wireless Radio Controls", std::vector<std::string>{ "CA"});
const Usage* const USAGE_PORTABLE_DEVICE_CONTROL = new Usage(13,"Portable Device Control", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SYSTEM_MULTI_AXIS_CONTROLLER = new Usage(14,"System Multi-Axis Controller", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SPATIAL_CONTROLLER = new Usage(15,"Spatial Controller", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ASSISTIVE_CONTROL = new Usage(16,"Assistive Control", std::vector<std::string>{ "CA"});
const Usage* const USAGE_DEVICE_DOCK = new Usage(17,"Device Dock", std::vector<std::string>{ "CA"});
const Usage* const USAGE_DOCKABLE_DEVICE = new Usage(18,"Dockable Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_CALL_STATE_MANAGEMENT_CONTROL = new Usage(19,"Call State Management Control", std::vector<std::string>{ "CA"});
const Usage* const USAGE_X = new Usage(48,"X", std::vector<std::string>{ "DV"});
const Usage* const USAGE_Y = new Usage(49,"Y", std::vector<std::string>{ "DV"});
const Usage* const USAGE_Z = new Usage(50,"Z", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RX = new Usage(51,"Rx", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RY = new Usage(52,"Ry", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RZ = new Usage(53,"Rz", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SLIDER = new Usage(54,"Slider", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DIAL = new Usage(55,"Dial", std::vector<std::string>{ "DV"});
const Usage* const USAGE_WHEEL = new Usage(56,"Wheel", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HAT_SWITCH = new Usage(57,"Hat Switch", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COUNTED_BUFFER = new Usage(58,"Counted Buffer", std::vector<std::string>{ "CL"});
const Usage* const USAGE_BYTE_COUNT = new Usage(59,"Byte Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOTION_WAKEUP = new Usage(60,"Motion Wakeup", std::vector<std::string>{ "OSC","DF"});
const Usage* const USAGE_START = new Usage(61,"Start", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SELECT = new Usage(62,"Select", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_VX = new Usage(64,"Vx", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VY = new Usage(65,"Vy", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VZ = new Usage(66,"Vz", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VBRX = new Usage(67,"Vbrx", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VBRY = new Usage(68,"Vbry", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VBRZ = new Usage(69,"Vbrz", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VNO = new Usage(70,"Vno", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FEATURE_NOTIFICATION = new Usage(71,"Feature Notification", std::vector<std::string>{ "DV","DF"});
const Usage* const USAGE_RESOLUTION_MULTIPLIER = new Usage(72,"Resolution Multiplier", std::vector<std::string>{ "DV"});
const Usage* const USAGE_QX = new Usage(73,"Qx", std::vector<std::string>{ "DV"});
const Usage* const USAGE_QY = new Usage(74,"Qy", std::vector<std::string>{ "DV"});
const Usage* const USAGE_QZ = new Usage(75,"Qz", std::vector<std::string>{ "DV"});
const Usage* const USAGE_QW = new Usage(76,"Qw", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SYSTEM_CONTROL = new Usage(128,"System Control", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SYSTEM_POWER_DOWN = new Usage(129,"System Power Down", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_SLEEP = new Usage(130,"System Sleep", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_WAKE_UP = new Usage(131,"System Wake Up", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_CONTEXT_MENU = new Usage(132,"System Context Menu", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_MAIN_MENU = new Usage(133,"System Main Menu", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_APP_MENU = new Usage(134,"System App Menu", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_MENU_HELP = new Usage(135,"System Menu Help", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_MENU_EXIT = new Usage(136,"System Menu Exit", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_MENU_SELECT = new Usage(137,"System Menu Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_MENU_RIGHT = new Usage(138,"System Menu Right", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_SYSTEM_MENU_LEFT = new Usage(139,"System Menu Left", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_SYSTEM_MENU_UP = new Usage(140,"System Menu Up", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_SYSTEM_MENU_DOWN = new Usage(141,"System Menu Down", std::vector<std::string>{ "RTC"});
const Usage* const USAGE_SYSTEM_COLD_RESTART = new Usage(142,"System Cold Restart", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_WARM_RESTART = new Usage(143,"System Warm Restart", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_D_PAD_UP = new Usage(144,"D-pad Up", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_D_PAD_DOWN = new Usage(145,"D-pad Down", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_D_PAD_RIGHT = new Usage(146,"D-pad Right", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_D_PAD_LEFT = new Usage(147,"D-pad Left", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_INDEX_TRIGGER = new Usage(148,"Index Trigger", std::vector<std::string>{ "MC","DV"});
const Usage* const USAGE_PALM_TRIGGER = new Usage(149,"Palm Trigger", std::vector<std::string>{ "MC","DV"});
const Usage* const USAGE_THUMBSTICK = new Usage(150,"Thumbstick", std::vector<std::string>{ "CP"});
const Usage* const USAGE_SYSTEM_FUNCTION_SHIFT = new Usage(151,"System Function Shift", std::vector<std::string>{ "MC"});
const Usage* const USAGE_SYSTEM_FUNCTION_SHIFT_LOCK = new Usage(152,"System Function Shift Lock", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SYSTEM_FUNCTION_SHIFT_LOCK_INDICATOR = new Usage(153,"System Function Shift Lock Indicator", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SYSTEM_DISMISS_NOTIFICATION = new Usage(154,"System Dismiss Notification", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DO_NOT_DISTURB = new Usage(155,"System Do Not Disturb", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SYSTEM_DOCK = new Usage(160,"System Dock", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_UNDOCK = new Usage(161,"System Undock", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_SETUP = new Usage(162,"System Setup", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_BREAK = new Usage(163,"System Break", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DEBUGGER_BREAK = new Usage(164,"System Debugger Break", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_APPLICATION_BREAK = new Usage(165,"Application Break", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_APPLICATION_DEBUGGER_BREAK = new Usage(166,"Application Debugger Break", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_SPEAKER_MUTE = new Usage(167,"System Speaker Mute", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_HIBERNATE = new Usage(168,"System Hibernate", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_INVERT = new Usage(176,"System Display Invert", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_INTERNAL = new Usage(177,"System Display Internal", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_EXTERNAL = new Usage(178,"System Display External", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_BOTH = new Usage(179,"System Display Both", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_DUAL = new Usage(180,"System Display Dual", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_TOGGLE_INT_EXT_MODE = new Usage(181,"System Display Toggle Int/Ext Mode", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_SWAP_PRIMARY_SECONDARY = new Usage(182,"System Display Swap Primary/Secondary", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SYSTEM_DISPLAY_TOGGLE_LCD_AUTOSCALE = new Usage(183,"System Display Toggle LCD Autoscale", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SENSOR_ZONE = new Usage(192,"Sensor Zone", std::vector<std::string>{ "CL"});
const Usage* const USAGE_RPM = new Usage(193,"RPM", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COOLANT_LEVEL = new Usage(194,"Coolant Level", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COOLANT_CRITICAL_LEVEL = new Usage(195,"Coolant Critical Level", std::vector<std::string>{ "SV"});
const Usage* const USAGE_COOLANT_PUMP = new Usage(196,"Coolant Pump", std::vector<std::string>{ "US"});
const Usage* const USAGE_CHASSIS_ENCLOSURE = new Usage(197,"Chassis Enclosure", std::vector<std::string>{ "CL"});
const Usage* const USAGE_WIRELESS_RADIO_BUTTON = new Usage(198,"Wireless Radio Button", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_WIRELESS_RADIO_LED = new Usage(199,"Wireless Radio LED", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_WIRELESS_RADIO_SLIDER_SWITCH = new Usage(200,"Wireless Radio Slider Switch", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SYSTEM_DISPLAY_ROTATION_LOCK_BUTTON = new Usage(201,"System Display Rotation Lock Button", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_SYSTEM_DISPLAY_ROTATION_LOCK_SLIDER_SWITCH = new Usage(202,"System Display Rotation Lock Slider Switch", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CONTROL_ENABLE = new Usage(203,"Control Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DOCKABLE_DEVICE_UNIQUE_ID = new Usage(208,"Dockable Device Unique ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DOCKABLE_DEVICE_VENDOR_ID = new Usage(209,"Dockable Device Vendor ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DOCKABLE_DEVICE_PRIMARY_USAGE_PAGE = new Usage(210,"Dockable Device Primary Usage Page", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DOCKABLE_DEVICE_PRIMARY_USAGE_ID = new Usage(211,"Dockable Device Primary Usage ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DOCKABLE_DEVICE_DOCKING_STATE = new Usage(212,"Dockable Device Docking State", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DOCKABLE_DEVICE_DISPLAY_OCCLUSION = new Usage(213,"Dockable Device Display Occlusion", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DOCKABLE_DEVICE_OBJECT_TYPE = new Usage(214,"Dockable Device Object Type", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CALL_ACTIVE_LED = new Usage(224,"Call Active LED", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CALL_MUTE_TOGGLE = new Usage(225,"Call Mute Toggle", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CALL_MUTE_LED = new Usage(226,"Call Mute LED", std::vector<std::string>{ "OOC"});


const UsagePage* const USAGE_PAGE_GENERIC_DESKTOP = new UsagePage(1, "Generic Desktop", std::map<uint16_t, const Usage* const>{
	{1, USAGE_POINTER},
	{2, USAGE_MOUSE},
	{4, USAGE_JOYSTICK},
	{5, USAGE_GAMEPAD},
	{6, USAGE_KEYBOARD},
	{7, USAGE_KEYPAD},
	{8, USAGE_MULTI_AXIS_CONTROLLER},
	{9, USAGE_TABLET_PC_SYSTEM_CONTROLS},
	{10, USAGE_WATER_COOLING_DEVICE},
	{11, USAGE_COMPUTER_CHASSIS_DEVICE},
	{12, USAGE_WIRELESS_RADIO_CONTROLS},
	{13, USAGE_PORTABLE_DEVICE_CONTROL},
	{14, USAGE_SYSTEM_MULTI_AXIS_CONTROLLER},
	{15, USAGE_SPATIAL_CONTROLLER},
	{16, USAGE_ASSISTIVE_CONTROL},
	{17, USAGE_DEVICE_DOCK},
	{18, USAGE_DOCKABLE_DEVICE},
	{19, USAGE_CALL_STATE_MANAGEMENT_CONTROL},
	{48, USAGE_X},
	{49, USAGE_Y},
	{50, USAGE_Z},
	{51, USAGE_RX},
	{52, USAGE_RY},
	{53, USAGE_RZ},
	{54, USAGE_SLIDER},
	{55, USAGE_DIAL},
	{56, USAGE_WHEEL},
	{57, USAGE_HAT_SWITCH},
	{58, USAGE_COUNTED_BUFFER},
	{59, USAGE_BYTE_COUNT},
	{60, USAGE_MOTION_WAKEUP},
	{61, USAGE_START},
	{62, USAGE_SELECT},
	{64, USAGE_VX},
	{65, USAGE_VY},
	{66, USAGE_VZ},
	{67, USAGE_VBRX},
	{68, USAGE_VBRY},
	{69, USAGE_VBRZ},
	{70, USAGE_VNO},
	{71, USAGE_FEATURE_NOTIFICATION},
	{72, USAGE_RESOLUTION_MULTIPLIER},
	{73, USAGE_QX},
	{74, USAGE_QY},
	{75, USAGE_QZ},
	{76, USAGE_QW},
	{128, USAGE_SYSTEM_CONTROL},
	{129, USAGE_SYSTEM_POWER_DOWN},
	{130, USAGE_SYSTEM_SLEEP},
	{131, USAGE_SYSTEM_WAKE_UP},
	{132, USAGE_SYSTEM_CONTEXT_MENU},
	{133, USAGE_SYSTEM_MAIN_MENU},
	{134, USAGE_SYSTEM_APP_MENU},
	{135, USAGE_SYSTEM_MENU_HELP},
	{136, USAGE_SYSTEM_MENU_EXIT},
	{137, USAGE_SYSTEM_MENU_SELECT},
	{138, USAGE_SYSTEM_MENU_RIGHT},
	{139, USAGE_SYSTEM_MENU_LEFT},
	{140, USAGE_SYSTEM_MENU_UP},
	{141, USAGE_SYSTEM_MENU_DOWN},
	{142, USAGE_SYSTEM_COLD_RESTART},
	{143, USAGE_SYSTEM_WARM_RESTART},
	{144, USAGE_D_PAD_UP},
	{145, USAGE_D_PAD_DOWN},
	{146, USAGE_D_PAD_RIGHT},
	{147, USAGE_D_PAD_LEFT},
	{148, USAGE_INDEX_TRIGGER},
	{149, USAGE_PALM_TRIGGER},
	{150, USAGE_THUMBSTICK},
	{151, USAGE_SYSTEM_FUNCTION_SHIFT},
	{152, USAGE_SYSTEM_FUNCTION_SHIFT_LOCK},
	{153, USAGE_SYSTEM_FUNCTION_SHIFT_LOCK_INDICATOR},
	{154, USAGE_SYSTEM_DISMISS_NOTIFICATION},
	{155, USAGE_SYSTEM_DO_NOT_DISTURB},
	{160, USAGE_SYSTEM_DOCK},
	{161, USAGE_SYSTEM_UNDOCK},
	{162, USAGE_SYSTEM_SETUP},
	{163, USAGE_SYSTEM_BREAK},
	{164, USAGE_SYSTEM_DEBUGGER_BREAK},
	{165, USAGE_APPLICATION_BREAK},
	{166, USAGE_APPLICATION_DEBUGGER_BREAK},
	{167, USAGE_SYSTEM_SPEAKER_MUTE},
	{168, USAGE_SYSTEM_HIBERNATE},
	{176, USAGE_SYSTEM_DISPLAY_INVERT},
	{177, USAGE_SYSTEM_DISPLAY_INTERNAL},
	{178, USAGE_SYSTEM_DISPLAY_EXTERNAL},
	{179, USAGE_SYSTEM_DISPLAY_BOTH},
	{180, USAGE_SYSTEM_DISPLAY_DUAL},
	{181, USAGE_SYSTEM_DISPLAY_TOGGLE_INT_EXT_MODE},
	{182, USAGE_SYSTEM_DISPLAY_SWAP_PRIMARY_SECONDARY},
	{183, USAGE_SYSTEM_DISPLAY_TOGGLE_LCD_AUTOSCALE},
	{192, USAGE_SENSOR_ZONE},
	{193, USAGE_RPM},
	{194, USAGE_COOLANT_LEVEL},
	{195, USAGE_COOLANT_CRITICAL_LEVEL},
	{196, USAGE_COOLANT_PUMP},
	{197, USAGE_CHASSIS_ENCLOSURE},
	{198, USAGE_WIRELESS_RADIO_BUTTON},
	{199, USAGE_WIRELESS_RADIO_LED},
	{200, USAGE_WIRELESS_RADIO_SLIDER_SWITCH},
	{201, USAGE_SYSTEM_DISPLAY_ROTATION_LOCK_BUTTON},
	{202, USAGE_SYSTEM_DISPLAY_ROTATION_LOCK_SLIDER_SWITCH},
	{203, USAGE_CONTROL_ENABLE},
	{208, USAGE_DOCKABLE_DEVICE_UNIQUE_ID},
	{209, USAGE_DOCKABLE_DEVICE_VENDOR_ID},
	{210, USAGE_DOCKABLE_DEVICE_PRIMARY_USAGE_PAGE},
	{211, USAGE_DOCKABLE_DEVICE_PRIMARY_USAGE_ID},
	{212, USAGE_DOCKABLE_DEVICE_DOCKING_STATE},
	{213, USAGE_DOCKABLE_DEVICE_DISPLAY_OCCLUSION},
	{214, USAGE_DOCKABLE_DEVICE_OBJECT_TYPE},
	{224, USAGE_CALL_ACTIVE_LED},
	{225, USAGE_CALL_MUTE_TOGGLE},
	{226, USAGE_CALL_MUTE_LED},
});
