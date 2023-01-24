#include "usages.h"

const Usage* const USAGE_BASEBALL_BAT = new Usage(1,"Baseball Bat", std::vector<std::string>{ "CA"});
const Usage* const USAGE_GOLF_CLUB = new Usage(2,"Golf Club", std::vector<std::string>{ "CA"});
const Usage* const USAGE_ROWING_MACHINE = new Usage(3,"Rowing Machine", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TREADMILL = new Usage(4,"Treadmill", std::vector<std::string>{ "CA"});
const Usage* const USAGE_OAR = new Usage(48,"Oar", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SLOPE = new Usage(49,"Slope", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RATE = new Usage(50,"Rate", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STICK_SPEED = new Usage(51,"Stick Speed", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STICK_FACE_ANGLE = new Usage(52,"Stick Face Angle", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STICK_HEEL_TOE = new Usage(53,"Stick Heel/Toe", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STICK_FOLLOW_THROUGH = new Usage(54,"Stick Follow Through", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STICK_TEMPO = new Usage(55,"Stick Tempo", std::vector<std::string>{ "DV"});
const Usage* const USAGE_STICK_TYPE = new Usage(56,"Stick Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_STICK_HEIGHT = new Usage(57,"Stick Height", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PUTTER = new Usage(80,"Putter", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(81,"1 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(82,"2 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(83,"3 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(84,"4 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(85,"5 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(86,"6 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(87,"7 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(88,"8 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(89,"9 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(90,"10 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__IRON = new Usage(91,"11 Iron", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SAND_WEDGE = new Usage(92,"Sand Wedge", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_LOFT_WEDGE = new Usage(93,"Loft Wedge", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_POWER_WEDGE = new Usage(94,"Power Wedge", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__WOOD = new Usage(95,"1 Wood", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__WOOD = new Usage(96,"3 Wood", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__WOOD = new Usage(97,"5 Wood", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__WOOD = new Usage(98,"7 Wood", std::vector<std::string>{ "SEL"});
const Usage* const USAGE__WOOD = new Usage(99,"9 Wood", std::vector<std::string>{ "SEL"});


const UsagePage* const USAGE_PAGE_SPORT_CONTROLS = new UsagePage(4, "Sport Controls", std::map<uint16_t, const Usage* const>{
	{1, USAGE_BASEBALL_BAT},
	{2, USAGE_GOLF_CLUB},
	{3, USAGE_ROWING_MACHINE},
	{4, USAGE_TREADMILL},
	{48, USAGE_OAR},
	{49, USAGE_SLOPE},
	{50, USAGE_RATE},
	{51, USAGE_STICK_SPEED},
	{52, USAGE_STICK_FACE_ANGLE},
	{53, USAGE_STICK_HEEL_TOE},
	{54, USAGE_STICK_FOLLOW_THROUGH},
	{55, USAGE_STICK_TEMPO},
	{56, USAGE_STICK_TYPE},
	{57, USAGE_STICK_HEIGHT},
	{80, USAGE_PUTTER},
	{81, USAGE__IRON},
	{82, USAGE__IRON},
	{83, USAGE__IRON},
	{84, USAGE__IRON},
	{85, USAGE__IRON},
	{86, USAGE__IRON},
	{87, USAGE__IRON},
	{88, USAGE__IRON},
	{89, USAGE__IRON},
	{90, USAGE__IRON},
	{91, USAGE__IRON},
	{92, USAGE_SAND_WEDGE},
	{93, USAGE_LOFT_WEDGE},
	{94, USAGE_POWER_WEDGE},
	{95, USAGE__WOOD},
	{96, USAGE__WOOD},
	{97, USAGE__WOOD},
	{98, USAGE__WOOD},
	{99, USAGE__WOOD},
});
