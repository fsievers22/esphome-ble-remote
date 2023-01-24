#include "usages.h"

const Usage* const USAGE_MSR_DEVICE_READ_ONLY = new Usage(1,"MSR Device Read-Only", std::vector<std::string>{ "CA"});
const Usage* const USAGE_TRACK_LENGTH = new Usage(17,"Track 1 Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRACK_LENGTH = new Usage(18,"Track 2 Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRACK_LENGTH = new Usage(19,"Track 3 Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRACK_JIS_LENGTH = new Usage(20,"Track JIS Length", std::vector<std::string>{ "DV"});
const Usage* const USAGE_TRACK_DATA = new Usage(32,"Track Data", std::vector<std::string>{ "SF","DF","DV"});
const Usage* const USAGE_TRACK_DATA = new Usage(33,"Track 1 Data", std::vector<std::string>{ "SF","DF","DV"});
const Usage* const USAGE_TRACK_DATA = new Usage(34,"Track 2 Data", std::vector<std::string>{ "SF","DF","DV"});
const Usage* const USAGE_TRACK_DATA = new Usage(35,"Track 3 Data", std::vector<std::string>{ "SF","DF","DV"});
const Usage* const USAGE_TRACK_JIS_DATA = new Usage(36,"Track JIS Data", std::vector<std::string>{ "SF","DF","DV"});


const UsagePage* const USAGE_PAGE_MAGNETIC_STRIPE_READER = new UsagePage(142, "Magnetic Stripe Reader", std::map<uint16_t, const Usage* const>{
	{1, USAGE_MSR_DEVICE_READ_ONLY},
	{17, USAGE_TRACK_LENGTH},
	{18, USAGE_TRACK_LENGTH},
	{19, USAGE_TRACK_LENGTH},
	{20, USAGE_TRACK_JIS_LENGTH},
	{32, USAGE_TRACK_DATA},
	{33, USAGE_TRACK_DATA},
	{34, USAGE_TRACK_DATA},
	{35, USAGE_TRACK_DATA},
	{36, USAGE_TRACK_JIS_DATA},
});
