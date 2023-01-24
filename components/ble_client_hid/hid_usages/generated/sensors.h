#include "usages.h"

const Usage* const USAGE_SENSOR = new Usage(1,"Sensor", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC = new Usage(16,"Biometric", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_HUMAN_PRESENCE = new Usage(17,"Biometric: Human Presence", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_HUMAN_PROXIMITY = new Usage(18,"Biometric: Human Proximity", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_HUMAN_TOUCH = new Usage(19,"Biometric: Human Touch", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_BLOOD_PRESSURE = new Usage(20,"Biometric: Blood Pressure", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_BODY_TEMPERATURE = new Usage(21,"Biometric: Body Temperature", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_HEART_RATE = new Usage(22,"Biometric: Heart Rate", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_HEART_RATE_VARIABILITY = new Usage(23,"Biometric: Heart Rate Variability", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_PERIPHERAL_OXYGEN_SATURATION = new Usage(24,"Biometric: Peripheral Oxygen Saturation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_BIOMETRIC_RESPIRATORY_RATE = new Usage(25,"Biometric: Respiratory Rate", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL = new Usage(32,"Electrical", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_CAPACITANCE = new Usage(33,"Electrical: Capacitance", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_CURRENT = new Usage(34,"Electrical: Current", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_POWER = new Usage(35,"Electrical: Power", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_INDUCTANCE = new Usage(36,"Electrical: Inductance", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_RESISTANCE = new Usage(37,"Electrical: Resistance", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_VOLTAGE = new Usage(38,"Electrical: Voltage", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_POTENTIOMETER = new Usage(39,"Electrical: Potentiometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_FREQUENCY = new Usage(40,"Electrical: Frequency", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ELECTRICAL_PERIOD = new Usage(41,"Electrical: Period", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL = new Usage(48,"Environmental", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_ATMOSPHERIC_PRESSURE = new Usage(49,"Environmental: Atmospheric Pressure", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_HUMIDITY = new Usage(50,"Environmental: Humidity", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_TEMPERATURE = new Usage(51,"Environmental: Temperature", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_WIND_DIRECTION = new Usage(52,"Environmental: Wind Direction", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_WIND_SPEED = new Usage(53,"Environmental: Wind Speed", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_AIR_QUALITY = new Usage(54,"Environmental: Air Quality", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_HEAT_INDEX = new Usage(55,"Environmental: Heat Index", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_SURFACE_TEMPERATURE = new Usage(56,"Environmental: Surface Temperature", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_VOLATILE_ORGANIC_COMPOUNDS = new Usage(57,"Environmental: Volatile Organic Compounds", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_OBJECT_PRESENCE = new Usage(58,"Environmental: Object Presence", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ENVIRONMENTAL_OBJECT_PROXIMITY = new Usage(59,"Environmental: Object Proximity", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LIGHT = new Usage(64,"Light", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LIGHT_AMBIENT_LIGHT = new Usage(65,"Light: Ambient Light", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LIGHT_CONSUMER_INFRARED = new Usage(66,"Light: Consumer Infrared", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LIGHT_INFRARED_LIGHT = new Usage(67,"Light: Infrared Light", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LIGHT_VISIBLE_LIGHT = new Usage(68,"Light: Visible Light", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LIGHT_ULTRAVIOLET_LIGHT = new Usage(69,"Light: Ultraviolet Light", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION = new Usage(80,"Location", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_BROADCAST = new Usage(81,"Location: Broadcast", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_DEAD_RECKONING = new Usage(82,"Location: Dead Reckoning", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_GPS_GLOBAL_POSITIONING_SYSTEM_ = new Usage(83,"Location: GPS (Global Positioning System)", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_LOOKUP = new Usage(84,"Location: Lookup", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_OTHER = new Usage(85,"Location: Other", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_STATIC = new Usage(86,"Location: Static", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_LOCATION_TRIANGULATION = new Usage(87,"Location: Triangulation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL = new Usage(96,"Mechanical", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_BOOLEAN_SWITCH = new Usage(97,"Mechanical: Boolean Switch", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_BOOLEAN_SWITCH_ARRAY = new Usage(98,"Mechanical: Boolean Switch Array", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_MULTIVALUE_SWITCH = new Usage(99,"Mechanical: Multivalue Switch", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_FORCE = new Usage(100,"Mechanical: Force", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_PRESSURE = new Usage(101,"Mechanical: Pressure", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_STRAIN = new Usage(102,"Mechanical: Strain", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_WEIGHT = new Usage(103,"Mechanical: Weight", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_HAPTIC_VIBRATOR = new Usage(104,"Mechanical: Haptic Vibrator", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MECHANICAL_HALL_EFFECT_SWITCH = new Usage(105,"Mechanical: Hall Effect Switch", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION = new Usage(112,"Motion", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_ACCELEROMETER_D = new Usage(113,"Motion: Accelerometer 1D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_ACCELEROMETER_D = new Usage(114,"Motion: Accelerometer 2D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_ACCELEROMETER_D = new Usage(115,"Motion: Accelerometer 3D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_GYROMETER_D = new Usage(116,"Motion: Gyrometer 1D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_GYROMETER_D = new Usage(117,"Motion: Gyrometer 2D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_GYROMETER_D = new Usage(118,"Motion: Gyrometer 3D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_MOTION_DETECTOR = new Usage(119,"Motion: Motion Detector", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_SPEEDOMETER = new Usage(120,"Motion: Speedometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_ACCELEROMETER = new Usage(121,"Motion: Accelerometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_GYROMETER = new Usage(122,"Motion: Gyrometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_GRAVITY_VECTOR = new Usage(123,"Motion: Gravity Vector", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_MOTION_LINEAR_ACCELEROMETER = new Usage(124,"Motion: Linear Accelerometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION = new Usage(128,"Orientation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_COMPASS_D = new Usage(129,"Orientation: Compass 1D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_COMPASS_D = new Usage(130,"Orientation: Compass 2D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_COMPASS_D = new Usage(131,"Orientation: Compass 3D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_INCLINOMETER_D = new Usage(132,"Orientation: Inclinometer 1D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_INCLINOMETER_D = new Usage(133,"Orientation: Inclinometer 2D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_INCLINOMETER_D = new Usage(134,"Orientation: Inclinometer 3D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_DISTANCE_D = new Usage(135,"Orientation: Distance 1D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_DISTANCE_D = new Usage(136,"Orientation: Distance 2D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_DISTANCE_D = new Usage(137,"Orientation: Distance 3D", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_DEVICE_ORIENTATION = new Usage(138,"Orientation: Device Orientation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_COMPASS = new Usage(139,"Orientation: Compass", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_INCLINOMETER = new Usage(140,"Orientation: Inclinometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_DISTANCE = new Usage(141,"Orientation: Distance", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_RELATIVE_ORIENTATION = new Usage(142,"Orientation: Relative Orientation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_SIMPLE_ORIENTATION = new Usage(143,"Orientation: Simple Orientation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_SCANNER = new Usage(144,"Scanner", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_SCANNER_BARCODE = new Usage(145,"Scanner: Barcode", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_SCANNER_RFID = new Usage(146,"Scanner: RFID", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_SCANNER_NFC = new Usage(147,"Scanner: NFC", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_TIME = new Usage(160,"Time", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_TIME_ALARM_TIMER = new Usage(161,"Time: Alarm Timer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_TIME_REAL_TIME_CLOCK = new Usage(162,"Time: Real Time Clock", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_PERSONAL_ACTIVITY = new Usage(176,"Personal Activity", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_PERSONAL_ACTIVITY_ACTIVITY_DETECTION = new Usage(177,"Personal Activity: Activity Detection", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_PERSONAL_ACTIVITY_DEVICE_POSITION = new Usage(178,"Personal Activity: Device Position", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_PERSONAL_ACTIVITY_PEDOMETER = new Usage(179,"Personal Activity: Pedometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_PERSONAL_ACTIVITY_STEP_DETECTION = new Usage(180,"Personal Activity: Step Detection", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_EXTENDED = new Usage(192,"Orientation Extended", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_EXTENDED_GEOMAGNETIC_ORIENTATION = new Usage(193,"Orientation Extended: Geomagnetic Orientation", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_ORIENTATION_EXTENDED_MAGNETOMETER = new Usage(194,"Orientation Extended: Magnetometer", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_GESTURE = new Usage(208,"Gesture", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_GESTURE_CHASSIS_FLIP_GESTURE = new Usage(209,"Gesture: Chassis Flip Gesture", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_GESTURE_HINGE_FOLD_GESTURE = new Usage(210,"Gesture: Hinge Fold Gesture", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_OTHER = new Usage(224,"Other", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_OTHER_CUSTOM = new Usage(225,"Other: Custom", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_OTHER_GENERIC = new Usage(226,"Other: Generic", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_OTHER_GENERIC_ENUMERATOR = new Usage(227,"Other: Generic Enumerator", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_OTHER_HINGE_ANGLE = new Usage(228,"Other: Hinge Angle", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(240,"Vendor Reserved 1", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(241,"Vendor Reserved 2", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(242,"Vendor Reserved 3", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(243,"Vendor Reserved 4", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(244,"Vendor Reserved 5", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(245,"Vendor Reserved 6", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(246,"Vendor Reserved 7", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(247,"Vendor Reserved 8", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(248,"Vendor Reserved 9", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(249,"Vendor Reserved 10", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(250,"Vendor Reserved 11", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(251,"Vendor Reserved 12", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(252,"Vendor Reserved 13", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(253,"Vendor Reserved 14", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(254,"Vendor Reserved 15", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_VENDOR_RESERVED_ = new Usage(255,"Vendor Reserved 16", std::vector<std::string>{ "CA","CP"});
const Usage* const USAGE_EVENT = new Usage(512,"Event", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EVENT_SENSOR_STATE = new Usage(513,"Event: Sensor State", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_EVENT_SENSOR_EVENT = new Usage(514,"Event: Sensor Event", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY = new Usage(768,"Property", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_FRIENDLY_NAME = new Usage(769,"Property: Friendly Name", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_PERSISTENT_UNIQUE_ID = new Usage(770,"Property: Persistent Unique ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_SENSOR_STATUS = new Usage(771,"Property: Sensor Status", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_MINIMUM_REPORT_INTERVAL = new Usage(772,"Property: Minimum Report Interval", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_SENSOR_MANUFACTURER = new Usage(773,"Property: Sensor Manufacturer", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_SENSOR_MODEL = new Usage(774,"Property: Sensor Model", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_SENSOR_SERIAL_NUMBER = new Usage(775,"Property: Sensor Serial Number", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_SENSOR_DESCRIPTION = new Usage(776,"Property: Sensor Description", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_SENSOR_CONNECTION_TYPE = new Usage(777,"Property: Sensor Connection Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_SENSOR_DEVICE_PATH = new Usage(778,"Property: Sensor Device Path", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_HARDWARE_REVISION = new Usage(779,"Property: Hardware Revision", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_FIRMWARE_VERSION = new Usage(780,"Property: Firmware Version", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_RELEASE_DATE = new Usage(781,"Property: Release Date", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_REPORT_INTERVAL = new Usage(782,"Property: Report Interval", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CHANGE_SENSITIVITY_ABSOLUTE = new Usage(783,"Property: Change Sensitivity Absolute", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CHANGE_SENSITIVITY_PERCENT_OF_RANGE = new Usage(784,"Property: Change Sensitivity Percent of Range", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CHANGE_SENSITIVITY_PERCENT_RELATIVE = new Usage(785,"Property: Change Sensitivity Percent Relative", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_ACCURACY = new Usage(786,"Property: Accuracy", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_RESOLUTION = new Usage(787,"Property: Resolution", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_MAXIMUM = new Usage(788,"Property: Maximum", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_MINIMUM = new Usage(789,"Property: Minimum", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_REPORTING_STATE = new Usage(790,"Property: Reporting State", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_SAMPLING_RATE = new Usage(791,"Property: Sampling Rate", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_RESPONSE_CURVE = new Usage(792,"Property: Response Curve", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_POWER_STATE = new Usage(793,"Property: Power State", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_MAXIMUM_FIFO_EVENTS = new Usage(794,"Property: Maximum FIFO Events", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_REPORT_LATENCY = new Usage(795,"Property: Report Latency", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_FLUSH_FIFO_EVENTS = new Usage(796,"Property: Flush FIFO Events", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PROPERTY_MAXIMUM_POWER_CONSUMPTION = new Usage(797,"Property: Maximum Power Consumption", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_IS_PRIMARY = new Usage(798,"Property: Is Primary", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PROPERTY_HUMAN_PRESENCE_DETECTION_TYPE = new Usage(799,"Property: Human Presence Detection Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_LOCATION = new Usage(1024,"Data Field: Location", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_ALTITUDE_ANTENNA_SEA_LEVEL = new Usage(1026,"Data Field: Altitude Antenna Sea Level", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DIFFERENTIAL_REFERENCE_STATION_ID = new Usage(1027,"Data Field: Differential Reference Station ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ALTITUDE_ELLIPSOID_ERROR = new Usage(1028,"Data Field: Altitude Ellipsoid Error", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ALTITUDE_ELLIPSOID = new Usage(1029,"Data Field: Altitude Ellipsoid", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ALTITUDE_SEA_LEVEL_ERROR = new Usage(1030,"Data Field: Altitude Sea Level Error", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ALTITUDE_SEA_LEVEL = new Usage(1031,"Data Field: Altitude Sea Level", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DIFFERENTIAL_GPS_DATA_AGE = new Usage(1032,"Data Field: Differential GPS Data Age", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ERROR_RADIUS = new Usage(1033,"Data Field: Error Radius", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_FIX_QUALITY = new Usage(1034,"Data Field: Fix Quality", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_FIX_TYPE = new Usage(1035,"Data Field: Fix Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GEOIDAL_SEPARATION = new Usage(1036,"Data Field: Geoidal Separation", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GPS_OPERATION_MODE = new Usage(1037,"Data Field: GPS Operation Mode", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GPS_SELECTION_MODE = new Usage(1038,"Data Field: GPS Selection Mode", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GPS_STATUS = new Usage(1039,"Data Field: GPS Status", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_POSITION_DILUTION_OF_PRECISION = new Usage(1040,"Data Field: Position Dilution of Precision", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HORIZONTAL_DILUTION_OF_PRECISION = new Usage(1041,"Data Field: Horizontal Dilution of Precision", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_VERTICAL_DILUTION_OF_PRECISION = new Usage(1042,"Data Field: Vertical Dilution of Precision", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_LATITUDE = new Usage(1043,"Data Field: Latitude", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_LONGITUDE = new Usage(1044,"Data Field: Longitude", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TRUE_HEADING = new Usage(1045,"Data Field: True Heading", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETIC_HEADING = new Usage(1046,"Data Field: Magnetic Heading", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETIC_VARIATION = new Usage(1047,"Data Field: Magnetic Variation", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SPEED = new Usage(1048,"Data Field: Speed", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_IN_VIEW = new Usage(1049,"Data Field: Satellites in View", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_IN_VIEW_AZIMUTH = new Usage(1050,"Data Field: Satellites in View Azimuth", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_IN_VIEW_ELEVATION = new Usage(1051,"Data Field: Satellites in View Elevation", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_IN_VIEW_IDS = new Usage(1052,"Data Field: Satellites in View IDs", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_IN_VIEW_PRNS = new Usage(1053,"Data Field: Satellites in View PRNs", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_IN_VIEW_S_N_RATIOS = new Usage(1054,"Data Field: Satellites in View S/N Ratios", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_USED_COUNT = new Usage(1055,"Data Field: Satellites Used Count", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SATELLITES_USED_PRNS = new Usage(1056,"Data Field: Satellites Used PRNs", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_NMEA_SENTENCE = new Usage(1057,"Data Field: NMEA Sentence", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ADDRESS_LINE_ = new Usage(1058,"Data Field: Address Line 1", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ADDRESS_LINE_ = new Usage(1059,"Data Field: Address Line 2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CITY = new Usage(1060,"Data Field: City", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_STATE_OR_PROVINCE = new Usage(1061,"Data Field: State or Province", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_COUNTRY_OR_REGION = new Usage(1062,"Data Field: Country or Region", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_POSTAL_CODE = new Usage(1063,"Data Field: Postal Code", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_LOCATION = new Usage(1066,"Property: Location", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_LOCATION_DESIRED_ACCURACY = new Usage(1067,"Property: Location Desired Accuracy", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_ENVIRONMENTAL = new Usage(1072,"Data Field: Environmental", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ATMOSPHERIC_PRESSURE = new Usage(1073,"Data Field: Atmospheric Pressure", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_RELATIVE_HUMIDITY = new Usage(1075,"Data Field: Relative Humidity", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TEMPERATURE = new Usage(1076,"Data Field: Temperature", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_WIND_DIRECTION = new Usage(1077,"Data Field: Wind Direction", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_WIND_SPEED = new Usage(1078,"Data Field: Wind Speed", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_AIR_QUALITY_INDEX = new Usage(1079,"Data Field: Air Quality Index", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_EQUIVALENT_CO_ = new Usage(1080,"Data Field: Equivalent CO2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_VOLATILE_ORGANIC_COMPOUND_CONCENTRATION = new Usage(1081,"Data Field: Volatile Organic Compound Concentration", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_OBJECT_PRESENCE = new Usage(1082,"Data Field: Object Presence", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_OBJECT_PROXIMITY_RANGE = new Usage(1083,"Data Field: Object Proximity Range", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_OBJECT_PROXIMITY_OUT_OF_RANGE = new Usage(1084,"Data Field: Object Proximity Out of Range", std::vector<std::string>{ "SF"});
const Usage* const USAGE_PROPERTY_ENVIRONMENTAL = new Usage(1088,"Property: Environmental", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_REFERENCE_PRESSURE = new Usage(1089,"Property: Reference Pressure", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MOTION = new Usage(1104,"Data Field: Motion", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_MOTION_STATE = new Usage(1105,"Data Field: Motion State", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_ACCELERATION = new Usage(1106,"Data Field: Acceleration", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ACCELERATION_AXIS_X = new Usage(1107,"Data Field: Acceleration Axis X", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ACCELERATION_AXIS_Y = new Usage(1108,"Data Field: Acceleration Axis Y", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ACCELERATION_AXIS_Z = new Usage(1109,"Data Field: Acceleration Axis Z", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_VELOCITY = new Usage(1110,"Data Field: Angular Velocity", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_VELOCITY_ABOUT_X_AXIS = new Usage(1111,"Data Field: Angular Velocity about X Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_VELOCITY_ABOUT_Y_AXIS = new Usage(1112,"Data Field: Angular Velocity about Y Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_VELOCITY_ABOUT_Z_AXIS = new Usage(1113,"Data Field: Angular Velocity about Z Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_POSITION = new Usage(1114,"Data Field: Angular Position", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_POSITION_ABOUT_X_AXIS = new Usage(1115,"Data Field: Angular Position about X Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_POSITION_ABOUT_Y_AXIS = new Usage(1116,"Data Field: Angular Position about Y Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ANGULAR_POSITION_ABOUT_Z_AXIS = new Usage(1117,"Data Field: Angular Position about Z Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MOTION_SPEED = new Usage(1118,"Data Field: Motion Speed", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MOTION_INTENSITY = new Usage(1119,"Data Field: Motion Intensity", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ORIENTATION = new Usage(1136,"Data Field: Orientation", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_HEADING = new Usage(1137,"Data Field: Heading", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_X_AXIS = new Usage(1138,"Data Field: Heading X Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_Y_AXIS = new Usage(1139,"Data Field: Heading Y Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_Z_AXIS = new Usage(1140,"Data Field: Heading Z Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_COMPENSATED_MAGNETIC_NORTH = new Usage(1141,"Data Field: Heading Compensated Magnetic North", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_COMPENSATED_TRUE_NORTH = new Usage(1142,"Data Field: Heading Compensated True North", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_MAGNETIC_NORTH = new Usage(1143,"Data Field: Heading Magnetic North", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEADING_TRUE_NORTH = new Usage(1144,"Data Field: Heading True North", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DISTANCE = new Usage(1145,"Data Field: Distance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DISTANCE_X_AXIS = new Usage(1146,"Data Field: Distance X Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DISTANCE_Y_AXIS = new Usage(1147,"Data Field: Distance Y Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DISTANCE_Z_AXIS = new Usage(1148,"Data Field: Distance Z Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DISTANCE_OUT_OF_RANGE = new Usage(1149,"Data Field: Distance Out-of-Range", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_TILT = new Usage(1150,"Data Field: Tilt", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TILT_X_AXIS = new Usage(1151,"Data Field: Tilt X Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TILT_Y_AXIS = new Usage(1152,"Data Field: Tilt Y Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TILT_Z_AXIS = new Usage(1153,"Data Field: Tilt Z Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ROTATION_MATRIX = new Usage(1154,"Data Field: Rotation Matrix", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_QUATERNION = new Usage(1155,"Data Field: Quaternion", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETIC_FLUX = new Usage(1156,"Data Field: Magnetic Flux", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETIC_FLUX_X_AXIS = new Usage(1157,"Data Field: Magnetic Flux X Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETIC_FLUX_Y_AXIS = new Usage(1158,"Data Field: Magnetic Flux Y Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETIC_FLUX_Z_AXIS = new Usage(1159,"Data Field: Magnetic Flux Z Axis", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MAGNETOMETER_ACCURACY = new Usage(1160,"Data Field: Magnetometer Accuracy", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_SIMPLE_ORIENTATION_DIRECTION = new Usage(1161,"Data Field: Simple Orientation Direction", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_MECHANICAL = new Usage(1168,"Data Field: Mechanical", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_BOOLEAN_SWITCH_STATE = new Usage(1169,"Data Field: Boolean Switch State", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_BOOLEAN_SWITCH_ARRAY_STATES = new Usage(1170,"Data Field: Boolean Switch Array States", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MULTIVALUE_SWITCH_VALUE = new Usage(1171,"Data Field: Multivalue Switch Value", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_FORCE = new Usage(1172,"Data Field: Force", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ABSOLUTE_PRESSURE = new Usage(1173,"Data Field: Absolute Pressure", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GAUGE_PRESSURE = new Usage(1174,"Data Field: Gauge Pressure", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_STRAIN = new Usage(1175,"Data Field: Strain", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_WEIGHT = new Usage(1176,"Data Field: Weight", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_MECHANICAL = new Usage(1184,"Property: Mechanical", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_VIBRATION_STATE = new Usage(1185,"Property: Vibration State", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PROPERTY_FORWARD_VIBRATION_SPEED = new Usage(1186,"Property: Forward Vibration Speed", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_BACKWARD_VIBRATION_SPEED = new Usage(1187,"Property: Backward Vibration Speed", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_BIOMETRIC = new Usage(1200,"Data Field: Biometric", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_HUMAN_PRESENCE = new Usage(1201,"Data Field: Human Presence", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_HUMAN_PROXIMITY_RANGE = new Usage(1202,"Data Field: Human Proximity Range", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HUMAN_PROXIMITY_OUT_OF_RANGE = new Usage(1203,"Data Field: Human Proximity Out of Range", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_HUMAN_TOUCH_STATE = new Usage(1204,"Data Field: Human Touch State", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_FIELD_BLOOD_PRESSURE = new Usage(1205,"Data Field: Blood Pressure", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_BLOOD_PRESSURE_DIASTOLIC = new Usage(1206,"Data Field: Blood Pressure Diastolic", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_BLOOD_PRESSURE_SYSTOLIC = new Usage(1207,"Data Field: Blood Pressure Systolic", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEART_RATE = new Usage(1208,"Data Field: Heart Rate", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_RESTING_HEART_RATE = new Usage(1209,"Data Field: Resting Heart Rate", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HEARTBEAT_INTERVAL = new Usage(1210,"Data Field: Heartbeat Interval", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_RESPIRATORY_RATE = new Usage(1211,"Data Field: Respiratory Rate", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SPO_ = new Usage(1212,"Data Field: SpO2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HUMAN_ATTENTION_DETECTED = new Usage(1213,"Data Field: Human Attention Detected", std::vector<std::string>{ "MC"});
const Usage* const USAGE_DATA_FIELD_LIGHT = new Usage(1232,"Data Field: Light", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_ILLUMINANCE = new Usage(1233,"Data Field: Illuminance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_COLOR_TEMPERATURE = new Usage(1234,"Data Field: Color Temperature", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CHROMATICITY = new Usage(1235,"Data Field: Chromaticity", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CHROMATICITY_X = new Usage(1236,"Data Field: Chromaticity X", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CHROMATICITY_Y = new Usage(1237,"Data Field: Chromaticity Y", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CONSUMER_IR_SENTENCE_RECEIVE = new Usage(1238,"Data Field: Consumer IR Sentence Receive", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_INFRARED_LIGHT = new Usage(1239,"Data Field: Infrared Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_RED_LIGHT = new Usage(1240,"Data Field: Red Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GREEN_LIGHT = new Usage(1241,"Data Field: Green Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_BLUE_LIGHT = new Usage(1242,"Data Field: Blue Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ULTRAVIOLET_A_LIGHT = new Usage(1243,"Data Field: Ultraviolet A Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ULTRAVIOLET_B_LIGHT = new Usage(1244,"Data Field: Ultraviolet B Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ULTRAVIOLET_INDEX = new Usage(1245,"Data Field: Ultraviolet Index", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_NEAR_INFRARED_LIGHT = new Usage(1246,"Data Field: Near Infrared Light", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_LIGHT = new Usage(1247,"Property: Light", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CONSUMER_IR_SENTENCE_SEND = new Usage(1248,"Property: Consumer IR Sentence Send", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_AUTO_BRIGHTNESS_PREFERRED = new Usage(1250,"Property: Auto Brightness Preferred", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PROPERTY_AUTO_COLOR_PREFERRED = new Usage(1251,"Property: Auto Color Preferred", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DATA_FIELD_SCANNER = new Usage(1264,"Data Field: Scanner", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_RFID_TAG_BIT = new Usage(1265,"Data Field: RFID Tag 40 Bit", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_NFC_SENTENCE_RECEIVE = new Usage(1266,"Data Field: NFC Sentence Receive", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_SCANNER = new Usage(1272,"Property: Scanner", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_NFC_SENTENCE_SEND = new Usage(1273,"Property: NFC Sentence Send", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ELECTRICAL = new Usage(1280,"Data Field: Electrical", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CAPACITANCE = new Usage(1281,"Data Field: Capacitance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CURRENT = new Usage(1282,"Data Field: Current", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ELECTRICAL_POWER = new Usage(1283,"Data Field: Electrical Power", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_INDUCTANCE = new Usage(1284,"Data Field: Inductance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_RESISTANCE = new Usage(1285,"Data Field: Resistance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_VOLTAGE = new Usage(1286,"Data Field: Voltage", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_FREQUENCY = new Usage(1287,"Data Field: Frequency", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_PERIOD = new Usage(1288,"Data Field: Period", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_PERCENT_OF_RANGE = new Usage(1289,"Data Field: Percent of Range", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TIME = new Usage(1312,"Data Field: Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_YEAR = new Usage(1313,"Data Field: Year", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MONTH = new Usage(1314,"Data Field: Month", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DAY = new Usage(1315,"Data Field: Day", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_DAY_OF_WEEK = new Usage(1316,"Data Field: Day of Week", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_HOUR = new Usage(1317,"Data Field: Hour", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MINUTE = new Usage(1318,"Data Field: Minute", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_SECOND = new Usage(1319,"Data Field: Second", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_MILLISECOND = new Usage(1320,"Data Field: Millisecond", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TIMESTAMP = new Usage(1321,"Data Field: Timestamp", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_JULIAN_DAY_OF_YEAR = new Usage(1322,"Data Field: Julian Day of Year", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_TIME_SINCE_SYSTEM_BOOT = new Usage(1323,"Data Field: Time Since System Boot", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_TIME = new Usage(1328,"Property: Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_TIME_ZONE_OFFSET_FROM_UTC = new Usage(1329,"Property: Time Zone Offset from UTC", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_TIME_ZONE_NAME = new Usage(1330,"Property: Time Zone Name", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_DAYLIGHT_SAVINGS_TIME_OBSERVED = new Usage(1331,"Property: Daylight Savings Time Observed", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PROPERTY_TIME_TRIM_ADJUSTMENT = new Usage(1332,"Property: Time Trim Adjustment", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_ARM_ALARM = new Usage(1333,"Property: Arm Alarm", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DATA_FIELD_CUSTOM = new Usage(1344,"Data Field: Custom", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_USAGE = new Usage(1345,"Data Field: Custom Usage", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_BOOLEAN_ARRAY = new Usage(1346,"Data Field: Custom Boolean Array", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE = new Usage(1347,"Data Field: Custom Value", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1348,"Data Field: Custom Value 1", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1349,"Data Field: Custom Value 2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1350,"Data Field: Custom Value 3", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1351,"Data Field: Custom Value 4", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1352,"Data Field: Custom Value 5", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1353,"Data Field: Custom Value 6", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1354,"Data Field: Custom Value 7", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1355,"Data Field: Custom Value 8", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1356,"Data Field: Custom Value 9", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1357,"Data Field: Custom Value 10", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1358,"Data Field: Custom Value 11", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1359,"Data Field: Custom Value 12", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1360,"Data Field: Custom Value 13", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1361,"Data Field: Custom Value 14", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1362,"Data Field: Custom Value 15", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1363,"Data Field: Custom Value 16", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1364,"Data Field: Custom Value 17", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1365,"Data Field: Custom Value 18", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1366,"Data Field: Custom Value 19", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1367,"Data Field: Custom Value 20", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1368,"Data Field: Custom Value 21", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1369,"Data Field: Custom Value 22", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1370,"Data Field: Custom Value 23", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1371,"Data Field: Custom Value 24", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1372,"Data Field: Custom Value 25", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1373,"Data Field: Custom Value 26", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1374,"Data Field: Custom Value 27", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_VALUE_ = new Usage(1375,"Data Field: Custom Value 28", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC = new Usage(1376,"Data Field: Generic", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_GUID_OR_PROPERTYKEY = new Usage(1377,"Data Field: Generic GUID or PROPERTYKEY", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_CATEGORY_GUID = new Usage(1378,"Data Field: Generic Category GUID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_TYPE_GUID = new Usage(1379,"Data Field: Generic Type GUID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_EVENT_PROPERTYKEY = new Usage(1380,"Data Field: Generic Event PROPERTYKEY", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_PROPERTY_PROPERTYKEY = new Usage(1381,"Data Field: Generic Property PROPERTYKEY", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_DATA_FIELD_PROPERTYKEY = new Usage(1382,"Data Field: Generic Data Field PROPERTYKEY", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_EVENT = new Usage(1383,"Data Field: Generic Event", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_PROPERTY = new Usage(1384,"Data Field: Generic Property", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_DATA_FIELD = new Usage(1385,"Data Field: Generic Data Field", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ENUMERATOR_TABLE_ROW_INDEX = new Usage(1386,"Data Field: Enumerator Table Row Index", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_ENUMERATOR_TABLE_ROW_COUNT = new Usage(1387,"Data Field: Enumerator Table Row Count", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_GUID_OR_PROPERTYKEY_KIND = new Usage(1388,"Data Field: Generic GUID or PROPERTYKEY kind", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GENERIC_GUID = new Usage(1389,"Data Field: Generic GUID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_PROPERTYKEY = new Usage(1390,"Data Field: Generic PROPERTYKEY", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_TOP_LEVEL_COLLECTION_ID = new Usage(1391,"Data Field: Generic Top Level Collection ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_REPORT_ID = new Usage(1392,"Data Field: Generic Report ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_REPORT_ITEM_POSITION_INDEX = new Usage(1393,"Data Field: Generic Report Item Position Index", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_FIRMWARE_VARTYPE = new Usage(1394,"Data Field: Generic Firmware VARTYPE", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GENERIC_UNIT_OF_MEASURE = new Usage(1395,"Data Field: Generic Unit of Measure", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GENERIC_UNIT_EXPONENT = new Usage(1396,"Data Field: Generic Unit Exponent", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_GENERIC_REPORT_SIZE = new Usage(1397,"Data Field: Generic Report Size", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_GENERIC_REPORT_COUNT = new Usage(1398,"Data Field: Generic Report Count", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_GENERIC = new Usage(1408,"Property: Generic", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_ENUMERATOR_TABLE_ROW_INDEX = new Usage(1409,"Property: Enumerator Table Row Index", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_ENUMERATOR_TABLE_ROW_COUNT = new Usage(1410,"Property: Enumerator Table Row Count", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_PERSONAL_ACTIVITY = new Usage(1424,"Data Field: Personal Activity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_ACTIVITY_TYPE = new Usage(1425,"Data Field: Activity Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_ACTIVITY_STATE = new Usage(1426,"Data Field: Activity State", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_DEVICE_POSITION = new Usage(1427,"Data Field: Device Position", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_STEP_COUNT = new Usage(1428,"Data Field: Step Count", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_STEP_COUNT_RESET = new Usage(1429,"Data Field: Step Count Reset", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DATA_FIELD_STEP_DURATION = new Usage(1430,"Data Field: Step Duration", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_STEP_TYPE = new Usage(1431,"Data Field: Step Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_MINIMUM_ACTIVITY_DETECTION_INTERVAL = new Usage(1440,"Property: Minimum Activity Detection Interval", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_SUPPORTED_ACTIVITY_TYPES = new Usage(1441,"Property: Supported Activity Types", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_SUBSCRIBED_ACTIVITY_TYPES = new Usage(1442,"Property: Subscribed Activity Types", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_SUPPORTED_STEP_TYPES = new Usage(1443,"Property: Supported Step Types", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_SUBSCRIBED_STEP_TYPES = new Usage(1444,"Property: Subscribed Step Types", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_PROPERTY_FLOOR_HEIGHT = new Usage(1445,"Property: Floor Height", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_CUSTOM_TYPE_ID = new Usage(1456,"Data Field: Custom Type ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PROPERTY_CUSTOM = new Usage(1472,"Property: Custom", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1473,"Property: Custom Value 1", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1474,"Property: Custom Value 2", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1475,"Property: Custom Value 3", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1476,"Property: Custom Value 4", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1477,"Property: Custom Value 5", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1478,"Property: Custom Value 6", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1479,"Property: Custom Value 7", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1480,"Property: Custom Value 8", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1481,"Property: Custom Value 9", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1482,"Property: Custom Value 10", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1483,"Property: Custom Value 11", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1484,"Property: Custom Value 12", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1485,"Property: Custom Value 13", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1486,"Property: Custom Value 14", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1487,"Property: Custom Value 15", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PROPERTY_CUSTOM_VALUE_ = new Usage(1488,"Property: Custom Value 16", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_HINGE = new Usage(1504,"Data Field: Hinge", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_DATA_FIELD_HINGE_ANGLE = new Usage(1505,"Data Field: Hinge Angle", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_DATA_FIELD_GESTURE_SENSOR = new Usage(1520,"Data Field: Gesture Sensor", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_FIELD_GESTURE_STATE = new Usage(1521,"Data Field: Gesture State", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_HINGE_FOLD_INITIAL_ANGLE = new Usage(1522,"Data Field: Hinge Fold Initial Angle", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HINGE_FOLD_FINAL_ANGLE = new Usage(1523,"Data Field: Hinge Fold Final Angle", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DATA_FIELD_HINGE_FOLD_CONTRIBUTING_PANEL = new Usage(1524,"Data Field: Hinge Fold Contributing Panel", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DATA_FIELD_HINGE_FOLD_TYPE = new Usage(1525,"Data Field: Hinge Fold Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SENSOR_STATE_UNDEFINED = new Usage(2048,"Sensor State: Undefined", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_STATE_READY = new Usage(2049,"Sensor State: Ready", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_STATE_NOT_AVAILABLE = new Usage(2050,"Sensor State: Not Available", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_STATE_NO_DATA = new Usage(2051,"Sensor State: No Data", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_STATE_INITIALIZING = new Usage(2052,"Sensor State: Initializing", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_STATE_ACCESS_DENIED = new Usage(2053,"Sensor State: Access Denied", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_STATE_ERROR = new Usage(2054,"Sensor State: Error", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_UNKNOWN = new Usage(2064,"Sensor Event: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_STATE_CHANGED = new Usage(2065,"Sensor Event: State Changed", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_PROPERTY_CHANGED = new Usage(2066,"Sensor Event: Property Changed", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_DATA_UPDATED = new Usage(2067,"Sensor Event: Data Updated", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_POLL_RESPONSE = new Usage(2068,"Sensor Event: Poll Response", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_CHANGE_SENSITIVITY = new Usage(2069,"Sensor Event: Change Sensitivity", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_RANGE_MAXIMUM_REACHED = new Usage(2070,"Sensor Event: Range Maximum Reached", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_RANGE_MINIMUM_REACHED = new Usage(2071,"Sensor Event: Range Minimum Reached", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_HIGH_THRESHOLD_CROSS_UPWARD = new Usage(2072,"Sensor Event: High Threshold Cross Upward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_HIGH_THRESHOLD_CROSS_DOWNWARD = new Usage(2073,"Sensor Event: High Threshold Cross Downward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_LOW_THRESHOLD_CROSS_UPWARD = new Usage(2074,"Sensor Event: Low Threshold Cross Upward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_LOW_THRESHOLD_CROSS_DOWNWARD = new Usage(2075,"Sensor Event: Low Threshold Cross Downward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_ZERO_THRESHOLD_CROSS_UPWARD = new Usage(2076,"Sensor Event: Zero Threshold Cross Upward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_ZERO_THRESHOLD_CROSS_DOWNWARD = new Usage(2077,"Sensor Event: Zero Threshold Cross Downward", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_PERIOD_EXCEEDED = new Usage(2078,"Sensor Event: Period Exceeded", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_FREQUENCY_EXCEEDED = new Usage(2079,"Sensor Event: Frequency Exceeded", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SENSOR_EVENT_COMPLEX_TRIGGER = new Usage(2080,"Sensor Event: Complex Trigger", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CONNECTION_TYPE_PC_INTEGRATED = new Usage(2096,"Connection Type: PC Integrated", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CONNECTION_TYPE_PC_ATTACHED = new Usage(2097,"Connection Type: PC Attached", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CONNECTION_TYPE_PC_EXTERNAL = new Usage(2098,"Connection Type: PC External", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REPORTING_STATE_REPORT_NO_EVENTS = new Usage(2112,"Reporting State: Report No Events", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REPORTING_STATE_REPORT_ALL_EVENTS = new Usage(2113,"Reporting State: Report All Events", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REPORTING_STATE_REPORT_THRESHOLD_EVENTS = new Usage(2114,"Reporting State: Report Threshold Events", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REPORTING_STATE_WAKE_ON_NO_EVENTS = new Usage(2115,"Reporting State: Wake On No Events", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REPORTING_STATE_WAKE_ON_ALL_EVENTS = new Usage(2116,"Reporting State: Wake On All Events", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_REPORTING_STATE_WAKE_ON_THRESHOLD_EVENTS = new Usage(2117,"Reporting State: Wake On Threshold Events", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_STATE_UNDEFINED = new Usage(2128,"Power State: Undefined", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_STATE_D_FULL_POWER = new Usage(2129,"Power State: D0 Full Power", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_STATE_D_LOW_POWER = new Usage(2130,"Power State: D1 Low Power", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_STATE_D_STANDBY_POWER_WITH_WAKEUP = new Usage(2131,"Power State: D2 Standby Power with Wakeup", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_STATE_D_SLEEP_WITH_WAKEUP = new Usage(2132,"Power State: D3 Sleep with Wakeup", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_STATE_D_POWER_OFF = new Usage(2133,"Power State: D4 Power Off", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACCURACY_DEFAULT = new Usage(2144,"Accuracy: Default", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACCURACY_HIGH = new Usage(2145,"Accuracy: High", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACCURACY_MEDIUM = new Usage(2146,"Accuracy: Medium", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACCURACY_LOW = new Usage(2147,"Accuracy: Low", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_QUALITY_NO_FIX = new Usage(2160,"Fix Quality: No Fix", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_QUALITY_GPS = new Usage(2161,"Fix Quality: GPS", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_QUALITY_DGPS = new Usage(2162,"Fix Quality: DGPS", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_NO_FIX = new Usage(2176,"Fix Type: No Fix", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_GPS_SPS_MODE_FIX_VALID = new Usage(2177,"Fix Type: GPS SPS Mode, Fix Valid", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_DGPS_SPS_MODE_FIX_VALID = new Usage(2178,"Fix Type: DGPS SPS Mode, Fix Valid", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_GPS_PPS_MODE_FIX_VALID = new Usage(2179,"Fix Type: GPS PPS Mode, Fix Valid", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_REAL_TIME_KINEMATIC = new Usage(2180,"Fix Type: Real Time Kinematic", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_FLOAT_RTK = new Usage(2181,"Fix Type: Float RTK", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_ESTIMATED_DEAD_RECKONED_ = new Usage(2182,"Fix Type: Estimated (dead reckoned)", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_MANUAL_INPUT_MODE = new Usage(2183,"Fix Type: Manual Input Mode", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_FIX_TYPE_SIMULATOR_MODE = new Usage(2184,"Fix Type: Simulator Mode", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_OPERATION_MODE_MANUAL = new Usage(2192,"GPS Operation Mode: Manual", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_OPERATION_MODE_AUTOMATIC = new Usage(2193,"GPS Operation Mode: Automatic", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_SELECTION_MODE_AUTONOMOUS = new Usage(2208,"GPS Selection Mode: Autonomous", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_SELECTION_MODE_DGPS = new Usage(2209,"GPS Selection Mode: DGPS", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_SELECTION_MODE_ESTIMATED_DEAD_RECKONED_ = new Usage(2210,"GPS Selection Mode: Estimated (dead reckoned)", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_SELECTION_MODE_MANUAL_INPUT = new Usage(2211,"GPS Selection Mode: Manual Input", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_SELECTION_MODE_SIMULATOR = new Usage(2212,"GPS Selection Mode: Simulator", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_SELECTION_MODE_DATA_NOT_VALID = new Usage(2213,"GPS Selection Mode: Data Not Valid", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_STATUS_DATA_VALID = new Usage(2224,"GPS Status Data: Valid", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GPS_STATUS_DATA_NOT_VALID = new Usage(2225,"GPS Status Data: Not Valid", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_SUNDAY = new Usage(2240,"Day of Week: Sunday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_MONDAY = new Usage(2241,"Day of Week: Monday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_TUESDAY = new Usage(2242,"Day of Week: Tuesday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_WEDNESDAY = new Usage(2243,"Day of Week: Wednesday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_THURSDAY = new Usage(2244,"Day of Week: Thursday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_FRIDAY = new Usage(2245,"Day of Week: Friday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DAY_OF_WEEK_SATURDAY = new Usage(2246,"Day of Week: Saturday", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KIND_CATEGORY = new Usage(2256,"Kind: Category", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KIND_TYPE = new Usage(2257,"Kind: Type", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KIND_EVENT = new Usage(2258,"Kind: Event", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KIND_PROPERTY = new Usage(2259,"Kind: Property", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_KIND_DATA_FIELD = new Usage(2260,"Kind: Data Field", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MAGNETOMETER_ACCURACY_LOW = new Usage(2272,"Magnetometer Accuracy: Low", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MAGNETOMETER_ACCURACY_MEDIUM = new Usage(2273,"Magnetometer Accuracy: Medium", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MAGNETOMETER_ACCURACY_HIGH = new Usage(2274,"Magnetometer Accuracy: High", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SIMPLE_ORIENTATION_DIRECTION_NOT_ROTATED = new Usage(2288,"Simple Orientation Direction: Not Rotated", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SIMPLE_ORIENTATION_DIRECTION_ROTATED_DEGREES_CCW = new Usage(2289,"Simple Orientation Direction: Rotated 90 Degrees CCW", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SIMPLE_ORIENTATION_DIRECTION_ROTATED_DEGREES_CCW = new Usage(2290,"Simple Orientation Direction: Rotated 180 Degrees CCW", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SIMPLE_ORIENTATION_DIRECTION_ROTATED_DEGREES_CCW = new Usage(2291,"Simple Orientation Direction: Rotated 270 Degrees CCW", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SIMPLE_ORIENTATION_DIRECTION_FACE_UP = new Usage(2292,"Simple Orientation Direction: Face Up", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SIMPLE_ORIENTATION_DIRECTION_FACE_DOWN = new Usage(2293,"Simple Orientation Direction: Face Down", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_NULL = new Usage(2304,"VT\_NULL", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_BOOL = new Usage(2305,"VT\_BOOL", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_UI_ = new Usage(2306,"VT\_UI1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_I_ = new Usage(2307,"VT\_I1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_UI_ = new Usage(2308,"VT\_UI2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_I_ = new Usage(2309,"VT\_I2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_UI_ = new Usage(2310,"VT\_UI4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_I_ = new Usage(2311,"VT\_I4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_UI_ = new Usage(2312,"VT\_UI8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_I_ = new Usage(2313,"VT\_I8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_R_ = new Usage(2314,"VT\_R4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_R_ = new Usage(2315,"VT\_R8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_WSTR = new Usage(2316,"VT\_WSTR", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_STR = new Usage(2317,"VT\_STR", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_CLSID = new Usage(2318,"VT\_CLSID", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_VECTOR_VT_UI_ = new Usage(2319,"VT\_VECTOR VT\_UI1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2320,"VT\_F16E0", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2321,"VT\_F16E1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2322,"VT\_F16E2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2323,"VT\_F16E3", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2324,"VT\_F16E4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2325,"VT\_F16E5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2326,"VT\_F16E6", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2327,"VT\_F16E7", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2328,"VT\_F16E8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2329,"VT\_F16E9", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EA = new Usage(2330,"VT\_F16EA", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EB = new Usage(2331,"VT\_F16EB", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EC = new Usage(2332,"VT\_F16EC", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_ED = new Usage(2333,"VT\_F16ED", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EE = new Usage(2334,"VT\_F16EE", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EF = new Usage(2335,"VT\_F16EF", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2336,"VT\_F32E0", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2337,"VT\_F32E1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2338,"VT\_F32E2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2339,"VT\_F32E3", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2340,"VT\_F32E4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2341,"VT\_F32E5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2342,"VT\_F32E6", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2343,"VT\_F32E7", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2344,"VT\_F32E8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_E_ = new Usage(2345,"VT\_F32E9", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EA = new Usage(2346,"VT\_F32EA", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EB = new Usage(2347,"VT\_F32EB", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EC = new Usage(2348,"VT\_F32EC", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_ED = new Usage(2349,"VT\_F32ED", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EE = new Usage(2350,"VT\_F32EE", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_VT_F_EF = new Usage(2351,"VT\_F32EF", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_UNKNOWN = new Usage(2352,"Activity Type: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_STATIONARY = new Usage(2353,"Activity Type: Stationary", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_FIDGETING = new Usage(2354,"Activity Type: Fidgeting", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_WALKING = new Usage(2355,"Activity Type: Walking", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_RUNNING = new Usage(2356,"Activity Type: Running", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_IN_VEHICLE = new Usage(2357,"Activity Type: In Vehicle", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_BIKING = new Usage(2358,"Activity Type: Biking", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_TYPE_IDLE = new Usage(2359,"Activity Type: Idle", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_NOT_SPECIFIED = new Usage(2368,"Unit: Not Specified", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_LUX = new Usage(2369,"Unit: Lux", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES_KELVIN = new Usage(2370,"Unit: Degrees Kelvin", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES_CELSIUS = new Usage(2371,"Unit: Degrees Celsius", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_PASCAL = new Usage(2372,"Unit: Pascal", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_NEWTON = new Usage(2373,"Unit: Newton", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_METERS_SECOND = new Usage(2374,"Unit: Meters/Second", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_KILOGRAM = new Usage(2375,"Unit: Kilogram", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_METER = new Usage(2376,"Unit: Meter", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_METERS_SECOND_SECOND = new Usage(2377,"Unit: Meters/Second/Second", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_FARAD = new Usage(2378,"Unit: Farad", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_AMPERE = new Usage(2379,"Unit: Ampere", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_WATT = new Usage(2380,"Unit: Watt", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_HENRY = new Usage(2381,"Unit: Henry", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_OHM = new Usage(2382,"Unit: Ohm", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_VOLT = new Usage(2383,"Unit: Volt", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_HERTZ = new Usage(2384,"Unit: Hertz", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_BAR = new Usage(2385,"Unit: Bar", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES_ANTI_CLOCKWISE = new Usage(2386,"Unit: Degrees Anti-clockwise", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES_CLOCKWISE = new Usage(2387,"Unit: Degrees Clockwise", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES = new Usage(2388,"Unit: Degrees", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES_SECOND = new Usage(2389,"Unit: Degrees/Second", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_DEGREES_SECOND_SECOND = new Usage(2390,"Unit: Degrees/Second/Second", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_KNOT = new Usage(2391,"Unit: Knot", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_PERCENT = new Usage(2392,"Unit: Percent", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_SECOND = new Usage(2393,"Unit: Second", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_MILLISECOND = new Usage(2394,"Unit: Millisecond", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_G = new Usage(2395,"Unit: G", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_BYTES = new Usage(2396,"Unit: Bytes", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_MILLIGAUSS = new Usage(2397,"Unit: Milligauss", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_UNIT_BITS = new Usage(2398,"Unit: Bits", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_STATE_NO_STATE_CHANGE = new Usage(2400,"Activity State: No State Change", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_STATE_START_ACTIVITY = new Usage(2401,"Activity State: Start Activity", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ACTIVITY_STATE_END_ACTIVITY = new Usage(2402,"Activity State: End Activity", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2416,"Exponent 0", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2417,"Exponent 1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2418,"Exponent 2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2419,"Exponent 3", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2420,"Exponent 4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2421,"Exponent 5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2422,"Exponent 6", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2423,"Exponent 7", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2424,"Exponent 8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_ = new Usage(2425,"Exponent 9", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_A = new Usage(2426,"Exponent A", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_B = new Usage(2427,"Exponent B", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_C = new Usage(2428,"Exponent C", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_D = new Usage(2429,"Exponent D", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_E = new Usage(2430,"Exponent E", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_EXPONENT_F = new Usage(2431,"Exponent F", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_POSITION_UNKNOWN = new Usage(2432,"Device Position: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_POSITION_UNCHANGED = new Usage(2433,"Device Position: Unchanged", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_POSITION_ON_DESK = new Usage(2434,"Device Position: On Desk", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_POSITION_IN_HAND = new Usage(2435,"Device Position: In Hand", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_POSITION_MOVING_IN_BAG = new Usage(2436,"Device Position: Moving in Bag", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_POSITION_STATIONARY_IN_BAG = new Usage(2437,"Device Position: Stationary in Bag", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_STEP_TYPE_UNKNOWN = new Usage(2448,"Step Type: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_STEP_TYPE_RUNNING = new Usage(2449,"Step Type: Running", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_STEP_TYPE_WALKING = new Usage(2450,"Step Type: Walking", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GESTURE_STATE_UNKNOWN = new Usage(2464,"Gesture State: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GESTURE_STATE_STARTED = new Usage(2465,"Gesture State: Started", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GESTURE_STATE_COMPLETED = new Usage(2466,"Gesture State: Completed", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GESTURE_STATE_CANCELLED = new Usage(2467,"Gesture State: Cancelled", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_UNKNOWN = new Usage(2480,"Hinge Fold Contributing Panel: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_PANEL_ = new Usage(2481,"Hinge Fold Contributing Panel: Panel 1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_PANEL_ = new Usage(2482,"Hinge Fold Contributing Panel: Panel 2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_BOTH = new Usage(2483,"Hinge Fold Contributing Panel: Both", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_TYPE_UNKNOWN = new Usage(2484,"Hinge Fold Type: Unknown", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_TYPE_INCREASING = new Usage(2485,"Hinge Fold Type: Increasing", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HINGE_FOLD_TYPE_DECREASING = new Usage(2486,"Hinge Fold Type: Decreasing", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HUMAN_PRESENCE_DETECTION_TYPE_VENDOR_DEFINED_NON_BIOMETRIC = new Usage(2496,"Human Presence Detection Type: Vendor-Defined Non-Biometric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HUMAN_PRESENCE_DETECTION_TYPE_VENDOR_DEFINED_BIOMETRIC = new Usage(2497,"Human Presence Detection Type: Vendor-Defined Biometric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HUMAN_PRESENCE_DETECTION_TYPE_FACIAL_BIOMETRIC = new Usage(2498,"Human Presence Detection Type: Facial Biometric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_HUMAN_PRESENCE_DETECTION_TYPE_AUDIO_BIOMETRIC = new Usage(2499,"Human Presence Detection Type: Audio Biometric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_MODIFIER_CHANGE_SENSITIVITY_ABSOLUTE = new Usage(4096,"Modifier: Change Sensitivity Absolute", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_MAXIMUM = new Usage(8192,"Modifier: Maximum", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_MINIMUM = new Usage(12288,"Modifier: Minimum", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_ACCURACY = new Usage(16384,"Modifier: Accuracy", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_RESOLUTION = new Usage(20480,"Modifier: Resolution", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_THRESHOLD_HIGH = new Usage(24576,"Modifier: Threshold High", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_THRESHOLD_LOW = new Usage(28672,"Modifier: Threshold Low", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_CALIBRATION_OFFSET = new Usage(32768,"Modifier: Calibration Offset", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_CALIBRATION_MULTIPLIER = new Usage(36864,"Modifier: Calibration Multiplier", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_REPORT_INTERVAL = new Usage(40960,"Modifier: Report Interval", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_FREQUENCY_MAX = new Usage(45056,"Modifier: Frequency Max", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_PERIOD_MAX = new Usage(49152,"Modifier: Period Max", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_CHANGE_SENSITIVITY_PERCENT_OF_RANGE = new Usage(53248,"Modifier: Change Sensitivity Percent of Range", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_CHANGE_SENSITIVITY_PERCENT_RELATIVE = new Usage(57344,"Modifier: Change Sensitivity Percent Relative", std::vector<std::string>{ "US"});
const Usage* const USAGE_MODIFIER_VENDOR_RESERVED = new Usage(61440,"Modifier: Vendor Reserved", std::vector<std::string>{ "US"});


const UsagePage* const USAGE_PAGE_SENSORS = new UsagePage(32, "Sensors", std::map<uint16_t, const Usage* const>{
	{1, USAGE_SENSOR},
	{16, USAGE_BIOMETRIC},
	{17, USAGE_BIOMETRIC_HUMAN_PRESENCE},
	{18, USAGE_BIOMETRIC_HUMAN_PROXIMITY},
	{19, USAGE_BIOMETRIC_HUMAN_TOUCH},
	{20, USAGE_BIOMETRIC_BLOOD_PRESSURE},
	{21, USAGE_BIOMETRIC_BODY_TEMPERATURE},
	{22, USAGE_BIOMETRIC_HEART_RATE},
	{23, USAGE_BIOMETRIC_HEART_RATE_VARIABILITY},
	{24, USAGE_BIOMETRIC_PERIPHERAL_OXYGEN_SATURATION},
	{25, USAGE_BIOMETRIC_RESPIRATORY_RATE},
	{32, USAGE_ELECTRICAL},
	{33, USAGE_ELECTRICAL_CAPACITANCE},
	{34, USAGE_ELECTRICAL_CURRENT},
	{35, USAGE_ELECTRICAL_POWER},
	{36, USAGE_ELECTRICAL_INDUCTANCE},
	{37, USAGE_ELECTRICAL_RESISTANCE},
	{38, USAGE_ELECTRICAL_VOLTAGE},
	{39, USAGE_ELECTRICAL_POTENTIOMETER},
	{40, USAGE_ELECTRICAL_FREQUENCY},
	{41, USAGE_ELECTRICAL_PERIOD},
	{48, USAGE_ENVIRONMENTAL},
	{49, USAGE_ENVIRONMENTAL_ATMOSPHERIC_PRESSURE},
	{50, USAGE_ENVIRONMENTAL_HUMIDITY},
	{51, USAGE_ENVIRONMENTAL_TEMPERATURE},
	{52, USAGE_ENVIRONMENTAL_WIND_DIRECTION},
	{53, USAGE_ENVIRONMENTAL_WIND_SPEED},
	{54, USAGE_ENVIRONMENTAL_AIR_QUALITY},
	{55, USAGE_ENVIRONMENTAL_HEAT_INDEX},
	{56, USAGE_ENVIRONMENTAL_SURFACE_TEMPERATURE},
	{57, USAGE_ENVIRONMENTAL_VOLATILE_ORGANIC_COMPOUNDS},
	{58, USAGE_ENVIRONMENTAL_OBJECT_PRESENCE},
	{59, USAGE_ENVIRONMENTAL_OBJECT_PROXIMITY},
	{64, USAGE_LIGHT},
	{65, USAGE_LIGHT_AMBIENT_LIGHT},
	{66, USAGE_LIGHT_CONSUMER_INFRARED},
	{67, USAGE_LIGHT_INFRARED_LIGHT},
	{68, USAGE_LIGHT_VISIBLE_LIGHT},
	{69, USAGE_LIGHT_ULTRAVIOLET_LIGHT},
	{80, USAGE_LOCATION},
	{81, USAGE_LOCATION_BROADCAST},
	{82, USAGE_LOCATION_DEAD_RECKONING},
	{83, USAGE_LOCATION_GPS_GLOBAL_POSITIONING_SYSTEM_},
	{84, USAGE_LOCATION_LOOKUP},
	{85, USAGE_LOCATION_OTHER},
	{86, USAGE_LOCATION_STATIC},
	{87, USAGE_LOCATION_TRIANGULATION},
	{96, USAGE_MECHANICAL},
	{97, USAGE_MECHANICAL_BOOLEAN_SWITCH},
	{98, USAGE_MECHANICAL_BOOLEAN_SWITCH_ARRAY},
	{99, USAGE_MECHANICAL_MULTIVALUE_SWITCH},
	{100, USAGE_MECHANICAL_FORCE},
	{101, USAGE_MECHANICAL_PRESSURE},
	{102, USAGE_MECHANICAL_STRAIN},
	{103, USAGE_MECHANICAL_WEIGHT},
	{104, USAGE_MECHANICAL_HAPTIC_VIBRATOR},
	{105, USAGE_MECHANICAL_HALL_EFFECT_SWITCH},
	{112, USAGE_MOTION},
	{113, USAGE_MOTION_ACCELEROMETER_D},
	{114, USAGE_MOTION_ACCELEROMETER_D},
	{115, USAGE_MOTION_ACCELEROMETER_D},
	{116, USAGE_MOTION_GYROMETER_D},
	{117, USAGE_MOTION_GYROMETER_D},
	{118, USAGE_MOTION_GYROMETER_D},
	{119, USAGE_MOTION_MOTION_DETECTOR},
	{120, USAGE_MOTION_SPEEDOMETER},
	{121, USAGE_MOTION_ACCELEROMETER},
	{122, USAGE_MOTION_GYROMETER},
	{123, USAGE_MOTION_GRAVITY_VECTOR},
	{124, USAGE_MOTION_LINEAR_ACCELEROMETER},
	{128, USAGE_ORIENTATION},
	{129, USAGE_ORIENTATION_COMPASS_D},
	{130, USAGE_ORIENTATION_COMPASS_D},
	{131, USAGE_ORIENTATION_COMPASS_D},
	{132, USAGE_ORIENTATION_INCLINOMETER_D},
	{133, USAGE_ORIENTATION_INCLINOMETER_D},
	{134, USAGE_ORIENTATION_INCLINOMETER_D},
	{135, USAGE_ORIENTATION_DISTANCE_D},
	{136, USAGE_ORIENTATION_DISTANCE_D},
	{137, USAGE_ORIENTATION_DISTANCE_D},
	{138, USAGE_ORIENTATION_DEVICE_ORIENTATION},
	{139, USAGE_ORIENTATION_COMPASS},
	{140, USAGE_ORIENTATION_INCLINOMETER},
	{141, USAGE_ORIENTATION_DISTANCE},
	{142, USAGE_ORIENTATION_RELATIVE_ORIENTATION},
	{143, USAGE_ORIENTATION_SIMPLE_ORIENTATION},
	{144, USAGE_SCANNER},
	{145, USAGE_SCANNER_BARCODE},
	{146, USAGE_SCANNER_RFID},
	{147, USAGE_SCANNER_NFC},
	{160, USAGE_TIME},
	{161, USAGE_TIME_ALARM_TIMER},
	{162, USAGE_TIME_REAL_TIME_CLOCK},
	{176, USAGE_PERSONAL_ACTIVITY},
	{177, USAGE_PERSONAL_ACTIVITY_ACTIVITY_DETECTION},
	{178, USAGE_PERSONAL_ACTIVITY_DEVICE_POSITION},
	{179, USAGE_PERSONAL_ACTIVITY_PEDOMETER},
	{180, USAGE_PERSONAL_ACTIVITY_STEP_DETECTION},
	{192, USAGE_ORIENTATION_EXTENDED},
	{193, USAGE_ORIENTATION_EXTENDED_GEOMAGNETIC_ORIENTATION},
	{194, USAGE_ORIENTATION_EXTENDED_MAGNETOMETER},
	{208, USAGE_GESTURE},
	{209, USAGE_GESTURE_CHASSIS_FLIP_GESTURE},
	{210, USAGE_GESTURE_HINGE_FOLD_GESTURE},
	{224, USAGE_OTHER},
	{225, USAGE_OTHER_CUSTOM},
	{226, USAGE_OTHER_GENERIC},
	{227, USAGE_OTHER_GENERIC_ENUMERATOR},
	{228, USAGE_OTHER_HINGE_ANGLE},
	{240, USAGE_VENDOR_RESERVED_},
	{241, USAGE_VENDOR_RESERVED_},
	{242, USAGE_VENDOR_RESERVED_},
	{243, USAGE_VENDOR_RESERVED_},
	{244, USAGE_VENDOR_RESERVED_},
	{245, USAGE_VENDOR_RESERVED_},
	{246, USAGE_VENDOR_RESERVED_},
	{247, USAGE_VENDOR_RESERVED_},
	{248, USAGE_VENDOR_RESERVED_},
	{249, USAGE_VENDOR_RESERVED_},
	{250, USAGE_VENDOR_RESERVED_},
	{251, USAGE_VENDOR_RESERVED_},
	{252, USAGE_VENDOR_RESERVED_},
	{253, USAGE_VENDOR_RESERVED_},
	{254, USAGE_VENDOR_RESERVED_},
	{255, USAGE_VENDOR_RESERVED_},
	{512, USAGE_EVENT},
	{513, USAGE_EVENT_SENSOR_STATE},
	{514, USAGE_EVENT_SENSOR_EVENT},
	{768, USAGE_PROPERTY},
	{769, USAGE_PROPERTY_FRIENDLY_NAME},
	{770, USAGE_PROPERTY_PERSISTENT_UNIQUE_ID},
	{771, USAGE_PROPERTY_SENSOR_STATUS},
	{772, USAGE_PROPERTY_MINIMUM_REPORT_INTERVAL},
	{773, USAGE_PROPERTY_SENSOR_MANUFACTURER},
	{774, USAGE_PROPERTY_SENSOR_MODEL},
	{775, USAGE_PROPERTY_SENSOR_SERIAL_NUMBER},
	{776, USAGE_PROPERTY_SENSOR_DESCRIPTION},
	{777, USAGE_PROPERTY_SENSOR_CONNECTION_TYPE},
	{778, USAGE_PROPERTY_SENSOR_DEVICE_PATH},
	{779, USAGE_PROPERTY_HARDWARE_REVISION},
	{780, USAGE_PROPERTY_FIRMWARE_VERSION},
	{781, USAGE_PROPERTY_RELEASE_DATE},
	{782, USAGE_PROPERTY_REPORT_INTERVAL},
	{783, USAGE_PROPERTY_CHANGE_SENSITIVITY_ABSOLUTE},
	{784, USAGE_PROPERTY_CHANGE_SENSITIVITY_PERCENT_OF_RANGE},
	{785, USAGE_PROPERTY_CHANGE_SENSITIVITY_PERCENT_RELATIVE},
	{786, USAGE_PROPERTY_ACCURACY},
	{787, USAGE_PROPERTY_RESOLUTION},
	{788, USAGE_PROPERTY_MAXIMUM},
	{789, USAGE_PROPERTY_MINIMUM},
	{790, USAGE_PROPERTY_REPORTING_STATE},
	{791, USAGE_PROPERTY_SAMPLING_RATE},
	{792, USAGE_PROPERTY_RESPONSE_CURVE},
	{793, USAGE_PROPERTY_POWER_STATE},
	{794, USAGE_PROPERTY_MAXIMUM_FIFO_EVENTS},
	{795, USAGE_PROPERTY_REPORT_LATENCY},
	{796, USAGE_PROPERTY_FLUSH_FIFO_EVENTS},
	{797, USAGE_PROPERTY_MAXIMUM_POWER_CONSUMPTION},
	{798, USAGE_PROPERTY_IS_PRIMARY},
	{799, USAGE_PROPERTY_HUMAN_PRESENCE_DETECTION_TYPE},
	{1024, USAGE_DATA_FIELD_LOCATION},
	{1026, USAGE_DATA_FIELD_ALTITUDE_ANTENNA_SEA_LEVEL},
	{1027, USAGE_DATA_FIELD_DIFFERENTIAL_REFERENCE_STATION_ID},
	{1028, USAGE_DATA_FIELD_ALTITUDE_ELLIPSOID_ERROR},
	{1029, USAGE_DATA_FIELD_ALTITUDE_ELLIPSOID},
	{1030, USAGE_DATA_FIELD_ALTITUDE_SEA_LEVEL_ERROR},
	{1031, USAGE_DATA_FIELD_ALTITUDE_SEA_LEVEL},
	{1032, USAGE_DATA_FIELD_DIFFERENTIAL_GPS_DATA_AGE},
	{1033, USAGE_DATA_FIELD_ERROR_RADIUS},
	{1034, USAGE_DATA_FIELD_FIX_QUALITY},
	{1035, USAGE_DATA_FIELD_FIX_TYPE},
	{1036, USAGE_DATA_FIELD_GEOIDAL_SEPARATION},
	{1037, USAGE_DATA_FIELD_GPS_OPERATION_MODE},
	{1038, USAGE_DATA_FIELD_GPS_SELECTION_MODE},
	{1039, USAGE_DATA_FIELD_GPS_STATUS},
	{1040, USAGE_DATA_FIELD_POSITION_DILUTION_OF_PRECISION},
	{1041, USAGE_DATA_FIELD_HORIZONTAL_DILUTION_OF_PRECISION},
	{1042, USAGE_DATA_FIELD_VERTICAL_DILUTION_OF_PRECISION},
	{1043, USAGE_DATA_FIELD_LATITUDE},
	{1044, USAGE_DATA_FIELD_LONGITUDE},
	{1045, USAGE_DATA_FIELD_TRUE_HEADING},
	{1046, USAGE_DATA_FIELD_MAGNETIC_HEADING},
	{1047, USAGE_DATA_FIELD_MAGNETIC_VARIATION},
	{1048, USAGE_DATA_FIELD_SPEED},
	{1049, USAGE_DATA_FIELD_SATELLITES_IN_VIEW},
	{1050, USAGE_DATA_FIELD_SATELLITES_IN_VIEW_AZIMUTH},
	{1051, USAGE_DATA_FIELD_SATELLITES_IN_VIEW_ELEVATION},
	{1052, USAGE_DATA_FIELD_SATELLITES_IN_VIEW_IDS},
	{1053, USAGE_DATA_FIELD_SATELLITES_IN_VIEW_PRNS},
	{1054, USAGE_DATA_FIELD_SATELLITES_IN_VIEW_S_N_RATIOS},
	{1055, USAGE_DATA_FIELD_SATELLITES_USED_COUNT},
	{1056, USAGE_DATA_FIELD_SATELLITES_USED_PRNS},
	{1057, USAGE_DATA_FIELD_NMEA_SENTENCE},
	{1058, USAGE_DATA_FIELD_ADDRESS_LINE_},
	{1059, USAGE_DATA_FIELD_ADDRESS_LINE_},
	{1060, USAGE_DATA_FIELD_CITY},
	{1061, USAGE_DATA_FIELD_STATE_OR_PROVINCE},
	{1062, USAGE_DATA_FIELD_COUNTRY_OR_REGION},
	{1063, USAGE_DATA_FIELD_POSTAL_CODE},
	{1066, USAGE_PROPERTY_LOCATION},
	{1067, USAGE_PROPERTY_LOCATION_DESIRED_ACCURACY},
	{1072, USAGE_DATA_FIELD_ENVIRONMENTAL},
	{1073, USAGE_DATA_FIELD_ATMOSPHERIC_PRESSURE},
	{1075, USAGE_DATA_FIELD_RELATIVE_HUMIDITY},
	{1076, USAGE_DATA_FIELD_TEMPERATURE},
	{1077, USAGE_DATA_FIELD_WIND_DIRECTION},
	{1078, USAGE_DATA_FIELD_WIND_SPEED},
	{1079, USAGE_DATA_FIELD_AIR_QUALITY_INDEX},
	{1080, USAGE_DATA_FIELD_EQUIVALENT_CO_},
	{1081, USAGE_DATA_FIELD_VOLATILE_ORGANIC_COMPOUND_CONCENTRATION},
	{1082, USAGE_DATA_FIELD_OBJECT_PRESENCE},
	{1083, USAGE_DATA_FIELD_OBJECT_PROXIMITY_RANGE},
	{1084, USAGE_DATA_FIELD_OBJECT_PROXIMITY_OUT_OF_RANGE},
	{1088, USAGE_PROPERTY_ENVIRONMENTAL},
	{1089, USAGE_PROPERTY_REFERENCE_PRESSURE},
	{1104, USAGE_DATA_FIELD_MOTION},
	{1105, USAGE_DATA_FIELD_MOTION_STATE},
	{1106, USAGE_DATA_FIELD_ACCELERATION},
	{1107, USAGE_DATA_FIELD_ACCELERATION_AXIS_X},
	{1108, USAGE_DATA_FIELD_ACCELERATION_AXIS_Y},
	{1109, USAGE_DATA_FIELD_ACCELERATION_AXIS_Z},
	{1110, USAGE_DATA_FIELD_ANGULAR_VELOCITY},
	{1111, USAGE_DATA_FIELD_ANGULAR_VELOCITY_ABOUT_X_AXIS},
	{1112, USAGE_DATA_FIELD_ANGULAR_VELOCITY_ABOUT_Y_AXIS},
	{1113, USAGE_DATA_FIELD_ANGULAR_VELOCITY_ABOUT_Z_AXIS},
	{1114, USAGE_DATA_FIELD_ANGULAR_POSITION},
	{1115, USAGE_DATA_FIELD_ANGULAR_POSITION_ABOUT_X_AXIS},
	{1116, USAGE_DATA_FIELD_ANGULAR_POSITION_ABOUT_Y_AXIS},
	{1117, USAGE_DATA_FIELD_ANGULAR_POSITION_ABOUT_Z_AXIS},
	{1118, USAGE_DATA_FIELD_MOTION_SPEED},
	{1119, USAGE_DATA_FIELD_MOTION_INTENSITY},
	{1136, USAGE_DATA_FIELD_ORIENTATION},
	{1137, USAGE_DATA_FIELD_HEADING},
	{1138, USAGE_DATA_FIELD_HEADING_X_AXIS},
	{1139, USAGE_DATA_FIELD_HEADING_Y_AXIS},
	{1140, USAGE_DATA_FIELD_HEADING_Z_AXIS},
	{1141, USAGE_DATA_FIELD_HEADING_COMPENSATED_MAGNETIC_NORTH},
	{1142, USAGE_DATA_FIELD_HEADING_COMPENSATED_TRUE_NORTH},
	{1143, USAGE_DATA_FIELD_HEADING_MAGNETIC_NORTH},
	{1144, USAGE_DATA_FIELD_HEADING_TRUE_NORTH},
	{1145, USAGE_DATA_FIELD_DISTANCE},
	{1146, USAGE_DATA_FIELD_DISTANCE_X_AXIS},
	{1147, USAGE_DATA_FIELD_DISTANCE_Y_AXIS},
	{1148, USAGE_DATA_FIELD_DISTANCE_Z_AXIS},
	{1149, USAGE_DATA_FIELD_DISTANCE_OUT_OF_RANGE},
	{1150, USAGE_DATA_FIELD_TILT},
	{1151, USAGE_DATA_FIELD_TILT_X_AXIS},
	{1152, USAGE_DATA_FIELD_TILT_Y_AXIS},
	{1153, USAGE_DATA_FIELD_TILT_Z_AXIS},
	{1154, USAGE_DATA_FIELD_ROTATION_MATRIX},
	{1155, USAGE_DATA_FIELD_QUATERNION},
	{1156, USAGE_DATA_FIELD_MAGNETIC_FLUX},
	{1157, USAGE_DATA_FIELD_MAGNETIC_FLUX_X_AXIS},
	{1158, USAGE_DATA_FIELD_MAGNETIC_FLUX_Y_AXIS},
	{1159, USAGE_DATA_FIELD_MAGNETIC_FLUX_Z_AXIS},
	{1160, USAGE_DATA_FIELD_MAGNETOMETER_ACCURACY},
	{1161, USAGE_DATA_FIELD_SIMPLE_ORIENTATION_DIRECTION},
	{1168, USAGE_DATA_FIELD_MECHANICAL},
	{1169, USAGE_DATA_FIELD_BOOLEAN_SWITCH_STATE},
	{1170, USAGE_DATA_FIELD_BOOLEAN_SWITCH_ARRAY_STATES},
	{1171, USAGE_DATA_FIELD_MULTIVALUE_SWITCH_VALUE},
	{1172, USAGE_DATA_FIELD_FORCE},
	{1173, USAGE_DATA_FIELD_ABSOLUTE_PRESSURE},
	{1174, USAGE_DATA_FIELD_GAUGE_PRESSURE},
	{1175, USAGE_DATA_FIELD_STRAIN},
	{1176, USAGE_DATA_FIELD_WEIGHT},
	{1184, USAGE_PROPERTY_MECHANICAL},
	{1185, USAGE_PROPERTY_VIBRATION_STATE},
	{1186, USAGE_PROPERTY_FORWARD_VIBRATION_SPEED},
	{1187, USAGE_PROPERTY_BACKWARD_VIBRATION_SPEED},
	{1200, USAGE_DATA_FIELD_BIOMETRIC},
	{1201, USAGE_DATA_FIELD_HUMAN_PRESENCE},
	{1202, USAGE_DATA_FIELD_HUMAN_PROXIMITY_RANGE},
	{1203, USAGE_DATA_FIELD_HUMAN_PROXIMITY_OUT_OF_RANGE},
	{1204, USAGE_DATA_FIELD_HUMAN_TOUCH_STATE},
	{1205, USAGE_DATA_FIELD_BLOOD_PRESSURE},
	{1206, USAGE_DATA_FIELD_BLOOD_PRESSURE_DIASTOLIC},
	{1207, USAGE_DATA_FIELD_BLOOD_PRESSURE_SYSTOLIC},
	{1208, USAGE_DATA_FIELD_HEART_RATE},
	{1209, USAGE_DATA_FIELD_RESTING_HEART_RATE},
	{1210, USAGE_DATA_FIELD_HEARTBEAT_INTERVAL},
	{1211, USAGE_DATA_FIELD_RESPIRATORY_RATE},
	{1212, USAGE_DATA_FIELD_SPO_},
	{1213, USAGE_DATA_FIELD_HUMAN_ATTENTION_DETECTED},
	{1232, USAGE_DATA_FIELD_LIGHT},
	{1233, USAGE_DATA_FIELD_ILLUMINANCE},
	{1234, USAGE_DATA_FIELD_COLOR_TEMPERATURE},
	{1235, USAGE_DATA_FIELD_CHROMATICITY},
	{1236, USAGE_DATA_FIELD_CHROMATICITY_X},
	{1237, USAGE_DATA_FIELD_CHROMATICITY_Y},
	{1238, USAGE_DATA_FIELD_CONSUMER_IR_SENTENCE_RECEIVE},
	{1239, USAGE_DATA_FIELD_INFRARED_LIGHT},
	{1240, USAGE_DATA_FIELD_RED_LIGHT},
	{1241, USAGE_DATA_FIELD_GREEN_LIGHT},
	{1242, USAGE_DATA_FIELD_BLUE_LIGHT},
	{1243, USAGE_DATA_FIELD_ULTRAVIOLET_A_LIGHT},
	{1244, USAGE_DATA_FIELD_ULTRAVIOLET_B_LIGHT},
	{1245, USAGE_DATA_FIELD_ULTRAVIOLET_INDEX},
	{1246, USAGE_DATA_FIELD_NEAR_INFRARED_LIGHT},
	{1247, USAGE_PROPERTY_LIGHT},
	{1248, USAGE_PROPERTY_CONSUMER_IR_SENTENCE_SEND},
	{1250, USAGE_PROPERTY_AUTO_BRIGHTNESS_PREFERRED},
	{1251, USAGE_PROPERTY_AUTO_COLOR_PREFERRED},
	{1264, USAGE_DATA_FIELD_SCANNER},
	{1265, USAGE_DATA_FIELD_RFID_TAG_BIT},
	{1266, USAGE_DATA_FIELD_NFC_SENTENCE_RECEIVE},
	{1272, USAGE_PROPERTY_SCANNER},
	{1273, USAGE_PROPERTY_NFC_SENTENCE_SEND},
	{1280, USAGE_DATA_FIELD_ELECTRICAL},
	{1281, USAGE_DATA_FIELD_CAPACITANCE},
	{1282, USAGE_DATA_FIELD_CURRENT},
	{1283, USAGE_DATA_FIELD_ELECTRICAL_POWER},
	{1284, USAGE_DATA_FIELD_INDUCTANCE},
	{1285, USAGE_DATA_FIELD_RESISTANCE},
	{1286, USAGE_DATA_FIELD_VOLTAGE},
	{1287, USAGE_DATA_FIELD_FREQUENCY},
	{1288, USAGE_DATA_FIELD_PERIOD},
	{1289, USAGE_DATA_FIELD_PERCENT_OF_RANGE},
	{1312, USAGE_DATA_FIELD_TIME},
	{1313, USAGE_DATA_FIELD_YEAR},
	{1314, USAGE_DATA_FIELD_MONTH},
	{1315, USAGE_DATA_FIELD_DAY},
	{1316, USAGE_DATA_FIELD_DAY_OF_WEEK},
	{1317, USAGE_DATA_FIELD_HOUR},
	{1318, USAGE_DATA_FIELD_MINUTE},
	{1319, USAGE_DATA_FIELD_SECOND},
	{1320, USAGE_DATA_FIELD_MILLISECOND},
	{1321, USAGE_DATA_FIELD_TIMESTAMP},
	{1322, USAGE_DATA_FIELD_JULIAN_DAY_OF_YEAR},
	{1323, USAGE_DATA_FIELD_TIME_SINCE_SYSTEM_BOOT},
	{1328, USAGE_PROPERTY_TIME},
	{1329, USAGE_PROPERTY_TIME_ZONE_OFFSET_FROM_UTC},
	{1330, USAGE_PROPERTY_TIME_ZONE_NAME},
	{1331, USAGE_PROPERTY_DAYLIGHT_SAVINGS_TIME_OBSERVED},
	{1332, USAGE_PROPERTY_TIME_TRIM_ADJUSTMENT},
	{1333, USAGE_PROPERTY_ARM_ALARM},
	{1344, USAGE_DATA_FIELD_CUSTOM},
	{1345, USAGE_DATA_FIELD_CUSTOM_USAGE},
	{1346, USAGE_DATA_FIELD_CUSTOM_BOOLEAN_ARRAY},
	{1347, USAGE_DATA_FIELD_CUSTOM_VALUE},
	{1348, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1349, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1350, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1351, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1352, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1353, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1354, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1355, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1356, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1357, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1358, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1359, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1360, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1361, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1362, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1363, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1364, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1365, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1366, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1367, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1368, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1369, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1370, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1371, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1372, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1373, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1374, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1375, USAGE_DATA_FIELD_CUSTOM_VALUE_},
	{1376, USAGE_DATA_FIELD_GENERIC},
	{1377, USAGE_DATA_FIELD_GENERIC_GUID_OR_PROPERTYKEY},
	{1378, USAGE_DATA_FIELD_GENERIC_CATEGORY_GUID},
	{1379, USAGE_DATA_FIELD_GENERIC_TYPE_GUID},
	{1380, USAGE_DATA_FIELD_GENERIC_EVENT_PROPERTYKEY},
	{1381, USAGE_DATA_FIELD_GENERIC_PROPERTY_PROPERTYKEY},
	{1382, USAGE_DATA_FIELD_GENERIC_DATA_FIELD_PROPERTYKEY},
	{1383, USAGE_DATA_FIELD_GENERIC_EVENT},
	{1384, USAGE_DATA_FIELD_GENERIC_PROPERTY},
	{1385, USAGE_DATA_FIELD_GENERIC_DATA_FIELD},
	{1386, USAGE_DATA_FIELD_ENUMERATOR_TABLE_ROW_INDEX},
	{1387, USAGE_DATA_FIELD_ENUMERATOR_TABLE_ROW_COUNT},
	{1388, USAGE_DATA_FIELD_GENERIC_GUID_OR_PROPERTYKEY_KIND},
	{1389, USAGE_DATA_FIELD_GENERIC_GUID},
	{1390, USAGE_DATA_FIELD_GENERIC_PROPERTYKEY},
	{1391, USAGE_DATA_FIELD_GENERIC_TOP_LEVEL_COLLECTION_ID},
	{1392, USAGE_DATA_FIELD_GENERIC_REPORT_ID},
	{1393, USAGE_DATA_FIELD_GENERIC_REPORT_ITEM_POSITION_INDEX},
	{1394, USAGE_DATA_FIELD_GENERIC_FIRMWARE_VARTYPE},
	{1395, USAGE_DATA_FIELD_GENERIC_UNIT_OF_MEASURE},
	{1396, USAGE_DATA_FIELD_GENERIC_UNIT_EXPONENT},
	{1397, USAGE_DATA_FIELD_GENERIC_REPORT_SIZE},
	{1398, USAGE_DATA_FIELD_GENERIC_REPORT_COUNT},
	{1408, USAGE_PROPERTY_GENERIC},
	{1409, USAGE_PROPERTY_ENUMERATOR_TABLE_ROW_INDEX},
	{1410, USAGE_PROPERTY_ENUMERATOR_TABLE_ROW_COUNT},
	{1424, USAGE_DATA_FIELD_PERSONAL_ACTIVITY},
	{1425, USAGE_DATA_FIELD_ACTIVITY_TYPE},
	{1426, USAGE_DATA_FIELD_ACTIVITY_STATE},
	{1427, USAGE_DATA_FIELD_DEVICE_POSITION},
	{1428, USAGE_DATA_FIELD_STEP_COUNT},
	{1429, USAGE_DATA_FIELD_STEP_COUNT_RESET},
	{1430, USAGE_DATA_FIELD_STEP_DURATION},
	{1431, USAGE_DATA_FIELD_STEP_TYPE},
	{1440, USAGE_PROPERTY_MINIMUM_ACTIVITY_DETECTION_INTERVAL},
	{1441, USAGE_PROPERTY_SUPPORTED_ACTIVITY_TYPES},
	{1442, USAGE_PROPERTY_SUBSCRIBED_ACTIVITY_TYPES},
	{1443, USAGE_PROPERTY_SUPPORTED_STEP_TYPES},
	{1444, USAGE_PROPERTY_SUBSCRIBED_STEP_TYPES},
	{1445, USAGE_PROPERTY_FLOOR_HEIGHT},
	{1456, USAGE_DATA_FIELD_CUSTOM_TYPE_ID},
	{1472, USAGE_PROPERTY_CUSTOM},
	{1473, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1474, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1475, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1476, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1477, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1478, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1479, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1480, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1481, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1482, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1483, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1484, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1485, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1486, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1487, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1488, USAGE_PROPERTY_CUSTOM_VALUE_},
	{1504, USAGE_DATA_FIELD_HINGE},
	{1505, USAGE_DATA_FIELD_HINGE_ANGLE},
	{1520, USAGE_DATA_FIELD_GESTURE_SENSOR},
	{1521, USAGE_DATA_FIELD_GESTURE_STATE},
	{1522, USAGE_DATA_FIELD_HINGE_FOLD_INITIAL_ANGLE},
	{1523, USAGE_DATA_FIELD_HINGE_FOLD_FINAL_ANGLE},
	{1524, USAGE_DATA_FIELD_HINGE_FOLD_CONTRIBUTING_PANEL},
	{1525, USAGE_DATA_FIELD_HINGE_FOLD_TYPE},
	{2048, USAGE_SENSOR_STATE_UNDEFINED},
	{2049, USAGE_SENSOR_STATE_READY},
	{2050, USAGE_SENSOR_STATE_NOT_AVAILABLE},
	{2051, USAGE_SENSOR_STATE_NO_DATA},
	{2052, USAGE_SENSOR_STATE_INITIALIZING},
	{2053, USAGE_SENSOR_STATE_ACCESS_DENIED},
	{2054, USAGE_SENSOR_STATE_ERROR},
	{2064, USAGE_SENSOR_EVENT_UNKNOWN},
	{2065, USAGE_SENSOR_EVENT_STATE_CHANGED},
	{2066, USAGE_SENSOR_EVENT_PROPERTY_CHANGED},
	{2067, USAGE_SENSOR_EVENT_DATA_UPDATED},
	{2068, USAGE_SENSOR_EVENT_POLL_RESPONSE},
	{2069, USAGE_SENSOR_EVENT_CHANGE_SENSITIVITY},
	{2070, USAGE_SENSOR_EVENT_RANGE_MAXIMUM_REACHED},
	{2071, USAGE_SENSOR_EVENT_RANGE_MINIMUM_REACHED},
	{2072, USAGE_SENSOR_EVENT_HIGH_THRESHOLD_CROSS_UPWARD},
	{2073, USAGE_SENSOR_EVENT_HIGH_THRESHOLD_CROSS_DOWNWARD},
	{2074, USAGE_SENSOR_EVENT_LOW_THRESHOLD_CROSS_UPWARD},
	{2075, USAGE_SENSOR_EVENT_LOW_THRESHOLD_CROSS_DOWNWARD},
	{2076, USAGE_SENSOR_EVENT_ZERO_THRESHOLD_CROSS_UPWARD},
	{2077, USAGE_SENSOR_EVENT_ZERO_THRESHOLD_CROSS_DOWNWARD},
	{2078, USAGE_SENSOR_EVENT_PERIOD_EXCEEDED},
	{2079, USAGE_SENSOR_EVENT_FREQUENCY_EXCEEDED},
	{2080, USAGE_SENSOR_EVENT_COMPLEX_TRIGGER},
	{2096, USAGE_CONNECTION_TYPE_PC_INTEGRATED},
	{2097, USAGE_CONNECTION_TYPE_PC_ATTACHED},
	{2098, USAGE_CONNECTION_TYPE_PC_EXTERNAL},
	{2112, USAGE_REPORTING_STATE_REPORT_NO_EVENTS},
	{2113, USAGE_REPORTING_STATE_REPORT_ALL_EVENTS},
	{2114, USAGE_REPORTING_STATE_REPORT_THRESHOLD_EVENTS},
	{2115, USAGE_REPORTING_STATE_WAKE_ON_NO_EVENTS},
	{2116, USAGE_REPORTING_STATE_WAKE_ON_ALL_EVENTS},
	{2117, USAGE_REPORTING_STATE_WAKE_ON_THRESHOLD_EVENTS},
	{2128, USAGE_POWER_STATE_UNDEFINED},
	{2129, USAGE_POWER_STATE_D_FULL_POWER},
	{2130, USAGE_POWER_STATE_D_LOW_POWER},
	{2131, USAGE_POWER_STATE_D_STANDBY_POWER_WITH_WAKEUP},
	{2132, USAGE_POWER_STATE_D_SLEEP_WITH_WAKEUP},
	{2133, USAGE_POWER_STATE_D_POWER_OFF},
	{2144, USAGE_ACCURACY_DEFAULT},
	{2145, USAGE_ACCURACY_HIGH},
	{2146, USAGE_ACCURACY_MEDIUM},
	{2147, USAGE_ACCURACY_LOW},
	{2160, USAGE_FIX_QUALITY_NO_FIX},
	{2161, USAGE_FIX_QUALITY_GPS},
	{2162, USAGE_FIX_QUALITY_DGPS},
	{2176, USAGE_FIX_TYPE_NO_FIX},
	{2177, USAGE_FIX_TYPE_GPS_SPS_MODE_FIX_VALID},
	{2178, USAGE_FIX_TYPE_DGPS_SPS_MODE_FIX_VALID},
	{2179, USAGE_FIX_TYPE_GPS_PPS_MODE_FIX_VALID},
	{2180, USAGE_FIX_TYPE_REAL_TIME_KINEMATIC},
	{2181, USAGE_FIX_TYPE_FLOAT_RTK},
	{2182, USAGE_FIX_TYPE_ESTIMATED_DEAD_RECKONED_},
	{2183, USAGE_FIX_TYPE_MANUAL_INPUT_MODE},
	{2184, USAGE_FIX_TYPE_SIMULATOR_MODE},
	{2192, USAGE_GPS_OPERATION_MODE_MANUAL},
	{2193, USAGE_GPS_OPERATION_MODE_AUTOMATIC},
	{2208, USAGE_GPS_SELECTION_MODE_AUTONOMOUS},
	{2209, USAGE_GPS_SELECTION_MODE_DGPS},
	{2210, USAGE_GPS_SELECTION_MODE_ESTIMATED_DEAD_RECKONED_},
	{2211, USAGE_GPS_SELECTION_MODE_MANUAL_INPUT},
	{2212, USAGE_GPS_SELECTION_MODE_SIMULATOR},
	{2213, USAGE_GPS_SELECTION_MODE_DATA_NOT_VALID},
	{2224, USAGE_GPS_STATUS_DATA_VALID},
	{2225, USAGE_GPS_STATUS_DATA_NOT_VALID},
	{2240, USAGE_DAY_OF_WEEK_SUNDAY},
	{2241, USAGE_DAY_OF_WEEK_MONDAY},
	{2242, USAGE_DAY_OF_WEEK_TUESDAY},
	{2243, USAGE_DAY_OF_WEEK_WEDNESDAY},
	{2244, USAGE_DAY_OF_WEEK_THURSDAY},
	{2245, USAGE_DAY_OF_WEEK_FRIDAY},
	{2246, USAGE_DAY_OF_WEEK_SATURDAY},
	{2256, USAGE_KIND_CATEGORY},
	{2257, USAGE_KIND_TYPE},
	{2258, USAGE_KIND_EVENT},
	{2259, USAGE_KIND_PROPERTY},
	{2260, USAGE_KIND_DATA_FIELD},
	{2272, USAGE_MAGNETOMETER_ACCURACY_LOW},
	{2273, USAGE_MAGNETOMETER_ACCURACY_MEDIUM},
	{2274, USAGE_MAGNETOMETER_ACCURACY_HIGH},
	{2288, USAGE_SIMPLE_ORIENTATION_DIRECTION_NOT_ROTATED},
	{2289, USAGE_SIMPLE_ORIENTATION_DIRECTION_ROTATED_DEGREES_CCW},
	{2290, USAGE_SIMPLE_ORIENTATION_DIRECTION_ROTATED_DEGREES_CCW},
	{2291, USAGE_SIMPLE_ORIENTATION_DIRECTION_ROTATED_DEGREES_CCW},
	{2292, USAGE_SIMPLE_ORIENTATION_DIRECTION_FACE_UP},
	{2293, USAGE_SIMPLE_ORIENTATION_DIRECTION_FACE_DOWN},
	{2304, USAGE_VT_NULL},
	{2305, USAGE_VT_BOOL},
	{2306, USAGE_VT_UI_},
	{2307, USAGE_VT_I_},
	{2308, USAGE_VT_UI_},
	{2309, USAGE_VT_I_},
	{2310, USAGE_VT_UI_},
	{2311, USAGE_VT_I_},
	{2312, USAGE_VT_UI_},
	{2313, USAGE_VT_I_},
	{2314, USAGE_VT_R_},
	{2315, USAGE_VT_R_},
	{2316, USAGE_VT_WSTR},
	{2317, USAGE_VT_STR},
	{2318, USAGE_VT_CLSID},
	{2319, USAGE_VT_VECTOR_VT_UI_},
	{2320, USAGE_VT_F_E_},
	{2321, USAGE_VT_F_E_},
	{2322, USAGE_VT_F_E_},
	{2323, USAGE_VT_F_E_},
	{2324, USAGE_VT_F_E_},
	{2325, USAGE_VT_F_E_},
	{2326, USAGE_VT_F_E_},
	{2327, USAGE_VT_F_E_},
	{2328, USAGE_VT_F_E_},
	{2329, USAGE_VT_F_E_},
	{2330, USAGE_VT_F_EA},
	{2331, USAGE_VT_F_EB},
	{2332, USAGE_VT_F_EC},
	{2333, USAGE_VT_F_ED},
	{2334, USAGE_VT_F_EE},
	{2335, USAGE_VT_F_EF},
	{2336, USAGE_VT_F_E_},
	{2337, USAGE_VT_F_E_},
	{2338, USAGE_VT_F_E_},
	{2339, USAGE_VT_F_E_},
	{2340, USAGE_VT_F_E_},
	{2341, USAGE_VT_F_E_},
	{2342, USAGE_VT_F_E_},
	{2343, USAGE_VT_F_E_},
	{2344, USAGE_VT_F_E_},
	{2345, USAGE_VT_F_E_},
	{2346, USAGE_VT_F_EA},
	{2347, USAGE_VT_F_EB},
	{2348, USAGE_VT_F_EC},
	{2349, USAGE_VT_F_ED},
	{2350, USAGE_VT_F_EE},
	{2351, USAGE_VT_F_EF},
	{2352, USAGE_ACTIVITY_TYPE_UNKNOWN},
	{2353, USAGE_ACTIVITY_TYPE_STATIONARY},
	{2354, USAGE_ACTIVITY_TYPE_FIDGETING},
	{2355, USAGE_ACTIVITY_TYPE_WALKING},
	{2356, USAGE_ACTIVITY_TYPE_RUNNING},
	{2357, USAGE_ACTIVITY_TYPE_IN_VEHICLE},
	{2358, USAGE_ACTIVITY_TYPE_BIKING},
	{2359, USAGE_ACTIVITY_TYPE_IDLE},
	{2368, USAGE_UNIT_NOT_SPECIFIED},
	{2369, USAGE_UNIT_LUX},
	{2370, USAGE_UNIT_DEGREES_KELVIN},
	{2371, USAGE_UNIT_DEGREES_CELSIUS},
	{2372, USAGE_UNIT_PASCAL},
	{2373, USAGE_UNIT_NEWTON},
	{2374, USAGE_UNIT_METERS_SECOND},
	{2375, USAGE_UNIT_KILOGRAM},
	{2376, USAGE_UNIT_METER},
	{2377, USAGE_UNIT_METERS_SECOND_SECOND},
	{2378, USAGE_UNIT_FARAD},
	{2379, USAGE_UNIT_AMPERE},
	{2380, USAGE_UNIT_WATT},
	{2381, USAGE_UNIT_HENRY},
	{2382, USAGE_UNIT_OHM},
	{2383, USAGE_UNIT_VOLT},
	{2384, USAGE_UNIT_HERTZ},
	{2385, USAGE_UNIT_BAR},
	{2386, USAGE_UNIT_DEGREES_ANTI_CLOCKWISE},
	{2387, USAGE_UNIT_DEGREES_CLOCKWISE},
	{2388, USAGE_UNIT_DEGREES},
	{2389, USAGE_UNIT_DEGREES_SECOND},
	{2390, USAGE_UNIT_DEGREES_SECOND_SECOND},
	{2391, USAGE_UNIT_KNOT},
	{2392, USAGE_UNIT_PERCENT},
	{2393, USAGE_UNIT_SECOND},
	{2394, USAGE_UNIT_MILLISECOND},
	{2395, USAGE_UNIT_G},
	{2396, USAGE_UNIT_BYTES},
	{2397, USAGE_UNIT_MILLIGAUSS},
	{2398, USAGE_UNIT_BITS},
	{2400, USAGE_ACTIVITY_STATE_NO_STATE_CHANGE},
	{2401, USAGE_ACTIVITY_STATE_START_ACTIVITY},
	{2402, USAGE_ACTIVITY_STATE_END_ACTIVITY},
	{2416, USAGE_EXPONENT_},
	{2417, USAGE_EXPONENT_},
	{2418, USAGE_EXPONENT_},
	{2419, USAGE_EXPONENT_},
	{2420, USAGE_EXPONENT_},
	{2421, USAGE_EXPONENT_},
	{2422, USAGE_EXPONENT_},
	{2423, USAGE_EXPONENT_},
	{2424, USAGE_EXPONENT_},
	{2425, USAGE_EXPONENT_},
	{2426, USAGE_EXPONENT_A},
	{2427, USAGE_EXPONENT_B},
	{2428, USAGE_EXPONENT_C},
	{2429, USAGE_EXPONENT_D},
	{2430, USAGE_EXPONENT_E},
	{2431, USAGE_EXPONENT_F},
	{2432, USAGE_DEVICE_POSITION_UNKNOWN},
	{2433, USAGE_DEVICE_POSITION_UNCHANGED},
	{2434, USAGE_DEVICE_POSITION_ON_DESK},
	{2435, USAGE_DEVICE_POSITION_IN_HAND},
	{2436, USAGE_DEVICE_POSITION_MOVING_IN_BAG},
	{2437, USAGE_DEVICE_POSITION_STATIONARY_IN_BAG},
	{2448, USAGE_STEP_TYPE_UNKNOWN},
	{2449, USAGE_STEP_TYPE_RUNNING},
	{2450, USAGE_STEP_TYPE_WALKING},
	{2464, USAGE_GESTURE_STATE_UNKNOWN},
	{2465, USAGE_GESTURE_STATE_STARTED},
	{2466, USAGE_GESTURE_STATE_COMPLETED},
	{2467, USAGE_GESTURE_STATE_CANCELLED},
	{2480, USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_UNKNOWN},
	{2481, USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_PANEL_},
	{2482, USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_PANEL_},
	{2483, USAGE_HINGE_FOLD_CONTRIBUTING_PANEL_BOTH},
	{2484, USAGE_HINGE_FOLD_TYPE_UNKNOWN},
	{2485, USAGE_HINGE_FOLD_TYPE_INCREASING},
	{2486, USAGE_HINGE_FOLD_TYPE_DECREASING},
	{2496, USAGE_HUMAN_PRESENCE_DETECTION_TYPE_VENDOR_DEFINED_NON_BIOMETRIC},
	{2497, USAGE_HUMAN_PRESENCE_DETECTION_TYPE_VENDOR_DEFINED_BIOMETRIC},
	{2498, USAGE_HUMAN_PRESENCE_DETECTION_TYPE_FACIAL_BIOMETRIC},
	{2499, USAGE_HUMAN_PRESENCE_DETECTION_TYPE_AUDIO_BIOMETRIC},
	{4096, USAGE_MODIFIER_CHANGE_SENSITIVITY_ABSOLUTE},
	{8192, USAGE_MODIFIER_MAXIMUM},
	{12288, USAGE_MODIFIER_MINIMUM},
	{16384, USAGE_MODIFIER_ACCURACY},
	{20480, USAGE_MODIFIER_RESOLUTION},
	{24576, USAGE_MODIFIER_THRESHOLD_HIGH},
	{28672, USAGE_MODIFIER_THRESHOLD_LOW},
	{32768, USAGE_MODIFIER_CALIBRATION_OFFSET},
	{36864, USAGE_MODIFIER_CALIBRATION_MULTIPLIER},
	{40960, USAGE_MODIFIER_REPORT_INTERVAL},
	{45056, USAGE_MODIFIER_FREQUENCY_MAX},
	{49152, USAGE_MODIFIER_PERIOD_MAX},
	{53248, USAGE_MODIFIER_CHANGE_SENSITIVITY_PERCENT_OF_RANGE},
	{57344, USAGE_MODIFIER_CHANGE_SENSITIVITY_PERCENT_RELATIVE},
	{61440, USAGE_MODIFIER_VENDOR_RESERVED},
});
