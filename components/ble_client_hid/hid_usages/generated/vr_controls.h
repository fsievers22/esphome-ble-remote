#include "usages.h"

const Usage* const USAGE_BELT = new Usage(1,"Belt", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BODY_SUIT = new Usage(2,"Body Suit", std::vector<std::string>{ "CA"});
const Usage* const USAGE_FLEXOR = new Usage(3,"Flexor", std::vector<std::string>{ "CP"});
const Usage* const USAGE_GLOVE = new Usage(4,"Glove", std::vector<std::string>{ "CA"});
const Usage* const USAGE_HEAD_TRACKER = new Usage(5,"Head Tracker", std::vector<std::string>{ "CP"});
const Usage* const USAGE_HEAD_MOUNTED_DISPLAY = new Usage(6,"Head Mounted Display", std::vector<std::string>{ "CA"});
const Usage* const USAGE_HAND_TRACKER = new Usage(7,"Hand Tracker", std::vector<std::string>{ "CA"});
const Usage* const USAGE_OCULOMETER = new Usage(8,"Oculometer", std::vector<std::string>{ "CA"});
const Usage* const USAGE_VEST = new Usage(9,"Vest", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ANIMATRONIC_DEVICE = new Usage(10,"Animatronic Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_STEREO_ENABLE = new Usage(32,"Stereo Enable", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_DISPLAY_ENABLE = new Usage(33,"Display Enable", std::vector<std::string>{ "OOC"});


const UsagePage* const USAGE_PAGE_VR_CONTROLS = new UsagePage(3, "VR Controls", std::map<uint16_t, const Usage* const>{
	{1, USAGE_BELT},
	{2, USAGE_BODY_SUIT},
	{3, USAGE_FLEXOR},
	{4, USAGE_GLOVE},
	{5, USAGE_HEAD_TRACKER},
	{6, USAGE_HEAD_MOUNTED_DISPLAY},
	{7, USAGE_HAND_TRACKER},
	{8, USAGE_OCULOMETER},
	{9, USAGE_VEST},
	{10, USAGE_ANIMATRONIC_DEVICE},
	{32, USAGE_STEREO_ENABLE},
	{33, USAGE_DISPLAY_ENABLE},
});
