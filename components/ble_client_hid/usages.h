#include <map>
#include <string>


struct UsagePage {
  UsagePage(const char* name,
            std::map<uint16_t, const char *> usages)
      : name_(name), usages_(usages){};
  const char* name_;
  const std::map<uint16_t, const char *> usages_;
  
};

extern const std::map<uint8_t, const UsagePage> USAGE_PAGES; 
