#include "hid_report_descriptor.h"
#include <string.h>
namespace esphome {
namespace ble_client_hid {
void ReportDescriptor::parse(uint8_t* data, uint16_t data_len) {
  uint8_t* data_handle = data;
  
  //Starts with usage page declaration
  MainItem* main_item = new MainItem(); 
  while (data_handle - data < data_len) {
    ShortItem* item = ShortItem::parse(data_handle);

    switch (item->type_) {

      case ShortItem::Type::GLOBAL:
        main_item->parseGlobalItem(item);
        break;
      case ShortItem::Type::LOCAL:
        main_item->parseLocalItem(item);
        break;
      case ShortItem::Type::MAIN:

        break;

      default:
        break;
    }
    data_handle = item->get_next_data_handle(data_handle);
  }
}

void MainItem::parseGlobalItem(ShortItem* item){
  switch(item->tag_){
    case ShortItem::Tag::USAGE_PAGE:
      memcpy(&this->usage_page, item->data_, item->data_len_);
      break;     
    case ShortItem::Tag::LOGICAL_MINIMUM:
      memcpy(&this->logical_minimum, item->data_, item->data_len_);
      break;
    case ShortItem::Tag::LOGICAL_MAXIMUM:
      memcpy(&this->logical_maximum, item->data_, item->data_len_);
      break;
    case ShortItem::Tag::REPORT_SIZE:
      memcpy(&this->report_size, item->data_, item->data_len_);
      break;    
    case ShortItem::Tag::REPORT_ID:
      memcpy(&this->report_id, item->data_, item->data_len_);
      break;      
    case ShortItem::Tag::REPORT_COUNT:
      memcpy(&this->report_count, item->data_, item->data_len_);
      break;   
    default:
      //ignore
      break;
  }
}

void MainItem::parseLocalItem(ShortItem* item){
  switch(item->tag_){
    case ShortItem::Tag::USAGE:
    uint32_t usage = 0;
      if(item->data_len_ == 4){
        memcpy(&usage, item->data_, item->data_len_);
        this->usages.push_back(usage);
      } else {
        memcpy(&usage, item->data_, item->data_len_);
        this->usages.push_back((usage_page << 16) | usage );
      }
      break;
    case ShortItem::Tag::USAGE_MINIMUM:
      memcpy(&this->usage_minimum, item->data_, item->data_len_);
      break;
    case ShortItem::Tag ::USAGE_MAXIMUM:
      memcpy(&this->usage_maximum, item->data_, item->data_len_);
      break;
    default:
      break;
  }
}


uint8_t* ShortItem::get_next_data_handle(uint8_t* data_handle) {
  return (data_handle + this->data_len_ + 1);
}
ShortItem* ShortItem::parse(uint8_t* data_handle) {
  // look at first byte
  uint8_t info = *data_handle;
  uint16_t data_len = (1 << (info & 0b00000011)) >> 1;
  Type type = Type((info & 0b00001100) >> 2);
  Tag tag = Tag((info & 0b11111100) >> 2);
  uint8_t* data = data_handle + 1;
  return new ShortItem(data, data_len, type, tag);
}
}  // namespace ble_client_hid
}  // namespace esphome
