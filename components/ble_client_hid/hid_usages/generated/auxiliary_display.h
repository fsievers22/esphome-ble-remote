#include "usages.h"

const Usage* const USAGE_ALPHANUMERIC_DISPLAY = new Usage(1,"Alphanumeric Display", std::vector<std::string>{ "CA"});
const Usage* const USAGE_AUXILIARY_DISPLAY = new Usage(2,"Auxiliary Display", std::vector<std::string>{ "CA"});
const Usage* const USAGE_DISPLAY_ATTRIBUTES_REPORT = new Usage(32,"Display Attributes Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_ASCII_CHARACTER_SET = new Usage(33,"ASCII Character Set", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DATA_READ_BACK = new Usage(34,"Data Read Back", std::vector<std::string>{ "SF"});
const Usage* const USAGE_FONT_READ_BACK = new Usage(35,"Font Read Back", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DISPLAY_CONTROL_REPORT = new Usage(36,"Display Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CLEAR_DISPLAY = new Usage(37,"Clear Display", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DISPLAY_ENABLE = new Usage(38,"Display Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SCREEN_SAVER_DELAY = new Usage(39,"Screen Saver Delay", std::vector<std::string>{ "SV","DV"});
const Usage* const USAGE_SCREEN_SAVER_ENABLE = new Usage(40,"Screen Saver Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_VERTICAL_SCROLL = new Usage(41,"Vertical Scroll", std::vector<std::string>{ "SF","DF"});
const Usage* const USAGE_HORIZONTAL_SCROLL = new Usage(42,"Horizontal Scroll", std::vector<std::string>{ "SF","DF"});
const Usage* const USAGE_CHARACTER_REPORT = new Usage(43,"Character Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DISPLAY_DATA = new Usage(44,"Display Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DISPLAY_STATUS = new Usage(45,"Display Status", std::vector<std::string>{ "CL"});
const Usage* const USAGE_STAT_NOT_READY = new Usage(46,"Stat Not Ready", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_STAT_READY = new Usage(47,"Stat Ready", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ERR_NOT_A_LOADABLE_CHARACTER = new Usage(48,"Err Not a loadable character", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ERR_FONT_DATA_CANNOT_BE_READ = new Usage(49,"Err Font data cannot be read", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CURSOR_POSITION_REPORT = new Usage(50,"Cursor Position Report", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ROW = new Usage(51,"Row", std::vector<std::string>{ "DV"});
const Usage* const USAGE_COLUMN = new Usage(52,"Column", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROWS = new Usage(53,"Rows", std::vector<std::string>{ "SV"});
const Usage* const USAGE_COLUMNS = new Usage(54,"Columns", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CURSOR_PIXEL_POSITIONING = new Usage(55,"Cursor Pixel Positioning", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CURSOR_MODE = new Usage(56,"Cursor Mode", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CURSOR_ENABLE = new Usage(57,"Cursor Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CURSOR_BLINK = new Usage(58,"Cursor Blink", std::vector<std::string>{ "DF"});
const Usage* const USAGE_FONT_REPORT = new Usage(59,"Font Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_FONT_DATA = new Usage(60,"Font Data", std::vector<std::string>{ "BUFFEREDBYTES"});
const Usage* const USAGE_CHARACTER_WIDTH = new Usage(61,"Character Width", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CHARACTER_HEIGHT = new Usage(62,"Character Height", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CHARACTER_SPACING_HORIZONTAL = new Usage(63,"Character Spacing Horizontal", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CHARACTER_SPACING_VERTICAL = new Usage(64,"Character Spacing Vertical", std::vector<std::string>{ "SV"});
const Usage* const USAGE_UNICODE_CHARACTER_SET = new Usage(65,"Unicode Character Set", std::vector<std::string>{ "SF"});
const Usage* const USAGE_FONT_SEGMENT = new Usage(66,"Font 7-Segment", std::vector<std::string>{ "SF"});
const Usage* const USAGE__SEGMENT_DIRECT_MAP = new Usage(67,"7-Segment Direct Map", std::vector<std::string>{ "SF"});
const Usage* const USAGE_FONT_SEGMENT = new Usage(68,"Font 14-Segment", std::vector<std::string>{ "SF"});
const Usage* const USAGE__SEGMENT_DIRECT_MAP = new Usage(69,"14-Segment Direct Map", std::vector<std::string>{ "SF"});
const Usage* const USAGE_DISPLAY_BRIGHTNESS = new Usage(70,"Display Brightness", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DISPLAY_CONTRAST = new Usage(71,"Display Contrast", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CHARACTER_ATTRIBUTE = new Usage(72,"Character Attribute", std::vector<std::string>{ "CL"});
const Usage* const USAGE_ATTRIBUTE_READBACK = new Usage(73,"Attribute Readback", std::vector<std::string>{ "SF"});
const Usage* const USAGE_ATTRIBUTE_DATA = new Usage(74,"Attribute Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CHAR_ATTR_ENHANCE = new Usage(75,"Char Attr Enhance", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CHAR_ATTR_UNDERLINE = new Usage(76,"Char Attr Underline", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_CHAR_ATTR_BLINK = new Usage(77,"Char Attr Blink", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_BITMAP_SIZE_X = new Usage(128,"Bitmap Size X", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BITMAP_SIZE_Y = new Usage(129,"Bitmap Size Y", std::vector<std::string>{ "SV"});
const Usage* const USAGE_MAX_BLIT_SIZE = new Usage(130,"Max Blit Size", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BIT_DEPTH_FORMAT = new Usage(131,"Bit Depth Format", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DISPLAY_ORIENTATION = new Usage(132,"Display Orientation", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PALETTE_REPORT = new Usage(133,"Palette Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_PALETTE_DATA_SIZE = new Usage(134,"Palette Data Size", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PALETTE_DATA_OFFSET = new Usage(135,"Palette Data Offset", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PALETTE_DATA = new Usage(136,"Palette Data", std::vector<std::string>{ "BUFFEREDBYTES"});
const Usage* const USAGE_BLIT_REPORT = new Usage(138,"Blit Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_BLIT_RECTANGLE_X_ = new Usage(139,"Blit Rectangle X1", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BLIT_RECTANGLE_Y_ = new Usage(140,"Blit Rectangle Y1", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BLIT_RECTANGLE_X_ = new Usage(141,"Blit Rectangle X2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BLIT_RECTANGLE_Y_ = new Usage(142,"Blit Rectangle Y2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_BLIT_DATA = new Usage(143,"Blit Data", std::vector<std::string>{ "BUFFEREDBYTES"});
const Usage* const USAGE_SOFT_BUTTON = new Usage(144,"Soft Button", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SOFT_BUTTON_ID = new Usage(145,"Soft Button ID", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SOFT_BUTTON_SIDE = new Usage(146,"Soft Button Side", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SOFT_BUTTON_OFFSET_ = new Usage(147,"Soft Button Offset 1", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SOFT_BUTTON_OFFSET_ = new Usage(148,"Soft Button Offset 2", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SOFT_BUTTON_REPORT = new Usage(149,"Soft Button Report", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SOFT_KEYS = new Usage(194,"Soft Keys", std::vector<std::string>{ "SV"});
const Usage* const USAGE_DISPLAY_DATA_EXTENSIONS = new Usage(204,"Display Data Extensions", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CHARACTER_MAPPING = new Usage(207,"Character Mapping", std::vector<std::string>{ "SV"});
const Usage* const USAGE_UNICODE_EQUIVALENT = new Usage(221,"Unicode Equivalent", std::vector<std::string>{ "SV"});
const Usage* const USAGE_CHARACTER_PAGE_MAPPING = new Usage(223,"Character Page Mapping", std::vector<std::string>{ "SV"});
const Usage* const USAGE_REQUEST_REPORT = new Usage(255,"Request Report", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_AUXILIARY_DISPLAY = new UsagePage(20, "Auxiliary Display", std::map<uint16_t, const Usage* const>{
	{1, USAGE_ALPHANUMERIC_DISPLAY},
	{2, USAGE_AUXILIARY_DISPLAY},
	{32, USAGE_DISPLAY_ATTRIBUTES_REPORT},
	{33, USAGE_ASCII_CHARACTER_SET},
	{34, USAGE_DATA_READ_BACK},
	{35, USAGE_FONT_READ_BACK},
	{36, USAGE_DISPLAY_CONTROL_REPORT},
	{37, USAGE_CLEAR_DISPLAY},
	{38, USAGE_DISPLAY_ENABLE},
	{39, USAGE_SCREEN_SAVER_DELAY},
	{40, USAGE_SCREEN_SAVER_ENABLE},
	{41, USAGE_VERTICAL_SCROLL},
	{42, USAGE_HORIZONTAL_SCROLL},
	{43, USAGE_CHARACTER_REPORT},
	{44, USAGE_DISPLAY_DATA},
	{45, USAGE_DISPLAY_STATUS},
	{46, USAGE_STAT_NOT_READY},
	{47, USAGE_STAT_READY},
	{48, USAGE_ERR_NOT_A_LOADABLE_CHARACTER},
	{49, USAGE_ERR_FONT_DATA_CANNOT_BE_READ},
	{50, USAGE_CURSOR_POSITION_REPORT},
	{51, USAGE_ROW},
	{52, USAGE_COLUMN},
	{53, USAGE_ROWS},
	{54, USAGE_COLUMNS},
	{55, USAGE_CURSOR_PIXEL_POSITIONING},
	{56, USAGE_CURSOR_MODE},
	{57, USAGE_CURSOR_ENABLE},
	{58, USAGE_CURSOR_BLINK},
	{59, USAGE_FONT_REPORT},
	{60, USAGE_FONT_DATA},
	{61, USAGE_CHARACTER_WIDTH},
	{62, USAGE_CHARACTER_HEIGHT},
	{63, USAGE_CHARACTER_SPACING_HORIZONTAL},
	{64, USAGE_CHARACTER_SPACING_VERTICAL},
	{65, USAGE_UNICODE_CHARACTER_SET},
	{66, USAGE_FONT_SEGMENT},
	{67, USAGE__SEGMENT_DIRECT_MAP},
	{68, USAGE_FONT_SEGMENT},
	{69, USAGE__SEGMENT_DIRECT_MAP},
	{70, USAGE_DISPLAY_BRIGHTNESS},
	{71, USAGE_DISPLAY_CONTRAST},
	{72, USAGE_CHARACTER_ATTRIBUTE},
	{73, USAGE_ATTRIBUTE_READBACK},
	{74, USAGE_ATTRIBUTE_DATA},
	{75, USAGE_CHAR_ATTR_ENHANCE},
	{76, USAGE_CHAR_ATTR_UNDERLINE},
	{77, USAGE_CHAR_ATTR_BLINK},
	{128, USAGE_BITMAP_SIZE_X},
	{129, USAGE_BITMAP_SIZE_Y},
	{130, USAGE_MAX_BLIT_SIZE},
	{131, USAGE_BIT_DEPTH_FORMAT},
	{132, USAGE_DISPLAY_ORIENTATION},
	{133, USAGE_PALETTE_REPORT},
	{134, USAGE_PALETTE_DATA_SIZE},
	{135, USAGE_PALETTE_DATA_OFFSET},
	{136, USAGE_PALETTE_DATA},
	{138, USAGE_BLIT_REPORT},
	{139, USAGE_BLIT_RECTANGLE_X_},
	{140, USAGE_BLIT_RECTANGLE_Y_},
	{141, USAGE_BLIT_RECTANGLE_X_},
	{142, USAGE_BLIT_RECTANGLE_Y_},
	{143, USAGE_BLIT_DATA},
	{144, USAGE_SOFT_BUTTON},
	{145, USAGE_SOFT_BUTTON_ID},
	{146, USAGE_SOFT_BUTTON_SIDE},
	{147, USAGE_SOFT_BUTTON_OFFSET_},
	{148, USAGE_SOFT_BUTTON_OFFSET_},
	{149, USAGE_SOFT_BUTTON_REPORT},
	{194, USAGE_SOFT_KEYS},
	{204, USAGE_DISPLAY_DATA_EXTENSIONS},
	{207, USAGE_CHARACTER_MAPPING},
	{221, USAGE_UNICODE_EQUIVALENT},
	{223, USAGE_CHARACTER_PAGE_MAPPING},
	{255, USAGE_REQUEST_REPORT},
});
