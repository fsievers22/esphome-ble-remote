#include "usages.h"

const Usage* const USAGE_BACKGROUND_NONUSER_CONTROLS = new Usage(1,"Background/Nonuser Controls", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BATTERY_STRENGTH = new Usage(32,"Battery Strength", std::vector<std::string>{ "DV"});
const Usage* const USAGE_WIRELESS_CHANNEL = new Usage(33,"Wireless Channel", std::vector<std::string>{ "DV"});
const Usage* const USAGE_WIRELESS_ID = new Usage(34,"Wireless ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DISCOVER_WIRELESS_CONTROL = new Usage(35,"Discover Wireless Control", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SECURITY_CODE_CHARACTER_ENTERED = new Usage(36,"Security Code Character Entered", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SECURITY_CODE_CHARACTER_ERASED = new Usage(37,"Security Code Character Erased", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SECURITY_CODE_CLEARED = new Usage(38,"Security Code Cleared", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SEQUENCE_ID = new Usage(39,"Sequence ID", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SEQUENCE_ID_RESET = new Usage(40,"Sequence ID Reset", std::vector<std::string>{ "DF"});
const Usage* const USAGE_RF_SIGNAL_STRENGTH = new Usage(41,"RF Signal Strength", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SOFTWARE_VERSION = new Usage(42,"Software Version", std::vector<std::string>{ "CL"});
const Usage* const USAGE_PROTOCOL_VERSION = new Usage(43,"Protocol Version", std::vector<std::string>{ "CL"});
const Usage* const USAGE_HARDWARE_VERSION = new Usage(44,"Hardware Version", std::vector<std::string>{ "CL"});
const Usage* const USAGE_MAJOR = new Usage(45,"Major", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MINOR = new Usage(46,"Minor", std::vector<std::string>{ "SV"});
const Usage* const USAGE_REVISION = new Usage(47,"Revision", std::vector<std::string>{ "SV"});
const Usage* const USAGE_HANDEDNESS = new Usage(48,"Handedness", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_EITHER_HAND = new Usage(49,"Either Hand", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_LEFT_HAND = new Usage(50,"Left Hand", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_RIGHT_HAND = new Usage(51,"Right Hand", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BOTH_HANDS = new Usage(52,"Both Hands", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GRIP_POSE_OFFSET = new Usage(64,"Grip Pose Offset", std::vector<std::string>{ "CP"});
const Usage* const USAGE_POINTER_POSE_OFFSET = new Usage(65,"Pointer Pose Offset", std::vector<std::string>{ "CP"});


const UsagePage* const USAGE_PAGE_GENERIC_DEVICE_CONTROLS = new UsagePage(6, "Generic Device Controls", std::map<uint16_t, const Usage* const>{
	{1, USAGE_BACKGROUND_NONUSER_CONTROLS},
	{32, USAGE_BATTERY_STRENGTH},
	{33, USAGE_WIRELESS_CHANNEL},
	{34, USAGE_WIRELESS_ID},
	{35, USAGE_DISCOVER_WIRELESS_CONTROL},
	{36, USAGE_SECURITY_CODE_CHARACTER_ENTERED},
	{37, USAGE_SECURITY_CODE_CHARACTER_ERASED},
	{38, USAGE_SECURITY_CODE_CLEARED},
	{39, USAGE_SEQUENCE_ID},
	{40, USAGE_SEQUENCE_ID_RESET},
	{41, USAGE_RF_SIGNAL_STRENGTH},
	{42, USAGE_SOFTWARE_VERSION},
	{43, USAGE_PROTOCOL_VERSION},
	{44, USAGE_HARDWARE_VERSION},
	{45, USAGE_MAJOR},
	{46, USAGE_MINOR},
	{47, USAGE_REVISION},
	{48, USAGE_HANDEDNESS},
	{49, USAGE_EITHER_HAND},
	{50, USAGE_LEFT_HAND},
	{51, USAGE_RIGHT_HAND},
	{52, USAGE_BOTH_HANDS},
	{64, USAGE_GRIP_POSE_OFFSET},
	{65, USAGE_POINTER_POSE_OFFSET},
});
