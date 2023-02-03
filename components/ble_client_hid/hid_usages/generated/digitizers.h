#define USAGE_DIGITIZER "Digitizer"
#define USAGE_PEN "Pen"
#define USAGE_LIGHT_PEN "Light Pen"
#define USAGE_TOUCH_SCREEN "Touch Screen"
#define USAGE_TOUCH_PAD "Touch Pad"
#define USAGE_WHITEBOARD "Whiteboard"
#define USAGE_COORDINATE_MEASURING_MACHINE "Coordinate Measuring Machine"
#define USAGE_3D_DIGITIZER "3D Digitizer"
#define USAGE_STEREO_PLOTTER "Stereo Plotter"
#define USAGE_ARTICULATED_ARM "Articulated Arm"
#define USAGE_ARMATURE "Armature"
#define USAGE_MULTIPLE_POINT_DIGITIZER "Multiple Point Digitizer"
#define USAGE_FREE_SPACE_WAND "Free Space Wand"
#define USAGE_DEVICE_CONFIGURATION "Device Configuration"
#define USAGE_CAPACITIVE_HEAT_MAP_DIGITIZER "Capacitive Heat Map Digitizer"
#define USAGE_STYLUS "Stylus"
#define USAGE_PUCK "Puck"
#define USAGE_FINGER "Finger"
#define USAGE_DEVICE_SETTINGS "Device settings"
#define USAGE_CHARACTER_GESTURE "Character Gesture"
#define USAGE_TIP_PRESSURE "Tip Pressure"
#define USAGE_BARREL_PRESSURE "Barrel Pressure"
#define USAGE_IN_RANGE "In Range"
#define USAGE_TOUCH "Touch"
#define USAGE_UNTOUCH "Untouch"
#define USAGE_TAP "Tap"
#define USAGE_QUALITY "Quality"
#define USAGE_DATA_VALID "Data Valid"
#define USAGE_TRANSDUCER_INDEX "Transducer Index"
#define USAGE_TABLET_FUNCTION_KEYS "Tablet Function Keys"
#define USAGE_PROGRAM_CHANGE_KEYS "Program Change Keys"
#define USAGE_BATTERY_STRENGTH "Battery Strength"
#define USAGE_INVERT "Invert"
#define USAGE_X_TILT "X Tilt"
#define USAGE_Y_TILT "Y Tilt"
#define USAGE_AZIMUTH "Azimuth"
#define USAGE_ALTITUDE "Altitude"
#define USAGE_TWIST "Twist"
#define USAGE_TIP_SWITCH "Tip Switch"
#define USAGE_SECONDARY_TIP_SWITCH "Secondary Tip Switch"
#define USAGE_BARREL_SWITCH "Barrel Switch"
#define USAGE_ERASER "Eraser"
#define USAGE_TABLET_PICK "Tablet Pick"
#define USAGE_TOUCH_VALID "Touch Valid"
#define USAGE_WIDTH "Width"
#define USAGE_HEIGHT "Height"
#define USAGE_CONTACT_IDENTIFIER "Contact Identifier"
#define USAGE_DEVICE_MODE "Device Mode"
#define USAGE_DEVICE_IDENTIFIER "Device Identifier"
#define USAGE_CONTACT_COUNT "Contact Count"
#define USAGE_CONTACT_COUNT_MAXIMUM "Contact Count Maximum"
#define USAGE_SCAN_TIME "Scan Time"
#define USAGE_SURFACE_SWITCH "Surface Switch"
#define USAGE_BUTTON_SWITCH "Button Switch"
#define USAGE_PAD_TYPE "Pad Type"
#define USAGE_SECONDARY_BARREL_SWITCH "Secondary Barrel Switch"
#define USAGE_TRANSDUCER_SERIAL_NUMBER "Transducer Serial Number"
#define USAGE_PREFERRED_COLOR "Preferred Color"
#define USAGE_PREFERRED_COLOR_IS_LOCKED "Preferred Color is Locked"
#define USAGE_PREFERRED_LINE_WIDTH "Preferred Line Width"
#define USAGE_PREFERRED_LINE_WIDTH_IS_LOCKED "Preferred Line Width is Locked"
#define USAGE_LATENCY_MODE "Latency Mode"
#define USAGE_GESTURE_CHARACTER_QUALITY "Gesture Character Quality"
#define USAGE_CHARACTER_GESTURE_DATA_LENGTH "Character Gesture Data Length"
#define USAGE_CHARACTER_GESTURE_DATA "Character Gesture Data"
#define USAGE_GESTURE_CHARACTER_ENCODING "Gesture Character Encoding"
#define USAGE_UTF8_CHARACTER_GESTURE_ENCODING "UTF8 Character Gesture Encoding"
#define USAGE_UTF16_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING "UTF16 Little Endian Character Gesture Encoding"
#define USAGE_UTF16_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING "UTF16 Big Endian Character Gesture Encoding"
#define USAGE_UTF32_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING "UTF32 Little Endian Character Gesture Encoding"
#define USAGE_UTF32_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING "UTF32 Big Endian Character Gesture Encoding"
#define USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VENDOR_ID "Capacitive Heat Map Protocol Vendor ID"
#define USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VERSION "Capacitive Heat Map Protocol Version"
#define USAGE_CAPACITIVE_HEAT_MAP_FRAME_DATA "Capacitive Heat Map Frame Data"
#define USAGE_GESTURE_CHARACTER_ENABLE "Gesture Character Enable"
#define USAGE_TRANSDUCER_SERIAL_NUMBER_PART_2 "Transducer Serial Number Part 2"
#define USAGE_NO_PREFERRED_COLOR "No Preferred Color"
#define USAGE_PREFERRED_LINE_STYLE "Preferred Line Style"
#define USAGE_PREFERRED_LINE_STYLE_IS_LOCKED "Preferred Line Style is Locked"
#define USAGE_INK "Ink"
#define USAGE_PENCIL "Pencil"
#define USAGE_HIGHLIGHTER "Highlighter"
#define USAGE_CHISEL_MARKER "Chisel Marker"
#define USAGE_BRUSH "Brush"
#define USAGE_NO_PREFERENCE "No Preference"
#define USAGE_DIGITIZER_DIAGNOSTIC "Digitizer Diagnostic"
#define USAGE_DIGITIZER_ERROR "Digitizer Error"
#define USAGE_ERR_NORMAL_STATUS "Err Normal Status"
#define USAGE_ERR_TRANSDUCERS_EXCEEDED "Err Transducers Exceeded"
#define USAGE_ERR_FULL_TRANS_FEATURES_UNAVAILABLE "Err Full Trans Features Unavailable"
#define USAGE_ERR_CHARGE_LOW "Err Charge Low"
#define USAGE_TRANSDUCER_SOFTWARE_INFO "Transducer Software Info"
#define USAGE_TRANSDUCER_VENDOR_ID "Transducer Vendor Id"
#define USAGE_TRANSDUCER_PRODUCT_ID "Transducer Product Id"
#define USAGE_DEVICE_SUPPORTED_PROTOCOLS "Device Supported Protocols"
#define USAGE_TRANSDUCER_SUPPORTED_PROTOCOLS "Transducer Supported Protocols"
#define USAGE_NO_PROTOCOL "No Protocol"
#define USAGE_WACOM_AES_PROTOCOL "Wacom AES Protocol"
#define USAGE_USI_PROTOCOL "USI Protocol"
#define USAGE_MICROSOFT_PEN_PROTOCOL "Microsoft Pen Protocol"
#define USAGE_SUPPORTED_REPORT_RATES "Supported Report Rates"
#define USAGE_REPORT_RATE "Report Rate"
#define USAGE_TRANSDUCER_CONNECTED "Transducer Connected"
#define USAGE_SWITCH_DISABLED "Switch Disabled"
#define USAGE_SWITCH_UNIMPLEMENTED "Switch Unimplemented"
#define USAGE_TRANSDUCER_SWITCHES "Transducer Switches"


#define USAGE_PAGE_DIGITIZERS {"Digitizers", {\
	{1, USAGE_DIGITIZER},\
	{2, USAGE_PEN},\
	{3, USAGE_LIGHT_PEN},\
	{4, USAGE_TOUCH_SCREEN},\
	{5, USAGE_TOUCH_PAD},\
	{6, USAGE_WHITEBOARD},\
	{7, USAGE_COORDINATE_MEASURING_MACHINE},\
	{8, USAGE_3D_DIGITIZER},\
	{9, USAGE_STEREO_PLOTTER},\
	{10, USAGE_ARTICULATED_ARM},\
	{11, USAGE_ARMATURE},\
	{12, USAGE_MULTIPLE_POINT_DIGITIZER},\
	{13, USAGE_FREE_SPACE_WAND},\
	{14, USAGE_DEVICE_CONFIGURATION},\
	{15, USAGE_CAPACITIVE_HEAT_MAP_DIGITIZER},\
	{32, USAGE_STYLUS},\
	{33, USAGE_PUCK},\
	{34, USAGE_FINGER},\
	{35, USAGE_DEVICE_SETTINGS},\
	{36, USAGE_CHARACTER_GESTURE},\
	{48, USAGE_TIP_PRESSURE},\
	{49, USAGE_BARREL_PRESSURE},\
	{50, USAGE_IN_RANGE},\
	{51, USAGE_TOUCH},\
	{52, USAGE_UNTOUCH},\
	{53, USAGE_TAP},\
	{54, USAGE_QUALITY},\
	{55, USAGE_DATA_VALID},\
	{56, USAGE_TRANSDUCER_INDEX},\
	{57, USAGE_TABLET_FUNCTION_KEYS},\
	{58, USAGE_PROGRAM_CHANGE_KEYS},\
	{59, USAGE_BATTERY_STRENGTH},\
	{60, USAGE_INVERT},\
	{61, USAGE_X_TILT},\
	{62, USAGE_Y_TILT},\
	{63, USAGE_AZIMUTH},\
	{64, USAGE_ALTITUDE},\
	{65, USAGE_TWIST},\
	{66, USAGE_TIP_SWITCH},\
	{67, USAGE_SECONDARY_TIP_SWITCH},\
	{68, USAGE_BARREL_SWITCH},\
	{69, USAGE_ERASER},\
	{70, USAGE_TABLET_PICK},\
	{71, USAGE_TOUCH_VALID},\
	{72, USAGE_WIDTH},\
	{73, USAGE_HEIGHT},\
	{81, USAGE_CONTACT_IDENTIFIER},\
	{82, USAGE_DEVICE_MODE},\
	{83, USAGE_DEVICE_IDENTIFIER},\
	{84, USAGE_CONTACT_COUNT},\
	{85, USAGE_CONTACT_COUNT_MAXIMUM},\
	{86, USAGE_SCAN_TIME},\
	{87, USAGE_SURFACE_SWITCH},\
	{88, USAGE_BUTTON_SWITCH},\
	{89, USAGE_PAD_TYPE},\
	{90, USAGE_SECONDARY_BARREL_SWITCH},\
	{91, USAGE_TRANSDUCER_SERIAL_NUMBER},\
	{92, USAGE_PREFERRED_COLOR},\
	{93, USAGE_PREFERRED_COLOR_IS_LOCKED},\
	{94, USAGE_PREFERRED_LINE_WIDTH},\
	{95, USAGE_PREFERRED_LINE_WIDTH_IS_LOCKED},\
	{96, USAGE_LATENCY_MODE},\
	{97, USAGE_GESTURE_CHARACTER_QUALITY},\
	{98, USAGE_CHARACTER_GESTURE_DATA_LENGTH},\
	{99, USAGE_CHARACTER_GESTURE_DATA},\
	{100, USAGE_GESTURE_CHARACTER_ENCODING},\
	{101, USAGE_UTF8_CHARACTER_GESTURE_ENCODING},\
	{102, USAGE_UTF16_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING},\
	{103, USAGE_UTF16_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING},\
	{104, USAGE_UTF32_LITTLE_ENDIAN_CHARACTER_GESTURE_ENCODING},\
	{105, USAGE_UTF32_BIG_ENDIAN_CHARACTER_GESTURE_ENCODING},\
	{106, USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VENDOR_ID},\
	{107, USAGE_CAPACITIVE_HEAT_MAP_PROTOCOL_VERSION},\
	{108, USAGE_CAPACITIVE_HEAT_MAP_FRAME_DATA},\
	{109, USAGE_GESTURE_CHARACTER_ENABLE},\
	{110, USAGE_TRANSDUCER_SERIAL_NUMBER_PART_2},\
	{111, USAGE_NO_PREFERRED_COLOR},\
	{112, USAGE_PREFERRED_LINE_STYLE},\
	{113, USAGE_PREFERRED_LINE_STYLE_IS_LOCKED},\
	{114, USAGE_INK},\
	{115, USAGE_PENCIL},\
	{116, USAGE_HIGHLIGHTER},\
	{117, USAGE_CHISEL_MARKER},\
	{118, USAGE_BRUSH},\
	{119, USAGE_NO_PREFERENCE},\
	{128, USAGE_DIGITIZER_DIAGNOSTIC},\
	{129, USAGE_DIGITIZER_ERROR},\
	{130, USAGE_ERR_NORMAL_STATUS},\
	{131, USAGE_ERR_TRANSDUCERS_EXCEEDED},\
	{132, USAGE_ERR_FULL_TRANS_FEATURES_UNAVAILABLE},\
	{133, USAGE_ERR_CHARGE_LOW},\
	{144, USAGE_TRANSDUCER_SOFTWARE_INFO},\
	{145, USAGE_TRANSDUCER_VENDOR_ID},\
	{146, USAGE_TRANSDUCER_PRODUCT_ID},\
	{147, USAGE_DEVICE_SUPPORTED_PROTOCOLS},\
	{148, USAGE_TRANSDUCER_SUPPORTED_PROTOCOLS},\
	{149, USAGE_NO_PROTOCOL},\
	{150, USAGE_WACOM_AES_PROTOCOL},\
	{151, USAGE_USI_PROTOCOL},\
	{152, USAGE_MICROSOFT_PEN_PROTOCOL},\
	{160, USAGE_SUPPORTED_REPORT_RATES},\
	{161, USAGE_REPORT_RATE},\
	{162, USAGE_TRANSDUCER_CONNECTED},\
	{163, USAGE_SWITCH_DISABLED},\
	{164, USAGE_SWITCH_UNIMPLEMENTED},\
	{165, USAGE_TRANSDUCER_SWITCHES},\
}}
