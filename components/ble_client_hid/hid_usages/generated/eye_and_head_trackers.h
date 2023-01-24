#include "usages.h"

const Usage* const USAGE_EYE_TRACKER = new Usage(1,"Eye Tracker", std::vector<std::string>{ "CA"});
const Usage* const USAGE_HEAD_TRACKER = new Usage(2,"Head Tracker", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TRACKING_DATA = new Usage(16,"Tracking Data", std::vector<std::string>{ "CP"});
const Usage* const USAGE_CAPABILITIES = new Usage(17,"Capabilities", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CONFIGURATION = new Usage(18,"Configuration", std::vector<std::string>{ "CL"});
const Usage* const USAGE_STATUS = new Usage(19,"Status", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CONTROL = new Usage(20,"Control", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SENSOR_TIMESTAMP = new Usage(32,"Sensor Timestamp", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITION_X = new Usage(33,"Position X", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITION_Y = new Usage(34,"Position Y", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITION_Z = new Usage(35,"Position Z", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GAZE_POINT = new Usage(36,"Gaze Point", std::vector<std::string>{ "CP"});
const Usage* const USAGE_LEFT_EYE_POSITION = new Usage(37,"Left Eye Position", std::vector<std::string>{ "CP"});
const Usage* const USAGE_RIGHT_EYE_POSITION = new Usage(38,"Right Eye Position", std::vector<std::string>{ "CP"});
const Usage* const USAGE_HEAD_POSITION = new Usage(39,"Head Position", std::vector<std::string>{ "CP"});
const Usage* const USAGE_HEAD_DIRECTION_POINT = new Usage(40,"Head Direction Point", std::vector<std::string>{ "CP"});
const Usage* const USAGE_ROTATION_ABOUT_X_AXIS = new Usage(41,"Rotation about X axis", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROTATION_ABOUT_Y_AXIS = new Usage(42,"Rotation about Y axis", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROTATION_ABOUT_Z_AXIS = new Usage(43,"Rotation about Z axis", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRACKER_QUALITY = new Usage(256,"Tracker Quality", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MINIMUM_TRACKING_DISTANCE = new Usage(257,"Minimum Tracking Distance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_OPTIMUM_TRACKING_DISTANCE = new Usage(258,"Optimum Tracking Distance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MAXIMUM_TRACKING_DISTANCE = new Usage(259,"Maximum Tracking Distance", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MAXIMUM_SCREEN_PLANE_WIDTH = new Usage(260,"Maximum Screen Plane Width", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MAXIMUM_SCREEN_PLANE_HEIGHT = new Usage(261,"Maximum Screen Plane Height", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DISPLAY_MANUFACTURER_ID = new Usage(512,"Display Manufacturer ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DISPLAY_PRODUCT_ID = new Usage(513,"Display Product ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DISPLAY_SERIAL_NUMBER = new Usage(514,"Display Serial Number", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DISPLAY_MANUFACTURER_DATE = new Usage(515,"Display Manufacturer Date", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CALIBRATED_SCREEN_WIDTH = new Usage(516,"Calibrated Screen Width", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CALIBRATED_SCREEN_HEIGHT = new Usage(517,"Calibrated Screen Height", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SAMPLING_FREQUENCY = new Usage(768,"Sampling Frequency", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONFIGURATION_STATUS = new Usage(769,"Configuration Status", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DEVICE_MODE_REQUEST = new Usage(1024,"Device Mode Request", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_EYE_AND_HEAD_TRACKERS = new UsagePage(18, "Eye and Head Trackers", std::map<uint16_t, const Usage* const>{
	{1, USAGE_EYE_TRACKER},
	{2, USAGE_HEAD_TRACKER},
	{16, USAGE_TRACKING_DATA},
	{17, USAGE_CAPABILITIES},
	{18, USAGE_CONFIGURATION},
	{19, USAGE_STATUS},
	{20, USAGE_CONTROL},
	{32, USAGE_SENSOR_TIMESTAMP},
	{33, USAGE_POSITION_X},
	{34, USAGE_POSITION_Y},
	{35, USAGE_POSITION_Z},
	{36, USAGE_GAZE_POINT},
	{37, USAGE_LEFT_EYE_POSITION},
	{38, USAGE_RIGHT_EYE_POSITION},
	{39, USAGE_HEAD_POSITION},
	{40, USAGE_HEAD_DIRECTION_POINT},
	{41, USAGE_ROTATION_ABOUT_X_AXIS},
	{42, USAGE_ROTATION_ABOUT_Y_AXIS},
	{43, USAGE_ROTATION_ABOUT_Z_AXIS},
	{256, USAGE_TRACKER_QUALITY},
	{257, USAGE_MINIMUM_TRACKING_DISTANCE},
	{258, USAGE_OPTIMUM_TRACKING_DISTANCE},
	{259, USAGE_MAXIMUM_TRACKING_DISTANCE},
	{260, USAGE_MAXIMUM_SCREEN_PLANE_WIDTH},
	{261, USAGE_MAXIMUM_SCREEN_PLANE_HEIGHT},
	{512, USAGE_DISPLAY_MANUFACTURER_ID},
	{513, USAGE_DISPLAY_PRODUCT_ID},
	{514, USAGE_DISPLAY_SERIAL_NUMBER},
	{515, USAGE_DISPLAY_MANUFACTURER_DATE},
	{516, USAGE_CALIBRATED_SCREEN_WIDTH},
	{517, USAGE_CALIBRATED_SCREEN_HEIGHT},
	{768, USAGE_SAMPLING_FREQUENCY},
	{769, USAGE_CONFIGURATION_STATUS},
	{1024, USAGE_DEVICE_MODE_REQUEST},
});
