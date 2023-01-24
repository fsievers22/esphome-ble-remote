#include <string>
#include <algorithm>
#include <vector>
#include <map>
typedef unsigned short uint16_t;
class UsageType{
    public:
        UsageType(uint8_t id, std::string name) : id_(id), name_(name){};
        const std::string name_;
        const uint8_t id_; 
};
const UsageType* const USAGE_TYPE_LC    = new UsageType(0, "LC");
const UsageType* const USAGE_TYPE_OOC   = new UsageType(1, "OOC");
const UsageType* const USAGE_TYPE_MC    = new UsageType(2, "MC");
const UsageType* const USAGE_TYPE_OSC   = new UsageType(3, "OSC");
const UsageType* const USAGE_TYPE_RTC   = new UsageType(4, "RTC");

const UsageType* const USAGE_TYPE_SEL   = new UsageType(5, "SEL");
const UsageType* const USAGE_TYPE_SV    = new UsageType(6, "SV");
const UsageType* const USAGE_TYPE_SF    = new UsageType(7, "SF");
const UsageType* const USAGE_TYPE_DF    = new UsageType(8, "DF");
const UsageType* const USAGE_TYPE_DV    = new UsageType(9, "DV");

const UsageType* const USAGE_TYPE_NARY  = new UsageType(10, "NARY");
const UsageType* const USAGE_TYPE_CA    = new UsageType(11, "CA");
const UsageType* const USAGE_TYPE_CL    = new UsageType(12, "CL");
const UsageType* const USAGE_TYPE_CP    = new UsageType(13, "CP");
const UsageType* const USAGE_TYPE_US    = new UsageType(14, "US");
const UsageType* const USAGE_TYPE_UM    = new UsageType(15, "UM");

static const std::vector<const UsageType * const> all_usage_types{
    USAGE_TYPE_LC,
    USAGE_TYPE_OOC,
    USAGE_TYPE_MC,
    USAGE_TYPE_OSC,
    USAGE_TYPE_RTC,

    USAGE_TYPE_SEL,
    USAGE_TYPE_SV,
    USAGE_TYPE_SF,
    USAGE_TYPE_DF,
    USAGE_TYPE_DV,

    USAGE_TYPE_NARY,
    USAGE_TYPE_CA,
    USAGE_TYPE_CL,
    USAGE_TYPE_CP,
    USAGE_TYPE_US,
    USAGE_TYPE_UM
};

static std::vector<const UsageType * const> get_usage_types_from_strings(std::vector<std::string> kinds){
    std::vector<const UsageType * const> types;
    for (std::string kind : kinds){
        for(const UsageType* const type : all_usage_types){
            if(type->name_ == kind){
                types.push_back(type);
                break;
            }
        }
    }
    return types;
}
class Usage {
    public: 
        Usage(uint16_t id, std::string name, std::vector<std::string> kinds) : id_(id), name_(name), types_(get_usage_types_from_strings(kinds)) {};
    protected:
        const std::vector<const UsageType * const> types_;
        const uint16_t id_;
        const std::string name_;
};
class UsagePage {
    public:
        UsagePage(uint8_t id, std::string name, std::map<uint16_t, const Usage * const> usages) : id_(id), name_(name), usages_(usages){};
    protected:
        const std::map<uint16_t, const Usage * const> usages_;
        const std::string name_;
        const uint8_t id_;

};
