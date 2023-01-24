#include "usages.h"

const Usage* const USAGE_SIMPLE_HAPTIC_CONTROLLER = new Usage(1,"Simple Haptic Controller", std::vector<std::string>{ "CA","CL"});
const Usage* const USAGE_WAVEFORM_LIST = new Usage(16,"Waveform List", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DURATION_LIST = new Usage(17,"Duration List", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_AUTO_TRIGGER = new Usage(32,"Auto Trigger", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MANUAL_TRIGGER = new Usage(33,"Manual Trigger", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AUTO_TRIGGER_ASSOCIATED_CONTROL = new Usage(34,"Auto Trigger Associated Control", std::vector<std::string>{ "SV"});
const Usage* const USAGE_INTENSITY = new Usage(35,"Intensity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_REPEAT_COUNT = new Usage(36,"Repeat Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RETRIGGER_PERIOD = new Usage(37,"Retrigger Period", std::vector<std::string>{ "DV"});
const Usage* const USAGE_WAVEFORM_VENDOR_PAGE = new Usage(38,"Waveform Vendor Page", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_VENDOR_ID = new Usage(39,"Waveform Vendor ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_CUTOFF_TIME = new Usage(40,"Waveform Cutoff Time", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_NONE = new Usage(4097,"Waveform None", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_STOP = new Usage(4098,"Waveform Stop", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_CLICK = new Usage(4099,"Waveform Click", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_BUZZ_CONTINUOUS = new Usage(4100,"Waveform Buzz Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_RUMBLE_CONTINUOUS = new Usage(4101,"Waveform Rumble Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_PRESS = new Usage(4102,"Waveform Press", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_RELEASE = new Usage(4103,"Waveform Release", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_HOVER = new Usage(4104,"Waveform Hover", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_SUCCESS = new Usage(4105,"Waveform Success", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_ERROR = new Usage(4106,"Waveform Error", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_INK_CONTINUOUS = new Usage(4107,"Waveform Ink Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_PENCIL_CONTINUOUS = new Usage(4108,"Waveform Pencil Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_MARKER_CONTINUOUS = new Usage(4109,"Waveform Marker Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_CHISEL_MARKER_CONTINUOUS = new Usage(4110,"Waveform Chisel Marker Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_BRUSH_CONTINUOUS = new Usage(4111,"Waveform Brush Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_ERASER_CONTINUOUS = new Usage(4112,"Waveform Eraser Continuous", std::vector<std::string>{ "SV"});
const Usage* const USAGE_WAVEFORM_SPARKLE_CONTINUOUS = new Usage(4113,"Waveform Sparkle Continuous", std::vector<std::string>{ "SV"});


const UsagePage* const USAGE_PAGE_HAPTICS = new UsagePage(14, "Haptics", std::map<uint16_t, const Usage* const>{
	{1, USAGE_SIMPLE_HAPTIC_CONTROLLER},
	{16, USAGE_WAVEFORM_LIST},
	{17, USAGE_DURATION_LIST},
	{32, USAGE_AUTO_TRIGGER},
	{33, USAGE_MANUAL_TRIGGER},
	{34, USAGE_AUTO_TRIGGER_ASSOCIATED_CONTROL},
	{35, USAGE_INTENSITY},
	{36, USAGE_REPEAT_COUNT},
	{37, USAGE_RETRIGGER_PERIOD},
	{38, USAGE_WAVEFORM_VENDOR_PAGE},
	{39, USAGE_WAVEFORM_VENDOR_ID},
	{40, USAGE_WAVEFORM_CUTOFF_TIME},
	{4097, USAGE_WAVEFORM_NONE},
	{4098, USAGE_WAVEFORM_STOP},
	{4099, USAGE_WAVEFORM_CLICK},
	{4100, USAGE_WAVEFORM_BUZZ_CONTINUOUS},
	{4101, USAGE_WAVEFORM_RUMBLE_CONTINUOUS},
	{4102, USAGE_WAVEFORM_PRESS},
	{4103, USAGE_WAVEFORM_RELEASE},
	{4104, USAGE_WAVEFORM_HOVER},
	{4105, USAGE_WAVEFORM_SUCCESS},
	{4106, USAGE_WAVEFORM_ERROR},
	{4107, USAGE_WAVEFORM_INK_CONTINUOUS},
	{4108, USAGE_WAVEFORM_PENCIL_CONTINUOUS},
	{4109, USAGE_WAVEFORM_MARKER_CONTINUOUS},
	{4110, USAGE_WAVEFORM_CHISEL_MARKER_CONTINUOUS},
	{4111, USAGE_WAVEFORM_BRUSH_CONTINUOUS},
	{4112, USAGE_WAVEFORM_ERASER_CONTINUOUS},
	{4113, USAGE_WAVEFORM_SPARKLE_CONTINUOUS},
});
