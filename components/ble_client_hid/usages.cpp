#include "usages.h"
#include "generic_desktop.h"
#include "keyboard_keypad.h"
#include "consumer.h"

const std::map<uint8_t, const UsagePage> USAGE_PAGES {
  {0x01, USAGE_PAGE_GENERIC_DESKTOP},
  {0x07, USAGE_PAGE_KEYBOARD_KEYPAD},
  {0x0C, USAGE_PAGE_CONSUMER}
};