#include "usages.h"

const Usage* const USAGE_MEDICAL_ULTRASOUND = new Usage(1,"Medical Ultrasound", std::vector<std::string>{ "CA"});
const Usage* const USAGE_VCR_ACQUISITION = new Usage(32,"VCR/Acquisition", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_FREEZE_THAW = new Usage(33,"Freeze/Thaw", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CLIP_STORE = new Usage(34,"Clip Store", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_UPDATE = new Usage(35,"Update", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_NEXT = new Usage(36,"Next", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SAVE = new Usage(37,"Save", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PRINT = new Usage(38,"Print", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MICROPHONE_ENABLE = new Usage(39,"Microphone Enable", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_CINE = new Usage(64,"Cine", std::vector<std::string>{ "LC"});
const Usage* const USAGE_TRANSMIT_POWER = new Usage(65,"Transmit Power", std::vector<std::string>{ "LC"});
const Usage* const USAGE_VOLUME = new Usage(66,"Volume", std::vector<std::string>{ "LC"});
const Usage* const USAGE_FOCUS = new Usage(67,"Focus", std::vector<std::string>{ "LC"});
const Usage* const USAGE_DEPTH = new Usage(68,"Depth", std::vector<std::string>{ "LC"});
const Usage* const USAGE_SOFT_STEP_PRIMARY = new Usage(96,"Soft Step - Primary", std::vector<std::string>{ "LC"});
const Usage* const USAGE_SOFT_STEP_SECONDARY = new Usage(97,"Soft Step - Secondary", std::vector<std::string>{ "LC"});
const Usage* const USAGE_DEPTH_GAIN_COMPENSATION = new Usage(112,"Depth Gain Compensation", std::vector<std::string>{ "LC"});
const Usage* const USAGE_ZOOM_SELECT = new Usage(128,"Zoom Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_ZOOM_ADJUST = new Usage(129,"Zoom Adjust", std::vector<std::string>{ "LC"});
const Usage* const USAGE_SPECTRAL_DOPPLER_MODE_SELECT = new Usage(130,"Spectral Doppler Mode Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SPECTRAL_DOPPLER_ADJUST = new Usage(131,"Spectral Doppler Adjust", std::vector<std::string>{ "LC"});
const Usage* const USAGE_COLOR_DOPPLER_MODE_SELECT = new Usage(132,"Color Doppler Mode Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_COLOR_DOPPLER_ADJUST = new Usage(133,"Color Doppler Adjust", std::vector<std::string>{ "LC"});
const Usage* const USAGE_MOTION_MODE_SELECT = new Usage(134,"Motion Mode Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_MOTION_MODE_ADJUST = new Usage(135,"Motion Mode Adjust", std::vector<std::string>{ "LC"});
const Usage* const USAGE__D_MODE_SELECT = new Usage(136,"2-D Mode Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE__D_MODE_ADJUST = new Usage(137,"2-D Mode Adjust", std::vector<std::string>{ "LC"});
const Usage* const USAGE_SOFT_CONTROL_SELECT = new Usage(160,"Soft Control Select", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SOFT_CONTROL_ADJUST = new Usage(161,"Soft Control Adjust", std::vector<std::string>{ "LC"});


const UsagePage* const USAGE_PAGE_MEDICAL_INSTRUMENT = new UsagePage(64, "Medical Instrument", std::map<uint16_t, const Usage* const>{
	{1, USAGE_MEDICAL_ULTRASOUND},
	{32, USAGE_VCR_ACQUISITION},
	{33, USAGE_FREEZE_THAW},
	{34, USAGE_CLIP_STORE},
	{35, USAGE_UPDATE},
	{36, USAGE_NEXT},
	{37, USAGE_SAVE},
	{38, USAGE_PRINT},
	{39, USAGE_MICROPHONE_ENABLE},
	{64, USAGE_CINE},
	{65, USAGE_TRANSMIT_POWER},
	{66, USAGE_VOLUME},
	{67, USAGE_FOCUS},
	{68, USAGE_DEPTH},
	{96, USAGE_SOFT_STEP_PRIMARY},
	{97, USAGE_SOFT_STEP_SECONDARY},
	{112, USAGE_DEPTH_GAIN_COMPENSATION},
	{128, USAGE_ZOOM_SELECT},
	{129, USAGE_ZOOM_ADJUST},
	{130, USAGE_SPECTRAL_DOPPLER_MODE_SELECT},
	{131, USAGE_SPECTRAL_DOPPLER_ADJUST},
	{132, USAGE_COLOR_DOPPLER_MODE_SELECT},
	{133, USAGE_COLOR_DOPPLER_ADJUST},
	{134, USAGE_MOTION_MODE_SELECT},
	{135, USAGE_MOTION_MODE_ADJUST},
	{136, USAGE__D_MODE_SELECT},
	{137, USAGE__D_MODE_ADJUST},
	{160, USAGE_SOFT_CONTROL_SELECT},
	{161, USAGE_SOFT_CONTROL_ADJUST},
});
