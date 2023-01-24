#pragma once

#ifdef USE_ESP32

#include <vector>
#include <stdint.h>

#include "usages.h"

namespace esphome {
namespace ble_client_hid {
class ShortItem {

  public:
    enum Type {
      MAIN = 0,
      GLOBAL = 1,
      LOCAL = 2,
    };
    enum Tag {
      INPUT               = 0b100000 | Type::MAIN,
      COLLECTION          = 0b101000 | Type::MAIN,
      END_COLLECTION      = 0b110000 | Type::MAIN,
      USAGE_PAGE          = 0b000000 | Type::GLOBAL,
      LOGICAL_MINIMUM     = 0b000100 | Type::GLOBAL,
      LOGICAL_MAXIMUM     = 0b001000 | Type::GLOBAL,
      REPORT_SIZE         = 0b011100 | Type::GLOBAL,
      REPORT_ID           = 0b100000 | Type::GLOBAL,
      REPORT_COUNT        = 0b100100 | Type::GLOBAL,
      USAGE               = 0b000000 | Type::LOCAL,
      USAGE_MINIMUM       = 0b000100 | Type::LOCAL,
      USAGE_MAXIMUM       = 0b001000 | Type::LOCAL,
    };

    ShortItem(uint8_t* data, uint8_t data_len, Type type, Tag tag) : data_(data), data_len_(data_len), type_(type), tag_(tag){}
    //ShortItem(ShortItem* item) : this(item){}
    uint8_t* get_next_data_handle(uint8_t* data_handle);
    static ShortItem *parse(uint8_t* data);
    const Tag tag_;
    const Type type_;
    const uint8_t* const data_;
    const uint8_t data_len_;
  protected:
    
    
    
  
};

class LocalItem {
  public:
    enum Tag {
      USAGE               = 0b0000,
      USAGE_MINIMUM       = 0b0001,
      USAGE_MAXIMUM       = 0b0010,
      DESIGNATOR_INDEX    = 0b0100,
      DESIGNATOR_MINIMUM  = 0b0100,
      DESIGNATOR_MAXIMUM  = 0b0101,
      STRING_INDEX        = 0b0111,
      STRING_MINIMUM      = 0b1000,
      STRING_MAXIMUM      = 0b1001,
      DELIMITER           = 0b1010,
    };
};

class ReportDescriptor {
  public:
    void parse(uint8_t* data, uint16_t data_len);
  protected:
    const uint8_t* const data_;
    const uint16_t data_len_;

};

class MainItem {
  public:
    void parseGlobalItem(ShortItem* global_item);
    void parseLocalItem(ShortItem* local_item);
    uint16_t usage_page = 0;
    uint32_t logical_minimum = 0;
    uint32_t logical_maximum = 0;
    std::vector<uint32_t> usages;
    uint32_t report_size = 0;
    uint32_t report_count = 0;
    uint32_t report_id = 0;
    uint32_t usage_minimum = 0;
    uint32_t usage_maximum = 0;
};

class InputReport{

};

class ApplicationCollection {
  public:
    std::vector<InputReport*> parse(uint8_t* data, uint16_t data_len);
    static ApplicationCollection* parseApplicationCollection(uint8_t* data_handle);    
  protected:
    std::vector<InputReportDesc> input_reports;
    Usage* usage;
    UsagePage* usage_page;
    

};

//Not supporting extended usages (overriding usage page)
class InputReportDesc {
  public:
    virtual InputReport* parse(uint8_t* data_handle);

  protected:
    std::vector<Usage* > usages;
    UsagePage* usage_page;
    uint16_t logical_minimum;
    uint16_t logical_maximum;
    uint16_t report_size;
    uint16_t report_count;
    uint16_t usage_minimum = NULL;
    uint16_t usage_maximum = NULL;
};

class InputArray : InputReportDesc{
  public:
    InputReport* parse(uint8_t* data_handle);
};

class InputVariable : InputReportDesc{
  public:
    InputReport* parse(uint8_t* data_handle);
};
  
}  // namespace ble_client_hid
}  // namespace esphome
#endif // USE_ESP32