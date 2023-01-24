#include "usages.h"

const Usage* const USAGE_MONITOR_CONTROL = new Usage(1,"Monitor Control", std::vector<std::string>{ "CA"});
const Usage* const USAGE_EDID_INFORMATION = new Usage(2,"EDID Information", std::vector<std::string>{ "SV"});
const Usage* const USAGE_VDIF_INFORMATION = new Usage(3,"VDIF Information", std::vector<std::string>{ "SV"});
const Usage* const USAGE_VESA_VERSION = new Usage(4,"VESA Version", std::vector<std::string>{ "SV"});


const UsagePage* const USAGE_PAGE_MONITOR = new UsagePage(128, "Monitor", std::map<uint16_t, const Usage* const>{
	{1, USAGE_MONITOR_CONTROL},
	{2, USAGE_EDID_INFORMATION},
	{3, USAGE_VDIF_INFORMATION},
	{4, USAGE_VESA_VERSION},
});
