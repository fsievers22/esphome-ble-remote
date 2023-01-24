#include "usages.h"

const Usage* const USAGE_SCALES = new Usage(1,"Scales", std::vector<std::string>{ "CA"});
const Usage* const USAGE_SCALE_DEVICE = new Usage(32,"Scale Device", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCALE_CLASS = new Usage(33,"Scale Class", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SCALE_CLASS_I_METRIC = new Usage(34,"Scale Class I Metric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_II_METRIC = new Usage(35,"Scale Class II Metric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_III_METRIC = new Usage(36,"Scale Class III Metric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_IIIL_METRIC = new Usage(37,"Scale Class IIIL Metric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_IV_METRIC = new Usage(38,"Scale Class IV Metric", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_III_ENGLISH = new Usage(39,"Scale Class III English", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_IIIL_ENGLISH = new Usage(40,"Scale Class IIIL English", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_IV_ENGLISH = new Usage(41,"Scale Class IV English", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_CLASS_GENERIC = new Usage(42,"Scale Class Generic", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_ATTRIBUTE_REPORT = new Usage(48,"Scale Attribute Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCALE_CONTROL_REPORT = new Usage(49,"Scale Control Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCALE_DATA_REPORT = new Usage(50,"Scale Data Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCALE_STATUS_REPORT = new Usage(51,"Scale Status Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCALE_WEIGHT_LIMIT_REPORT = new Usage(52,"Scale Weight Limit Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_SCALE_STATISTICS_REPORT = new Usage(53,"Scale Statistics Report", std::vector<std::string>{ "CL"});
const Usage* const USAGE_DATA_WEIGHT = new Usage(64,"Data Weight", std::vector<std::string>{ "DV"});
const Usage* const USAGE_DATA_SCALING = new Usage(65,"Data Scaling", std::vector<std::string>{ "DV"});
const Usage* const USAGE_WEIGHT_UNIT = new Usage(80,"Weight Unit", std::vector<std::string>{ "CL"});
const Usage* const USAGE_WEIGHT_UNIT_MILLIGRAM = new Usage(81,"Weight Unit Milligram", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_GRAM = new Usage(82,"Weight Unit Gram", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_KILOGRAM = new Usage(83,"Weight Unit Kilogram", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_CARATS = new Usage(84,"Weight Unit Carats", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_TAELS = new Usage(85,"Weight Unit Taels", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_GRAINS = new Usage(86,"Weight Unit Grains", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_PENNYWEIGHTS = new Usage(87,"Weight Unit Pennyweights", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_METRIC_TON = new Usage(88,"Weight Unit Metric Ton", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_AVOIR_TON = new Usage(89,"Weight Unit Avoir Ton", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_TROY_OUNCE = new Usage(90,"Weight Unit Troy Ounce", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_OUNCE = new Usage(91,"Weight Unit Ounce", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_WEIGHT_UNIT_POUND = new Usage(92,"Weight Unit Pound", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_CALIBRATION_COUNT = new Usage(96,"Calibration Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_RE_ZERO_COUNT = new Usage(97,"Re-Zero Count", std::vector<std::string>{ "DV"});
const Usage* const USAGE_SCALE_STATUS = new Usage(112,"Scale Status", std::vector<std::string>{ "NARY"});
const Usage* const USAGE_SCALE_STATUS_FAULT = new Usage(113,"Scale Status Fault", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_STABLE_AT_CENTER_OF_ZERO = new Usage(114,"Scale Status Stable at Center of Zero", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_IN_MOTION = new Usage(115,"Scale Status In Motion", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_WEIGHT_STABLE = new Usage(116,"Scale Status Weight Stable", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_UNDER_ZERO = new Usage(117,"Scale Status Under Zero", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_OVER_WEIGHT_LIMIT = new Usage(118,"Scale Status Over Weight Limit", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_REQUIRES_CALIBRATION = new Usage(119,"Scale Status Requires Calibration", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_SCALE_STATUS_REQUIRES_REZEROING = new Usage(120,"Scale Status Requires Rezeroing", std::vector<std::string>{ "SEL"});
const Usage* const USAGE_ZERO_SCALE = new Usage(128,"Zero Scale", std::vector<std::string>{ "OOC"});
const Usage* const USAGE_ENFORCED_ZERO_RETURN = new Usage(129,"Enforced Zero Return", std::vector<std::string>{ "OOC"});


const UsagePage* const USAGE_PAGE_SCALES = new UsagePage(141, "Scales", std::map<uint16_t, const Usage* const>{
	{1, USAGE_SCALES},
	{32, USAGE_SCALE_DEVICE},
	{33, USAGE_SCALE_CLASS},
	{34, USAGE_SCALE_CLASS_I_METRIC},
	{35, USAGE_SCALE_CLASS_II_METRIC},
	{36, USAGE_SCALE_CLASS_III_METRIC},
	{37, USAGE_SCALE_CLASS_IIIL_METRIC},
	{38, USAGE_SCALE_CLASS_IV_METRIC},
	{39, USAGE_SCALE_CLASS_III_ENGLISH},
	{40, USAGE_SCALE_CLASS_IIIL_ENGLISH},
	{41, USAGE_SCALE_CLASS_IV_ENGLISH},
	{42, USAGE_SCALE_CLASS_GENERIC},
	{48, USAGE_SCALE_ATTRIBUTE_REPORT},
	{49, USAGE_SCALE_CONTROL_REPORT},
	{50, USAGE_SCALE_DATA_REPORT},
	{51, USAGE_SCALE_STATUS_REPORT},
	{52, USAGE_SCALE_WEIGHT_LIMIT_REPORT},
	{53, USAGE_SCALE_STATISTICS_REPORT},
	{64, USAGE_DATA_WEIGHT},
	{65, USAGE_DATA_SCALING},
	{80, USAGE_WEIGHT_UNIT},
	{81, USAGE_WEIGHT_UNIT_MILLIGRAM},
	{82, USAGE_WEIGHT_UNIT_GRAM},
	{83, USAGE_WEIGHT_UNIT_KILOGRAM},
	{84, USAGE_WEIGHT_UNIT_CARATS},
	{85, USAGE_WEIGHT_UNIT_TAELS},
	{86, USAGE_WEIGHT_UNIT_GRAINS},
	{87, USAGE_WEIGHT_UNIT_PENNYWEIGHTS},
	{88, USAGE_WEIGHT_UNIT_METRIC_TON},
	{89, USAGE_WEIGHT_UNIT_AVOIR_TON},
	{90, USAGE_WEIGHT_UNIT_TROY_OUNCE},
	{91, USAGE_WEIGHT_UNIT_OUNCE},
	{92, USAGE_WEIGHT_UNIT_POUND},
	{96, USAGE_CALIBRATION_COUNT},
	{97, USAGE_RE_ZERO_COUNT},
	{112, USAGE_SCALE_STATUS},
	{113, USAGE_SCALE_STATUS_FAULT},
	{114, USAGE_SCALE_STATUS_STABLE_AT_CENTER_OF_ZERO},
	{115, USAGE_SCALE_STATUS_IN_MOTION},
	{116, USAGE_SCALE_STATUS_WEIGHT_STABLE},
	{117, USAGE_SCALE_STATUS_UNDER_ZERO},
	{118, USAGE_SCALE_STATUS_OVER_WEIGHT_LIMIT},
	{119, USAGE_SCALE_STATUS_REQUIRES_CALIBRATION},
	{120, USAGE_SCALE_STATUS_REQUIRES_REZEROING},
	{128, USAGE_ZERO_SCALE},
	{129, USAGE_ENFORCED_ZERO_RETURN},
});
