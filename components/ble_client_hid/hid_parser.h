#pragma once

namespace esphome
{
  namespace ble_client_hid
  {

    struct HIDUsage
    {
      HIDUsage(uint16_t usage, uint16_t page) : usage(usage), page(page){};
      uint16_t usage = 0;
      uint16_t page = 0;
    };

    struct HIDReportItemValue
    {
      HIDReportItemValue(const HIDUsage usage, const int32_t value, const int32_t raw_value)
          : usage(usage), value(value), raw_value(raw_value){};
      std::string to_string() const;
      HIDUsage usage;
      int32_t value = 0;
      int32_t raw_value = 0;
    };

    struct HIDUsageRangeLimits
    {
      HIDUsage minimum = HIDUsage(0, 0);
      HIDUsage maximum = HIDUsage(0, 0);
    };

    struct HIDLogicalRange
    {
      int32_t minimum = 0;
      int32_t maximum = 0;
    };

    struct HIDStateTable
    {
      uint8_t report_size = 0; // in bits
      HIDLogicalRange logical_range = {};
      uint8_t report_count = 0;
      uint8_t report_id = 0;
      uint16_t usage_page = 0;
    };

    class HIDUsageCollection
    {
    public:
      virtual const HIDUsage get_usage(uint16_t index) const = 0;
      virtual ~HIDUsageCollection() = default;
    };

    class HIDUsageRange : public HIDUsageCollection
    {
    public:
      HIDUsageRange(const HIDUsage usage_min, const HIDUsage usage_max, uint16_t usage_page)
          : usage_min(usage_min), usage_max(usage_max), usage_page(usage_page){};
      const HIDUsage get_usage(uint16_t index) const;

    protected:
      const HIDUsage usage_min;
      const HIDUsage usage_max;
      const uint16_t usage_page;
    };

    class HIDUsageList : public HIDUsageCollection
    {
    public:
      HIDUsageList(std::vector<HIDUsage> usages) : usages(usages){};
      const HIDUsage get_usage(uint16_t index) const;

    protected:
      std::vector<HIDUsage> usages;
    };

    class HIDInputReportItem
    {
    public:
      HIDInputReportItem(HIDUsageCollection *usage_collection, uint8_t report_count, uint8_t report_id,
                         HIDLogicalRange logical_range, uint8_t report_size, uint8_t report_offset)
          : report_size(report_size),
            usage_collection(usage_collection),
            report_count(report_count),
            report_id(report_id),
            logical_range(logical_range),
            report_offset(report_offset)
      {
        this->last_values = std::vector<HIDReportItemValue>(report_count, HIDReportItemValue(HIDUsage(0, 0), 0, 0));
      }
      virtual ~HIDInputReportItem()
      {
        delete usage_collection;
      };
      size_t get_total_size();
      virtual std::vector<HIDReportItemValue> parse(uint8_t *hid_report_data) = 0;
      static int32_t parse_input_report_item(uint8_t *report_data, uint16_t bit_offset, uint16_t report_size, HIDLogicalRange logical_range);
      const uint8_t report_size; // in bits

    protected:
      const HIDUsageCollection *usage_collection;
      const uint8_t report_count;
      const uint8_t report_id;
      const HIDLogicalRange logical_range;
      const uint8_t report_offset; // in bits
      std::vector<HIDReportItemValue> last_values;
    };

    class HIDInputReportArray : public HIDInputReportItem
    {
    public:
      using HIDInputReportItem::HIDInputReportItem;
      ~HIDInputReportArray(){};
      std::vector<HIDReportItemValue> parse(uint8_t *hid_report_data);

    protected:
    };

    class HIDInputReportVariable : public HIDInputReportItem
    {
    public:
     using HIDInputReportItem::HIDInputReportItem;
      ~HIDInputReportVariable(){};
      std::vector<HIDReportItemValue> parse(uint8_t *hid_report_datsa);
    };

    class HIDInputReport
    {
    public:
      HIDInputReport(uint8_t report_id) : report_id(report_id){};
      ~HIDInputReport()
      {
        for (auto &item : items)
        {
          delete item;
        }
      };
      void push_back(HIDInputReportItem *item);
      void add_padding(uint8_t padding_size);
      uint8_t get_next_offset();
      std::vector<HIDReportItemValue> parse(uint8_t *hid_report_data);

    protected:
      std::vector<HIDInputReportItem *> items;
      const uint8_t report_id;
      uint8_t report_size = 0;
    };

    class HIDReportMap
    {
    public:
      HIDReportMap(std::map<uint8_t, HIDInputReport *> input_reports)
          : input_reports(input_reports) {}
      ~HIDReportMap()
      {
        for (auto &input_report : input_reports)
        {
          delete input_report.second;
        }
      };
      static HIDReportMap *parse_report_map_data(
          const uint8_t *report_map_data, uint16_t report_map_size);
      static void esp_logd_report_map(const uint8_t *report_map_data, uint16_t report_map_size);
      static int32_t parse_item(const uint8_t **report_map_data, uint16_t *report_map_size, uint8_t report_item_info);
      std::vector<HIDReportItemValue> parse(uint8_t *hid_report_data);

    protected:
      const std::map<uint8_t, HIDInputReport *> input_reports;
    };
  } // namespace ble_client_hid
} // namespace esphome