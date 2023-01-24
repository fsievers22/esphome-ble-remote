#include "usages.h"

const Usage* const USAGE_DEGAUSS = new Usage(1,"Degauss", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BRIGHTNESS = new Usage(16,"Brightness", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CONTRAST = new Usage(18,"Contrast", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RED_VIDEO_GAIN = new Usage(22,"Red Video Gain", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GREEN_VIDEO_GAIN = new Usage(24,"Green Video Gain", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BLUE_VIDEO_GAIN = new Usage(26,"Blue Video Gain", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FOCUS = new Usage(28,"Focus", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_POSITION = new Usage(32,"Horizontal Position", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_SIZE = new Usage(34,"Horizontal Size", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_PINCUSHION = new Usage(36,"Horizontal Pincushion", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_PINCUSHION_BALANCE = new Usage(38,"Horizontal Pincushion Balance", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_MISCONVERGENCE = new Usage(40,"Horizontal Misconvergence", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_LINEARITY = new Usage(42,"Horizontal Linearity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_LINEARITY_BALANCE = new Usage(44,"Horizontal Linearity Balance", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_POSITION = new Usage(48,"Vertical Position", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_SIZE = new Usage(50,"Vertical Size", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_PINCUSHION = new Usage(52,"Vertical Pincushion", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_PINCUSHION_BALANCE = new Usage(54,"Vertical Pincushion Balance", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_MISCONVERGENCE = new Usage(56,"Vertical Misconvergence", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_LINEARITY = new Usage(58,"Vertical Linearity", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_LINEARITY_BALANCE = new Usage(60,"Vertical Linearity Balance", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PARALLELOGRAM_DISTORTION_KEY_BALANCE_ = new Usage(64,"Parallelogram Distortion (Key Balance)", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRAPEZOIDAL_DISTORTION_KEY_ = new Usage(66,"Trapezoidal Distortion (Key)", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TILT_ROTATION_ = new Usage(68,"Tilt (Rotation)", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TOP_CORNER_DISTORTION_CONTROL = new Usage(70,"Top Corner Distortion Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TOP_CORNER_DISTORTION_BALANCE = new Usage(72,"Top Corner Distortion Balance", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BOTTOM_CORNER_DISTORTION_CONTROL = new Usage(74,"Bottom Corner Distortion Control", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BOTTOM_CORNER_DISTORTION_BALANCE = new Usage(76,"Bottom Corner Distortion Balance", std::vector<std::string>{ "DV"});
const Usage* const USAGE_HORIZONTAL_MOIR_ = new Usage(86,"Horizontal Moiré", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_MOIR_ = new Usage(88,"Vertical Moiré", std::vector<std::string>{ "DV"});
const Usage* const USAGE_INPUT_LEVEL_SELECT = new Usage(94,"Input Level Select", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_INPUT_SOURCE_SELECT = new Usage(96,"Input Source Select", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_RED_VIDEO_BLACK_LEVEL = new Usage(108,"Red Video Black Level", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GREEN_VIDEO_BLACK_LEVEL = new Usage(110,"Green Video Black Level", std::vector<std::string>{ "DV"});
const Usage* const USAGE_BLUE_VIDEO_BLACK_LEVEL = new Usage(112,"Blue Video Black Level", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AUTO_SIZE_CENTER = new Usage(162,"Auto Size Center", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_POLARITY_HORIZONTAL_SYNCHRONIZATION = new Usage(164,"Polarity Horizontal Synchronization", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_POLARITY_VERTICAL_SYNCHRONIZATION = new Usage(166,"Polarity Vertical Synchronization", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SYNCHRONIZATION_TYPE = new Usage(168,"Synchronization Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SCREEN_ORIENTATION = new Usage(170,"Screen Orientation", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_HORIZONTAL_FREQUENCY = new Usage(172,"Horizontal Frequency", std::vector<std::string>{ "DV"});
const Usage* const USAGE_VERTICAL_FREQUENCY = new Usage(174,"Vertical Frequency", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SETTINGS = new Usage(176,"Settings", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ON_SCREEN_DISPLAY = new Usage(202,"On Screen Display", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_STEREO_MODE = new Usage(212,"Stereo Mode", std::vector<std::string>{ "NARY"});


const UsagePage* const USAGE_PAGE_VESA_VIRTUAL_CONTROLS = new UsagePage(130, "VESA Virtual Controls", std::map<uint16_t, const Usage* const>{
	{1, USAGE_DEGAUSS},
	{16, USAGE_BRIGHTNESS},
	{18, USAGE_CONTRAST},
	{22, USAGE_RED_VIDEO_GAIN},
	{24, USAGE_GREEN_VIDEO_GAIN},
	{26, USAGE_BLUE_VIDEO_GAIN},
	{28, USAGE_FOCUS},
	{32, USAGE_HORIZONTAL_POSITION},
	{34, USAGE_HORIZONTAL_SIZE},
	{36, USAGE_HORIZONTAL_PINCUSHION},
	{38, USAGE_HORIZONTAL_PINCUSHION_BALANCE},
	{40, USAGE_HORIZONTAL_MISCONVERGENCE},
	{42, USAGE_HORIZONTAL_LINEARITY},
	{44, USAGE_HORIZONTAL_LINEARITY_BALANCE},
	{48, USAGE_VERTICAL_POSITION},
	{50, USAGE_VERTICAL_SIZE},
	{52, USAGE_VERTICAL_PINCUSHION},
	{54, USAGE_VERTICAL_PINCUSHION_BALANCE},
	{56, USAGE_VERTICAL_MISCONVERGENCE},
	{58, USAGE_VERTICAL_LINEARITY},
	{60, USAGE_VERTICAL_LINEARITY_BALANCE},
	{64, USAGE_PARALLELOGRAM_DISTORTION_KEY_BALANCE_},
	{66, USAGE_TRAPEZOIDAL_DISTORTION_KEY_},
	{68, USAGE_TILT_ROTATION_},
	{70, USAGE_TOP_CORNER_DISTORTION_CONTROL},
	{72, USAGE_TOP_CORNER_DISTORTION_BALANCE},
	{74, USAGE_BOTTOM_CORNER_DISTORTION_CONTROL},
	{76, USAGE_BOTTOM_CORNER_DISTORTION_BALANCE},
	{86, USAGE_HORIZONTAL_MOIR_},
	{88, USAGE_VERTICAL_MOIR_},
	{94, USAGE_INPUT_LEVEL_SELECT},
	{96, USAGE_INPUT_SOURCE_SELECT},
	{108, USAGE_RED_VIDEO_BLACK_LEVEL},
	{110, USAGE_GREEN_VIDEO_BLACK_LEVEL},
	{112, USAGE_BLUE_VIDEO_BLACK_LEVEL},
	{162, USAGE_AUTO_SIZE_CENTER},
	{164, USAGE_POLARITY_HORIZONTAL_SYNCHRONIZATION},
	{166, USAGE_POLARITY_VERTICAL_SYNCHRONIZATION},
	{168, USAGE_SYNCHRONIZATION_TYPE},
	{170, USAGE_SCREEN_ORIENTATION},
	{172, USAGE_HORIZONTAL_FREQUENCY},
	{174, USAGE_VERTICAL_FREQUENCY},
	{176, USAGE_SETTINGS},
	{202, USAGE_ON_SCREEN_DISPLAY},
	{212, USAGE_STEREO_MODE},
});
