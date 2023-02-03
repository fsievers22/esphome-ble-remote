#include <map>
#include <string>
#include "generic_desktop.h"
#include "keyboard_keypad.h"
#include "consumer.h"

struct UsagePage {
  UsagePage(const char* name,
            std::initializer_list<std::pair<const uint16_t, const char*>> usages)
      : name_(name), usages_(usages){};
  const std::map<uint16_t, const char*> usages_;
  const char* name_;
};

const std::map<uint8_t, const UsagePage> USAGE_PAGES {
  {0x01, USAGE_PAGE_GENERIC_DESKTOP},
  {0x07, USAGE_PAGE_KEYBOARD_KEYPAD},
  {0x0C, USAGE_PAGE_CONSUMER}
};
