#include "usages.h"

const Usage* const USAGE__D_GAME_CONTROLLER = new Usage(1,"3D Game Controller", std::vector<std::string>{ "CA"});
const Usage* const USAGE_PINBALL_DEVICE = new Usage(2,"Pinball Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_GUN_DEVICE = new Usage(3,"Gun Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_POINT_OF_VIEW = new Usage(32,"Point of View", std::vector<std::string>{ "CP"});
const Usage* const USAGE_TURN_RIGHT_LEFT = new Usage(33,"Turn Right/Left", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PITCH_FORWARD_BACKWARD = new Usage(34,"Pitch Forward/Backward", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROLL_RIGHT_LEFT = new Usage(35,"Roll Right/Left", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOVE_RIGHT_LEFT = new Usage(36,"Move Right/Left", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOVE_FORWARD_BACKWARD = new Usage(37,"Move Forward/Backward", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOVE_UP_DOWN = new Usage(38,"Move Up/Down", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LEAN_RIGHT_LEFT = new Usage(39,"Lean Right/Left", std::vector<std::string>{ "DV"});
const Usage* const USAGE_LEAN_FORWARD_BACKWARD = new Usage(40,"Lean Forward/Backward", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HEIGHT_OF_POV = new Usage(41,"Height of POV", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FLIPPER = new Usage(42,"Flipper", std::vector<std::string>{ "MC"});
const Usage* const USAGE_SECONDARY_FLIPPER = new Usage(43,"Secondary Flipper", std::vector<std::string>{ "MC"});
const Usage* const USAGE_BUMP = new Usage(44,"Bump", std::vector<std::string>{ "MC"});
const Usage* const USAGE_NEW_GAME = new Usage(45,"New Game", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_SHOOT_BALL = new Usage(46,"Shoot Ball", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_PLAYER = new Usage(47,"Player", std::vector<std::string>{ "OSC"});
const Usage* const USAGE_GUN_BOLT = new Usage(48,"Gun Bolt", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_GUN_CLIP = new Usage(49,"Gun Clip", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_GUN_SELECTOR = new Usage(50,"Gun Selector", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_GUN_SINGLE_SHOT = new Usage(51,"Gun Single Shot", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GUN_BURST = new Usage(52,"Gun Burst", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GUN_AUTOMATIC = new Usage(53,"Gun Automatic", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_GUN_SAFETY = new Usage(54,"Gun Safety", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_GAMEPAD_FIRE_JUMP = new Usage(55,"Gamepad Fire/Jump", std::vector<std::string>{ "CL"});
const Usage* const USAGE_GAMEPAD_TRIGGER = new Usage(57,"Gamepad Trigger", std::vector<std::string>{ "CL"});
const Usage* const USAGE_FORM_FITTING_GAMEPAD = new Usage(58,"Form-fitting Gamepad", std::vector<std::string>{ "SF"});


const UsagePage* const USAGE_PAGE_GAME_CONTROLS = new UsagePage(5, "Game Controls", std::map<uint16_t, const Usage* const>{
	{1, USAGE__D_GAME_CONTROLLER},
	{2, USAGE_PINBALL_DEVICE},
	{3, USAGE_GUN_DEVICE},
	{32, USAGE_POINT_OF_VIEW},
	{33, USAGE_TURN_RIGHT_LEFT},
	{34, USAGE_PITCH_FORWARD_BACKWARD},
	{35, USAGE_ROLL_RIGHT_LEFT},
	{36, USAGE_MOVE_RIGHT_LEFT},
	{37, USAGE_MOVE_FORWARD_BACKWARD},
	{38, USAGE_MOVE_UP_DOWN},
	{39, USAGE_LEAN_RIGHT_LEFT},
	{40, USAGE_LEAN_FORWARD_BACKWARD},
	{41, USAGE_HEIGHT_OF_POV},
	{42, USAGE_FLIPPER},
	{43, USAGE_SECONDARY_FLIPPER},
	{44, USAGE_BUMP},
	{45, USAGE_NEW_GAME},
	{46, USAGE_SHOOT_BALL},
	{47, USAGE_PLAYER},
	{48, USAGE_GUN_BOLT},
	{49, USAGE_GUN_CLIP},
	{50, USAGE_GUN_SELECTOR},
	{51, USAGE_GUN_SINGLE_SHOT},
	{52, USAGE_GUN_BURST},
	{53, USAGE_GUN_AUTOMATIC},
	{54, USAGE_GUN_SAFETY},
	{55, USAGE_GAMEPAD_FIRE_JUMP},
	{57, USAGE_GAMEPAD_TRIGGER},
	{58, USAGE_FORM_FITTING_GAMEPAD},
});
