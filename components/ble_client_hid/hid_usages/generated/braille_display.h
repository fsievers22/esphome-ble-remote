#include "usages.h"

const Usage* const USAGE_BRAILLE_DISPLAY = new Usage(1,"Braille Display", std::vector<std::string>{ "CA"});
const Usage* const USAGE_BRAILLE_ROW = new Usage(2,"Braille Row", std::vector<std::string>{ "NARY"});
const Usage* const USAGE__DOT_BRAILLE_CELL = new Usage(3,"8 Dot Braille Cell", std::vector<std::string>{ "DV"});
const Usage* const USAGE__DOT_BRAILLE_CELL = new Usage(4,"6 Dot Braille Cell", std::vector<std::string>{ "DV"});
const Usage* const USAGE_NUMBER_OF_BRAILLE_CELLS = new Usage(5,"Number of Braille Cells", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SCREEN_READER_CONTROL = new Usage(6,"Screen Reader Control", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SCREEN_READER_IDENTIFIER = new Usage(7,"Screen Reader Identifier", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROUTER_SET_ = new Usage(250,"Router Set 1", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ROUTER_SET_ = new Usage(251,"Router Set 2", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ROUTER_SET_ = new Usage(252,"Router Set 3", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ROUTER_KEY = new Usage(256,"Router Key", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ROW_ROUTER_KEY = new Usage(257,"Row Router Key", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_BUTTONS = new Usage(512,"Braille Buttons", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(513,"Braille Keyboard Dot 1", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(514,"Braille Keyboard Dot 2", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(515,"Braille Keyboard Dot 3", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(516,"Braille Keyboard Dot 4", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(517,"Braille Keyboard Dot 5", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(518,"Braille Keyboard Dot 6", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(519,"Braille Keyboard Dot 7", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_DOT_ = new Usage(520,"Braille Keyboard Dot 8", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_SPACE = new Usage(521,"Braille Keyboard Space", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_LEFT_SPACE = new Usage(522,"Braille Keyboard Left Space", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_KEYBOARD_RIGHT_SPACE = new Usage(523,"Braille Keyboard Right Space", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_FACE_CONTROLS = new Usage(524,"Braille Face Controls", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_BRAILLE_LEFT_CONTROLS = new Usage(525,"Braille Left Controls", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_BRAILLE_RIGHT_CONTROLS = new Usage(526,"Braille Right Controls", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_BRAILLE_TOP_CONTROLS = new Usage(527,"Braille Top Controls", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_BRAILLE_JOYSTICK_CENTER = new Usage(528,"Braille Joystick Center", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_JOYSTICK_UP = new Usage(529,"Braille Joystick Up", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_JOYSTICK_DOWN = new Usage(530,"Braille Joystick Down", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_JOYSTICK_LEFT = new Usage(531,"Braille Joystick Left", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_JOYSTICK_RIGHT = new Usage(532,"Braille Joystick Right", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_D_PAD_CENTER = new Usage(533,"Braille D-Pad Center", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_D_PAD_UP = new Usage(534,"Braille D-Pad Up", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_D_PAD_DOWN = new Usage(535,"Braille D-Pad Down", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_D_PAD_LEFT = new Usage(536,"Braille D-Pad Left", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_D_PAD_RIGHT = new Usage(537,"Braille D-Pad Right", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_PAN_LEFT = new Usage(538,"Braille Pan Left", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_PAN_RIGHT = new Usage(539,"Braille Pan Right", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_ROCKER_UP = new Usage(540,"Braille Rocker Up", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_ROCKER_DOWN = new Usage(541,"Braille Rocker Down", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BRAILLE_ROCKER_PRESS = new Usage(542,"Braille Rocker Press", std::vector<std::string>{ "SEL"});


const UsagePage* const USAGE_PAGE_BRAILLE_DISPLAY = new UsagePage(65, "Braille Display", std::map<uint16_t, const Usage* const>{
	{1, USAGE_BRAILLE_DISPLAY},
	{2, USAGE_BRAILLE_ROW},
	{3, USAGE__DOT_BRAILLE_CELL},
	{4, USAGE__DOT_BRAILLE_CELL},
	{5, USAGE_NUMBER_OF_BRAILLE_CELLS},
	{6, USAGE_SCREEN_READER_CONTROL},
	{7, USAGE_SCREEN_READER_IDENTIFIER},
	{250, USAGE_ROUTER_SET_},
	{251, USAGE_ROUTER_SET_},
	{252, USAGE_ROUTER_SET_},
	{256, USAGE_ROUTER_KEY},
	{257, USAGE_ROW_ROUTER_KEY},
	{512, USAGE_BRAILLE_BUTTONS},
	{513, USAGE_BRAILLE_KEYBOARD_DOT_},
	{514, USAGE_BRAILLE_KEYBOARD_DOT_},
	{515, USAGE_BRAILLE_KEYBOARD_DOT_},
	{516, USAGE_BRAILLE_KEYBOARD_DOT_},
	{517, USAGE_BRAILLE_KEYBOARD_DOT_},
	{518, USAGE_BRAILLE_KEYBOARD_DOT_},
	{519, USAGE_BRAILLE_KEYBOARD_DOT_},
	{520, USAGE_BRAILLE_KEYBOARD_DOT_},
	{521, USAGE_BRAILLE_KEYBOARD_SPACE},
	{522, USAGE_BRAILLE_KEYBOARD_LEFT_SPACE},
	{523, USAGE_BRAILLE_KEYBOARD_RIGHT_SPACE},
	{524, USAGE_BRAILLE_FACE_CONTROLS},
	{525, USAGE_BRAILLE_LEFT_CONTROLS},
	{526, USAGE_BRAILLE_RIGHT_CONTROLS},
	{527, USAGE_BRAILLE_TOP_CONTROLS},
	{528, USAGE_BRAILLE_JOYSTICK_CENTER},
	{529, USAGE_BRAILLE_JOYSTICK_UP},
	{530, USAGE_BRAILLE_JOYSTICK_DOWN},
	{531, USAGE_BRAILLE_JOYSTICK_LEFT},
	{532, USAGE_BRAILLE_JOYSTICK_RIGHT},
	{533, USAGE_BRAILLE_D_PAD_CENTER},
	{534, USAGE_BRAILLE_D_PAD_UP},
	{535, USAGE_BRAILLE_D_PAD_DOWN},
	{536, USAGE_BRAILLE_D_PAD_LEFT},
	{537, USAGE_BRAILLE_D_PAD_RIGHT},
	{538, USAGE_BRAILLE_PAN_LEFT},
	{539, USAGE_BRAILLE_PAN_RIGHT},
	{540, USAGE_BRAILLE_ROCKER_UP},
	{541, USAGE_BRAILLE_ROCKER_DOWN},
	{542, USAGE_BRAILLE_ROCKER_PRESS},
});
