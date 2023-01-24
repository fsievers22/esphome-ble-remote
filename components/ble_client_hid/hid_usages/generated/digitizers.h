#include "usages.h"

const Usage* const USAGE_DIGITIZER = new Usage(1,"Digitizer", std::vector<std::string>{ "CA"});
const Usage* const USAGE_PEN = new Usage(2,"Pen", std::vector<std::string>{ "CA"});
const Usage* const USAGE_LIGHT_PEN = new Usage(3,"Light Pen", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TOUCH_SCREEN = new Usage(4,"Touch Screen", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TOUCH_PAD = new Usage(5,"Touch Pad", std::vector<std::string>{ "CA"});
const Usage* const USAGE_WHITEBOARD = new Usage(6,"Whiteboard", std::vector<std::string>{ "CA"});
const Usage* const USAGE_COORDINATE_MEASURING_MACHINE = new Usage(7,"Coordinate Measuring Machine", std::vector<std::string>{ "CA"});
const Usage* const USAGE__D_DIGITIZER = new Usage(8,"3D Digitizer", std::vector<std::string>{ "CA"});
const Usage* const USAGE_STEREO_PLOTTER = new Usage(9,"Stereo Plotter", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ARTICULATED_ARM = new Usage(10,"Articulated Arm", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ARMATURE = new Usage(11,"Armature", std::vector<std::string>{ "CA"});
const Usage* const USAGE_MULTIPLE_POINT_DIGITIZER = new Usage(12,"Multiple Point Digitizer", std::vector<std::string>{ "CA"});
const Usage* const USAGE_FREE_SPACE_WAND = new Usage(13,"Free Space Wand", std::vector<std::string>{ "CA"});
const Usage* const USAGE_DEVICE_CONFIGURATION = new Usage(14,"Device Configuration", std::vector<std::string>{ "CA"});
const Usage* const USAGE_CAPACITIVE_HEAT_MAP_DIGITIZER = new Usage(15,"Capacitive Heat Map Digitizer", std::vector<std::string>{ "CA"});
const Usage* const USAGE_STYLUS = new Usage(32,"Stylus", std::vector<std::string>{ "CA","CL"});
const Usage* const USAGE_PUCK = new Usage(33,"Puck", std::vector<std::string>{ "CL"});
const Usage* const USAGE_FINGER = new Usage(34,"Finger", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DEVICE_SETTINGS = new Usage(35,"Device settings", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CHARACTER_GESTURE = new Usage(36,"Character Gesture", std::vector<std::string>{ "CL"});
const Usage* const USAGE_TIP_PRESSURE = new Usage(48,"Tip Pressure", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BARREL_PRESSURE = new Usage(49,"Barrel Pressure", std::vector<std::string>{ "DV"});
const Usage* const USAGE_IN_RANGE = new Usage(50,"In Range", std::vector<std::string>{ "MC"});
const Usage* const USAGE_TOUCH = new Usage(51,"Touch", std::vector<std::string>{ "MC"});
const Usage* const USAGE_UNTOUCH = new Usage(52,"Untouch", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_TAP = new Usage(53,"Tap", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_QUALITY = new Usage(54,"Quality", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_VALID = new Usage(55,"Data Valid", std::vector<std::string>{ "MC"});
const Usage* const USAGE_TRANSDUCER_INDEX = new Usage(56,"Transducer Index", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TABLET_FUNCTION_KEYS = new Usage(57,"Tablet Function Keys", std::vector<std::string>{ "CL"});
const Usage* const USAGE_PROGRAM_CHANGE_KEYS = new Usage(58,"Program Change Keys", std::vector<std::string>{ "CL"});
const Usage* const USAGE_BATTERY_STRENGTH = new Usage(59,"Battery Strength", std::vector<std::string>{ "DV"});
const Usage* const USAGE_INVERT = new Usage(60,"Invert", std::vector<std::string>{ "MC"});
const Usage* const USAGE_X_TILT = new Usage(61,"X Tilt", std::vector<std::string>{ "DV"});
const Usage* const USAGE_Y_TILT = new Usage(62,"Y Tilt", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AZIMUTH = new Usage(63,"Azimuth", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ALTITUDE = new Usage(64,"Altitude", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TWIST = new Usage(65,"Twist", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TIP_SWITCH = new Usage(66,"Tip Switch", std::vector<std::string>{ "MC"});
const Usage* const USAGE_SECONDARY_TIP_SWITCH = new Usage(67,"Secondary Tip Switch", std::vector<std::string>{ "MC"});
const Usage* const USAGE_BARREL_SWITCH = new Usage(68,"Barrel Switch", std::vector<std::string>{ "MC"});
const Usage* const USAGE_ERASER = new Usage(69,"Eraser", std::vector<std::string>{ "MC"});
const Usage* const USAGE_TABLET_PICK = new Usage(70,"Tablet Pick", std::vector<std::string>{ "MC"});
const Usage* const USAGE_TOUCH_VALID = new Usage(71,"Touch Valid", std::vector<std::string>{ "MC"});
const Usage* const USAGE_WIDTH = new Usage(72,"Width", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HEIGHT = new Usage(73,"Height", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_IDENTIFIER = new Usage(81,"Contact Identifier", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DEVICE_MODE = new Usage(82,"Device Mode", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DEVICE_IDENTIFIER = new Usage(83,"Device Identifier", std::vector<std::string>{ "DV","SV"});
const Usage* const USAGE_CONTACT_COUNT = new Usage(84,"Contact Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTACT_COUNT_MAXIMUM = new Usage(85,"Contact Count Maximum", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SCAN_TIME = new Usage(86,"Scan Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SURFACE_SWITCH = new Usage(87,"Surface Switch", std::vector<std::string>{ "DF"});
const Usage* const USAGE_BUTTON_SWITCH = new Usage(88,"Button Switch", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PAD_TYPE = new Usage(89,"Pad Type", std::vector<std::string>{ "SF"});
const Usage* const USAGE_SECONDARY_BARREL_SWITCH = new Usage(90,"Secondary Barrel Switch", std::vector<std::string>{ "MC"});
const Usage* const USAGE_TRANSDUCER_SERIAL_NUMBER = new Usage(91,"Transducer Serial Number", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PREFERRED_COLOR = new Usage(92,"Preferred Color", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PREFERRED_COLOR_IS_LOCKED = new Usage(93,"Preferred Color is Locked", std::vector<std::string>{ "MC"});
const Usage* const USAGE_PREFERRED_LINE_WIDTH = new Usage(94,"Preferred Line Width", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PREFERRED_LINE_WIDTH_IS_LOCKED = new Usage(95,"Preferred Line Width is Locked", std::vector<std::string>{ "MC"});
const Usage* const USAGE_LATENCY_MODE = new Usage(96,"Latency Mode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_GESTURE_CHARACTER_QUALITY = new Usage(97,"Gesture Character Quality", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CHARACTER_GESTURE_DATA_LENGTH = new Usage(98,"Character Gesture Data Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CHARACTER_GESTURE_DATA = new Usage(99,"Character Gesture Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GESTURE_CHARACTER_ENCODING = new Usage(100,"Gesture Character Encoding", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_UTF_CHARACTER_GESTURE_ENCODING = new Usage(101,"UTF8 Character Gesture Encoding", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UTF_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING = new Usage(102,"UTF16 Little Endian Character Gesture Encoding", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UTF_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING = new Usage(103,"UTF16 Big Endian Character Gesture Encoding", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UTF_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING = new Usage(104,"UTF32 Little Endian Character Gesture Encoding", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UTF_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING = new Usage(105,"UTF32 Big Endian Character Gesture Encoding", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VENDOR_ID = new Usage(106,"Capacitive Heat Map Protocol Vendor ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VERSION = new Usage(107,"Capacitive Heat Map Protocol Version", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CAPACITIVE_HEAT_MAP_FRAME_DATA = new Usage(108,"Capacitive Heat Map Frame Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GESTURE_CHARACTER_ENABLE = new Usage(109,"Gesture Character Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_TRANSDUCER_SERIAL_NUMBER_PART_ = new Usage(110,"Transducer Serial Number Part 2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_NO_PREFERRED_COLOR = new Usage(111,"No Preferred Color", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PREFERRED_LINE_STYLE = new Usage(112,"Preferred Line Style", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PREFERRED_LINE_STYLE_IS_LOCKED = new Usage(113,"Preferred Line Style is Locked", std::vector<std::string>{ "MC"});
const Usage* const USAGE_INK = new Usage(114,"Ink", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_PENCIL = new Usage(115,"Pencil", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HIGHLIGHTER = new Usage(116,"Highlighter", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CHISEL_MARKER = new Usage(117,"Chisel Marker", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRUSH = new Usage(118,"Brush", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_NO_PREFERENCE = new Usage(119,"No Preference", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DIGITIZER_DIAGNOSTIC = new Usage(128,"Digitizer Diagnostic", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DIGITIZER_ERROR = new Usage(129,"Digitizer Error", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ERR_NORMAL_STATUS = new Usage(130,"Err Normal Status", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ERR_TRANSDUCERS_EXCEEDED = new Usage(131,"Err Transducers Exceeded", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ERR_FULL_TRANS_FEATURES_UNAVAILABLE = new Usage(132,"Err Full Trans Features Unavailable", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ERR_CHARGE_LOW = new Usage(133,"Err Charge Low", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TRANSDUCER_SOFTWARE_INFO = new Usage(144,"Transducer Software Info", std::vector<std::string>{ "CL"});
const Usage* const USAGE_TRANSDUCER_VENDOR_ID = new Usage(145,"Transducer Vendor Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_TRANSDUCER_PRODUCT_ID = new Usage(146,"Transducer Product Id", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DEVICE_SUPPORTED_PROTOCOLS = new Usage(147,"Device Supported Protocols", std::vector<std::string>{ "NARY","CL"});
const Usage* const USAGE_TRANSDUCER_SUPPORTED_PROTOCOLS = new Usage(148,"Transducer Supported Protocols", std::vector<std::string>{ "NARY","CL"});
const Usage* const USAGE_NO_PROTOCOL = new Usage(149,"No Protocol", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WACOM_AES_PROTOCOL = new Usage(150,"Wacom AES Protocol", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_USI_PROTOCOL = new Usage(151,"USI Protocol", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MICROSOFT_PEN_PROTOCOL = new Usage(152,"Microsoft Pen Protocol", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SUPPORTED_REPORT_RATES = new Usage(160,"Supported Report Rates", std::vector<std::string>{ "SV","CL"});
const Usage* const USAGE_REPORT_RATE = new Usage(161,"Report Rate", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRANSDUCER_CONNECTED = new Usage(162,"Transducer Connected", std::vector<std::string>{ "SF"});
const Usage* const USAGE_SWITCH_DISABLED = new Usage(163,"Switch Disabled", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SWITCH_UNIMPLEMENTED = new Usage(164,"Switch Unimplemented", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_TRANSDUCER_SWITCHES = new Usage(165,"Transducer Switches", std::vector<std::string>{ "SEL"});


const UsagePage* const USAGE_PAGE_DIGITIZERS = new UsagePage(13, "Digitizers", std::map<uint16_t, const Usage* const>{
	{1, USAGE_DIGITIZER},
	{2, USAGE_PEN},
	{3, USAGE_LIGHT_PEN},
	{4, USAGE_TOUCH_SCREEN},
	{5, USAGE_TOUCH_PAD},
	{6, USAGE_WHITEBOARD},
	{7, USAGE_COORDINATE_MEASURING_MACHINE},
	{8, USAGE__D_DIGITIZER},
	{9, USAGE_STEREO_PLOTTER},
	{10, USAGE_ARTICULATED_ARM},
	{11, USAGE_ARMATURE},
	{12, USAGE_MULTIPLE_POINT_DIGITIZER},
	{13, USAGE_FREE_SPACE_WAND},
	{14, USAGE_DEVICE_CONFIGURATION},
	{15, USAGE_CAPACITIVE_HEAT_MAP_DIGITIZER},
	{32, USAGE_STYLUS},
	{33, USAGE_PUCK},
	{34, USAGE_FINGER},
	{35, USAGE_DEVICE_SETTINGS},
	{36, USAGE_CHARACTER_GESTURE},
	{48, USAGE_TIP_PRESSURE},
	{49, USAGE_BARREL_PRESSURE},
	{50, USAGE_IN_RANGE},
	{51, USAGE_TOUCH},
	{52, USAGE_UNTOUCH},
	{53, USAGE_TAP},
	{54, USAGE_QUALITY},
	{55, USAGE_DATA_VALID},
	{56, USAGE_TRANSDUCER_INDEX},
	{57, USAGE_TABLET_FUNCTION_KEYS},
	{58, USAGE_PROGRAM_CHANGE_KEYS},
	{59, USAGE_BATTERY_STRENGTH},
	{60, USAGE_INVERT},
	{61, USAGE_X_TILT},
	{62, USAGE_Y_TILT},
	{63, USAGE_AZIMUTH},
	{64, USAGE_ALTITUDE},
	{65, USAGE_TWIST},
	{66, USAGE_TIP_SWITCH},
	{67, USAGE_SECONDARY_TIP_SWITCH},
	{68, USAGE_BARREL_SWITCH},
	{69, USAGE_ERASER},
	{70, USAGE_TABLET_PICK},
	{71, USAGE_TOUCH_VALID},
	{72, USAGE_WIDTH},
	{73, USAGE_HEIGHT},
	{81, USAGE_CONTACT_IDENTIFIER},
	{82, USAGE_DEVICE_MODE},
	{83, USAGE_DEVICE_IDENTIFIER},
	{84, USAGE_CONTACT_COUNT},
	{85, USAGE_CONTACT_COUNT_MAXIMUM},
	{86, USAGE_SCAN_TIME},
	{87, USAGE_SURFACE_SWITCH},
	{88, USAGE_BUTTON_SWITCH},
	{89, USAGE_PAD_TYPE},
	{90, USAGE_SECONDARY_BARREL_SWITCH},
	{91, USAGE_TRANSDUCER_SERIAL_NUMBER},
	{92, USAGE_PREFERRED_COLOR},
	{93, USAGE_PREFERRED_COLOR_IS_LOCKED},
	{94, USAGE_PREFERRED_LINE_WIDTH},
	{95, USAGE_PREFERRED_LINE_WIDTH_IS_LOCKED},
	{96, USAGE_LATENCY_MODE},
	{97, USAGE_GESTURE_CHARACTER_QUALITY},
	{98, USAGE_CHARACTER_GESTURE_DATA_LENGTH},
	{99, USAGE_CHARACTER_GESTURE_DATA},
	{100, USAGE_GESTURE_CHARACTER_ENCODING},
	{101, USAGE_UTF_CHARACTER_GESTURE_ENCODING},
	{102, USAGE_UTF_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING},
	{103, USAGE_UTF_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING},
	{104, USAGE_UTF_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING},
	{105, USAGE_UTF_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING},
	{106, USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VENDOR_ID},
	{107, USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VERSION},
	{108, USAGE_CAPACITIVE_HEAT_MAP_FRAME_DATA},
	{109, USAGE_GESTURE_CHARACTER_ENABLE},
	{110, USAGE_TRANSDUCER_SERIAL_NUMBER_PART_},
	{111, USAGE_NO_PREFERRED_COLOR},
	{112, USAGE_PREFERRED_LINE_STYLE},
	{113, USAGE_PREFERRED_LINE_STYLE_IS_LOCKED},
	{114, USAGE_INK},
	{115, USAGE_PENCIL},
	{116, USAGE_HIGHLIGHTER},
	{117, USAGE_CHISEL_MARKER},
	{118, USAGE_BRUSH},
	{119, USAGE_NO_PREFERENCE},
	{128, USAGE_DIGITIZER_DIAGNOSTIC},
	{129, USAGE_DIGITIZER_ERROR},
	{130, USAGE_ERR_NORMAL_STATUS},
	{131, USAGE_ERR_TRANSDUCERS_EXCEEDED},
	{132, USAGE_ERR_FULL_TRANS_FEATURES_UNAVAILABLE},
	{133, USAGE_ERR_CHARGE_LOW},
	{144, USAGE_TRANSDUCER_SOFTWARE_INFO},
	{145, USAGE_TRANSDUCER_VENDOR_ID},
	{146, USAGE_TRANSDUCER_PRODUCT_ID},
	{147, USAGE_DEVICE_SUPPORTED_PROTOCOLS},
	{148, USAGE_TRANSDUCER_SUPPORTED_PROTOCOLS},
	{149, USAGE_NO_PROTOCOL},
	{150, USAGE_WACOM_AES_PROTOCOL},
	{151, USAGE_USI_PROTOCOL},
	{152, USAGE_MICROSOFT_PEN_PROTOCOL},
	{160, USAGE_SUPPORTED_REPORT_RATES},
	{161, USAGE_REPORT_RATE},
	{162, USAGE_TRANSDUCER_CONNECTED},
	{163, USAGE_SWITCH_DISABLED},
	{164, USAGE_SWITCH_UNIMPLEMENTED},
	{165, USAGE_TRANSDUCER_SWITCHES},
});
