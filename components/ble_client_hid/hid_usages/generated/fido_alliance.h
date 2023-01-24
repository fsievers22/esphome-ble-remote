#include "usages.h"

const Usage* const USAGE_U_F_AUTHENTICATOR_DEVICE = new Usage(1,"U2F Authenticator Device", std::vector<std::string>{ "CA"});
const Usage* const USAGE_INPUT_REPORT_DATA = new Usage(32,"Input Report Data", std::vector<std::string>{ "DV"});
const Usage* const USAGE_OUTPUT_REPORT_DATA = new Usage(33,"Output Report Data", std::vector<std::string>{ "DV"});


const UsagePage* const USAGE_PAGE_FIDO_ALLIANCE = new UsagePage(61904, "FIDO Alliance", std::map<uint16_t, const Usage* const>{
	{1, USAGE_U_F_AUTHENTICATOR_DEVICE},
	{32, USAGE_INPUT_REPORT_DATA},
	{33, USAGE_OUTPUT_REPORT_DATA},
});
