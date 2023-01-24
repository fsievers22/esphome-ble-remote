#include "usages.h"

const Usage* const USAGE_PHYSICAL_INPUT_DEVICE = new Usage(1,"Physical Input Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_NORMAL = new Usage(32,"Normal", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SET_EFFECT_REPORT = new Usage(33,"Set Effect Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_EFFECT_PARAMETER_BLOCK_INDEX = new Usage(34,"Effect Parameter Block Index", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PARAMETER_BLOCK_OFFSET = new Usage(35,"Parameter Block Offset", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROM_FLAG = new Usage(36,"ROM Flag", std::vector<std::string>{ "DF"});
const Usage* const USAGE_EFFECT_TYPE = new Usage(37,"Effect Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_ET_CONSTANT_FORCE = new Usage(38,"ET Constant-Force", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_RAMP = new Usage(39,"ET Ramp", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_CUSTOM_FORCE = new Usage(40,"ET Custom-Force", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_SQUARE = new Usage(48,"ET Square", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_SINE = new Usage(49,"ET Sine", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_TRIANGLE = new Usage(50,"ET Triangle", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_SAWTOOTH_UP = new Usage(51,"ET Sawtooth Up", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_SAWTOOTH_DOWN = new Usage(52,"ET Sawtooth Down", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_SPRING = new Usage(64,"ET Spring", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_DAMPER = new Usage(65,"ET Damper", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_INERTIA = new Usage(66,"ET Inertia", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ET_FRICTION = new Usage(67,"ET Friction", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DURATION = new Usage(80,"Duration", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SAMPLE_PERIOD = new Usage(81,"Sample Period", std::vector<std::string>{ "DV"});
const Usage* const USAGE_GAIN = new Usage(82,"Gain", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRIGGER_BUTTON = new Usage(83,"Trigger Button", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRIGGER_REPEAT_INTERVAL = new Usage(84,"Trigger Repeat Interval", std::vector<std::string>{ "DV"});
const Usage* const USAGE_AXES_ENABLE = new Usage(85,"Axes Enable", std::vector<std::string>{ "US"});
const Usage* const USAGE_DIRECTION_ENABLE = new Usage(86,"Direction Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_DIRECTION = new Usage(87,"Direction", std::vector<std::string>{ "CL"});
const Usage* const USAGE_TYPE_SPECIFIC_BLOCK_OFFSET = new Usage(88,"Type Specific Block Offset", std::vector<std::string>{ "CL"});
const Usage* const USAGE_BLOCK_TYPE = new Usage(89,"Block Type", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SET_ENVELOPE_REPORT = new Usage(90,"Set Envelope Report", std::vector<std::string>{ "CL","SV"});
const Usage* const USAGE_ATTACK_LEVEL = new Usage(91,"Attack Level", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ATTACK_TIME = new Usage(92,"Attack Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FADE_LEVEL = new Usage(93,"Fade Level", std::vector<std::string>{ "DV"});
const Usage* const USAGE_FADE_TIME = new Usage(94,"Fade Time", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SET_CONDITION_REPORT = new Usage(95,"Set Condition Report", std::vector<std::string>{ "CL","SV"});
const Usage* const USAGE_CENTER_POINT_OFFSET = new Usage(96,"Center-Point Offset", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITIVE_COEFFICIENT = new Usage(97,"Positive Coefficient", std::vector<std::string>{ "DV"});
const Usage* const USAGE_NEGATIVE_COEFFICIENT = new Usage(98,"Negative Coefficient", std::vector<std::string>{ "DV"});
const Usage* const USAGE_POSITIVE_SATURATION = new Usage(99,"Positive Saturation", std::vector<std::string>{ "DV"});
const Usage* const USAGE_NEGATIVE_SATURATION = new Usage(100,"Negative Saturation", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DEAD_BAND = new Usage(101,"Dead Band", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DOWNLOAD_FORCE_SAMPLE = new Usage(102,"Download Force Sample", std::vector<std::string>{ "CL"});
const Usage* const USAGE_ISOCH_CUSTOM_FORCE_ENABLE = new Usage(103,"Isoch Custom-Force Enable", std::vector<std::string>{ "DF"});
const Usage* const USAGE_CUSTOM_FORCE_DATA_REPORT = new Usage(104,"Custom-Force Data Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_CUSTOM_FORCE_DATA = new Usage(105,"Custom-Force Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_CUSTOM_FORCE_VENDOR_DEFINED_DATA = new Usage(106,"Custom-Force Vendor Defined Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SET_CUSTOM_FORCE_REPORT = new Usage(107,"Set Custom-Force Report", std::vector<std::string>{ "CL","SV"});
const Usage* const USAGE_CUSTOM_FORCE_DATA_OFFSET = new Usage(108,"Custom-Force Data Offset", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SAMPLE_COUNT = new Usage(109,"Sample Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SET_PERIODIC_REPORT = new Usage(110,"Set Periodic Report", std::vector<std::string>{ "CL","SV"});
const Usage* const USAGE_OFFSET = new Usage(111,"Offset", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MAGNITUDE = new Usage(112,"Magnitude", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PHASE = new Usage(113,"Phase", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PERIOD = new Usage(114,"Period", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SET_CONSTANT_FORCE_REPORT = new Usage(115,"Set Constant-Force Report", std::vector<std::string>{ "CL","SV"});
const Usage* const USAGE_SET_RAMP_FORCE_REPORT = new Usage(116,"Set Ramp-Force Report", std::vector<std::string>{ "CL","SV"});
const Usage* const USAGE_RAMP_START = new Usage(117,"Ramp Start", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RAMP_END = new Usage(118,"Ramp End", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EFFECT_OPERATION_REPORT = new Usage(119,"Effect Operation Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_EFFECT_OPERATION = new Usage(120,"Effect Operation", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_OP_EFFECT_START = new Usage(121,"Op Effect Start", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_OP_EFFECT_START_SOLO = new Usage(122,"Op Effect Start Solo", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_OP_EFFECT_STOP = new Usage(123,"Op Effect Stop", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_LOOP_COUNT = new Usage(124,"Loop Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DEVICE_GAIN_REPORT = new Usage(125,"Device Gain Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DEVICE_GAIN = new Usage(126,"Device Gain", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PARAMETER_BLOCK_POOLS_REPORT = new Usage(127,"Parameter Block Pools Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_RAM_POOL_SIZE = new Usage(128,"RAM Pool Size", std::vector<std::string>{ "DV"});
const Usage* const USAGE_ROM_POOL_SIZE = new Usage(129,"ROM Pool Size", std::vector<std::string>{ "SV"});
const Usage* const USAGE_ROM_EFFECT_BLOCK_COUNT = new Usage(130,"ROM Effect Block Count", std::vector<std::string>{ "SV"});
const Usage* const USAGE_SIMULTANEOUS_EFFECTS_MAX = new Usage(131,"Simultaneous Effects Max", std::vector<std::string>{ "SV"});
const Usage* const USAGE_POOL_ALIGNMENT = new Usage(132,"Pool Alignment", std::vector<std::string>{ "SV"});
const Usage* const USAGE_PARAMETER_BLOCK_MOVE_REPORT = new Usage(133,"Parameter Block Move Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_MOVE_SOURCE = new Usage(134,"Move Source", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOVE_DESTINATION = new Usage(135,"Move Destination", std::vector<std::string>{ "DV"});
const Usage* const USAGE_MOVE_LENGTH = new Usage(136,"Move Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EFFECT_PARAMETER_BLOCK_LOAD_REPORT = new Usage(137,"Effect Parameter Block Load Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_EFFECT_PARAMETER_BLOCK_LOAD_STATUS = new Usage(139,"Effect Parameter Block Load Status", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_BLOCK_LOAD_SUCCESS = new Usage(140,"Block Load Success", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BLOCK_LOAD_FULL = new Usage(141,"Block Load Full", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BLOCK_LOAD_ERROR = new Usage(142,"Block Load Error", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_BLOCK_HANDLE = new Usage(143,"Block Handle", std::vector<std::string>{ "DV"});
const Usage* const USAGE_EFFECT_PARAMETER_BLOCK_FREE_REPORT = new Usage(144,"Effect Parameter Block Free Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_TYPE_SPECIFIC_BLOCK_HANDLE = new Usage(145,"Type Specific Block Handle", std::vector<std::string>{ "CL"});
const Usage* const USAGE_PID_STATE_REPORT = new Usage(146,"PID State Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_EFFECT_PLAYING = new Usage(148,"Effect Playing", std::vector<std::string>{ "DF"});
const Usage* const USAGE_PID_DEVICE_CONTROL_REPORT = new Usage(149,"PID Device Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_PID_DEVICE_CONTROL = new Usage(150,"PID Device Control", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_DC_ENABLE_ACTUATORS = new Usage(151,"DC Enable Actuators", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DC_DISABLE_ACTUATORS = new Usage(152,"DC Disable Actuators", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DC_STOP_ALL_EFFECTS = new Usage(153,"DC Stop All Effects", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DC_RESET = new Usage(154,"DC Reset", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DC_PAUSE = new Usage(155,"DC Pause", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DC_CONTINUE = new Usage(156,"DC Continue", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_DEVICE_PAUSED = new Usage(159,"Device Paused", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ACTUATORS_ENABLED = new Usage(160,"Actuators Enabled", std::vector<std::string>{ "DF"});
const Usage* const USAGE_SAFETY_SWITCH = new Usage(164,"Safety Switch", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ACTUATOR_OVERRIDE_SWITCH = new Usage(165,"Actuator Override Switch", std::vector<std::string>{ "DF"});
const Usage* const USAGE_ACTUATOR_POWER = new Usage(166,"Actuator Power", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_START_DELAY = new Usage(167,"Start Delay", std::vector<std::string>{ "DV"});
const Usage* const USAGE_PARAMETER_BLOCK_SIZE = new Usage(168,"Parameter Block Size", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DEVICE_MANAGED_POOL = new Usage(169,"Device-Managed Pool", std::vector<std::string>{ "SF"});
const Usage* const USAGE_SHARED_PARAMETER_BLOCKS = new Usage(170,"Shared Parameter Blocks", std::vector<std::string>{ "SF"});
const Usage* const USAGE_CREATE_NEW_EFFECT_PARAMETER_BLOCK_REPORT = new Usage(171,"Create New Effect Parameter Block Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_RAM_POOL_AVAILABLE = new Usage(172,"RAM Pool Available", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_PHYSICAL_INPUT_DEVICE = new UsagePage(15, "Physical Input Device", std::map<uint16_t, const Usage* const>{
	{1, USAGE_PHYSICAL_INPUT_DEVICE},
	{32, USAGE_NORMAL},
	{33, USAGE_SET_EFFECT_REPORT},
	{34, USAGE_EFFECT_PARAMETER_BLOCK_INDEX},
	{35, USAGE_PARAMETER_BLOCK_OFFSET},
	{36, USAGE_ROM_FLAG},
	{37, USAGE_EFFECT_TYPE},
	{38, USAGE_ET_CONSTANT_FORCE},
	{39, USAGE_ET_RAMP},
	{40, USAGE_ET_CUSTOM_FORCE},
	{48, USAGE_ET_SQUARE},
	{49, USAGE_ET_SINE},
	{50, USAGE_ET_TRIANGLE},
	{51, USAGE_ET_SAWTOOTH_UP},
	{52, USAGE_ET_SAWTOOTH_DOWN},
	{64, USAGE_ET_SPRING},
	{65, USAGE_ET_DAMPER},
	{66, USAGE_ET_INERTIA},
	{67, USAGE_ET_FRICTION},
	{80, USAGE_DURATION},
	{81, USAGE_SAMPLE_PERIOD},
	{82, USAGE_GAIN},
	{83, USAGE_TRIGGER_BUTTON},
	{84, USAGE_TRIGGER_REPEAT_INTERVAL},
	{85, USAGE_AXES_ENABLE},
	{86, USAGE_DIRECTION_ENABLE},
	{87, USAGE_DIRECTION},
	{88, USAGE_TYPE_SPECIFIC_BLOCK_OFFSET},
	{89, USAGE_BLOCK_TYPE},
	{90, USAGE_SET_ENVELOPE_REPORT},
	{91, USAGE_ATTACK_LEVEL},
	{92, USAGE_ATTACK_TIME},
	{93, USAGE_FADE_LEVEL},
	{94, USAGE_FADE_TIME},
	{95, USAGE_SET_CONDITION_REPORT},
	{96, USAGE_CENTER_POINT_OFFSET},
	{97, USAGE_POSITIVE_COEFFICIENT},
	{98, USAGE_NEGATIVE_COEFFICIENT},
	{99, USAGE_POSITIVE_SATURATION},
	{100, USAGE_NEGATIVE_SATURATION},
	{101, USAGE_DEAD_BAND},
	{102, USAGE_DOWNLOAD_FORCE_SAMPLE},
	{103, USAGE_ISOCH_CUSTOM_FORCE_ENABLE},
	{104, USAGE_CUSTOM_FORCE_DATA_REPORT},
	{105, USAGE_CUSTOM_FORCE_DATA},
	{106, USAGE_CUSTOM_FORCE_VENDOR_DEFINED_DATA},
	{107, USAGE_SET_CUSTOM_FORCE_REPORT},
	{108, USAGE_CUSTOM_FORCE_DATA_OFFSET},
	{109, USAGE_SAMPLE_COUNT},
	{110, USAGE_SET_PERIODIC_REPORT},
	{111, USAGE_OFFSET},
	{112, USAGE_MAGNITUDE},
	{113, USAGE_PHASE},
	{114, USAGE_PERIOD},
	{115, USAGE_SET_CONSTANT_FORCE_REPORT},
	{116, USAGE_SET_RAMP_FORCE_REPORT},
	{117, USAGE_RAMP_START},
	{118, USAGE_RAMP_END},
	{119, USAGE_EFFECT_OPERATION_REPORT},
	{120, USAGE_EFFECT_OPERATION},
	{121, USAGE_OP_EFFECT_START},
	{122, USAGE_OP_EFFECT_START_SOLO},
	{123, USAGE_OP_EFFECT_STOP},
	{124, USAGE_LOOP_COUNT},
	{125, USAGE_DEVICE_GAIN_REPORT},
	{126, USAGE_DEVICE_GAIN},
	{127, USAGE_PARAMETER_BLOCK_POOLS_REPORT},
	{128, USAGE_RAM_POOL_SIZE},
	{129, USAGE_ROM_POOL_SIZE},
	{130, USAGE_ROM_EFFECT_BLOCK_COUNT},
	{131, USAGE_SIMULTANEOUS_EFFECTS_MAX},
	{132, USAGE_POOL_ALIGNMENT},
	{133, USAGE_PARAMETER_BLOCK_MOVE_REPORT},
	{134, USAGE_MOVE_SOURCE},
	{135, USAGE_MOVE_DESTINATION},
	{136, USAGE_MOVE_LENGTH},
	{137, USAGE_EFFECT_PARAMETER_BLOCK_LOAD_REPORT},
	{139, USAGE_EFFECT_PARAMETER_BLOCK_LOAD_STATUS},
	{140, USAGE_BLOCK_LOAD_SUCCESS},
	{141, USAGE_BLOCK_LOAD_FULL},
	{142, USAGE_BLOCK_LOAD_ERROR},
	{143, USAGE_BLOCK_HANDLE},
	{144, USAGE_EFFECT_PARAMETER_BLOCK_FREE_REPORT},
	{145, USAGE_TYPE_SPECIFIC_BLOCK_HANDLE},
	{146, USAGE_PID_STATE_REPORT},
	{148, USAGE_EFFECT_PLAYING},
	{149, USAGE_PID_DEVICE_CONTROL_REPORT},
	{150, USAGE_PID_DEVICE_CONTROL},
	{151, USAGE_DC_ENABLE_ACTUATORS},
	{152, USAGE_DC_DISABLE_ACTUATORS},
	{153, USAGE_DC_STOP_ALL_EFFECTS},
	{154, USAGE_DC_RESET},
	{155, USAGE_DC_PAUSE},
	{156, USAGE_DC_CONTINUE},
	{159, USAGE_DEVICE_PAUSED},
	{160, USAGE_ACTUATORS_ENABLED},
	{164, USAGE_SAFETY_SWITCH},
	{165, USAGE_ACTUATOR_OVERRIDE_SWITCH},
	{166, USAGE_ACTUATOR_POWER},
	{167, USAGE_START_DELAY},
	{168, USAGE_PARAMETER_BLOCK_SIZE},
	{169, USAGE_DEVICE_MANAGED_POOL},
	{170, USAGE_SHARED_PARAMETER_BLOCKS},
	{171, USAGE_CREATE_NEW_EFFECT_PARAMETER_BLOCK_REPORT},
	{172, USAGE_RAM_POOL_AVAILABLE},
});
