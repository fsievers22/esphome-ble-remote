#include "usages.h"

const Usage* const USAGE_CAMERA_AUTO_FOCUS = new Usage(32,"Camera Auto-focus", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CAMERA_SHUTTER = new Usage(33,"Camera Shutter", std::vector<std::string>{ "OSC"});


const UsagePage* const USAGE_PAGE_CAMERA_CONTROL = new UsagePage(144, "Camera Control", std::map<uint16_t, const Usage* const>{
	{32, USAGE_CAMERA_AUTO_FOCUS},
	{33, USAGE_CAMERA_SHUTTER},
});
