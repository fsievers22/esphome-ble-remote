#include "esp_hidh.h"
#include "esp_hidh_private.h"

#ifndef BLE_HIDH_STATIC_H
#define BLE_HIDH_STATIC_H
namespace esphome {
namespace ble_client_hid {
inline void esp_ble_hidh_dev_dump(esp_hidh_dev_t *dev, FILE *fp)
{
  fprintf(fp, "BDA:" ESP_BD_ADDR_STR ", Appearance: 0x%04x, Connection ID: %d\n", ESP_BD_ADDR_HEX(dev->bda), dev->ble.appearance, dev->ble.conn_id);
  fprintf(fp, "Name: %s, Manufacturer: %s, Serial Number: %s\n", dev->config.device_name ? dev->config.device_name : "", dev->config.manufacturer_name ? dev->config.manufacturer_name : "", dev->config.serial_number ? dev->config.serial_number : "");
  fprintf(fp, "PID: 0x%04x, VID: 0x%04x, VERSION: 0x%04x\n", dev->config.product_id, dev->config.vendor_id, dev->config.version);
  fprintf(fp, "Battery: Handle: %u, CCC Handle: %u\n", dev->ble.battery_handle, dev->ble.battery_ccc_handle);
  fprintf(fp, "Report Maps: %d\n", dev->config.report_maps_len);
  for (uint8_t d = 0; d < dev->config.report_maps_len; d++)
  {
    fprintf(fp, "  Report Map Length: %d\n", dev->config.report_maps[d].len);
    esp_hidh_dev_report_t *report = dev->reports;
    while (report)
    {
      if (report->map_index == d)
      {
        fprintf(fp, "    %8s %7s %6s, ID: %2u, Length: %3u, Permissions: 0x%02x, Handle: %3u, CCC Handle: %3u\n",
                esp_hid_usage_str(report->usage), esp_hid_report_type_str(report->report_type), esp_hid_protocol_mode_str(report->protocol_mode),
                report->report_id, report->value_len, report->permissions, report->handle, report->ccc_handle);
      }
      report = report->next;
    }
  }
}

inline void register_for_notify(esp_gatt_if_t gattc_if, esp_bd_addr_t bda,
                                uint16_t handle)
{
  esp_ble_gattc_register_for_notify(gattc_if, bda, handle);
}

inline void write_char_descr(esp_gatt_if_t gattc_if, uint16_t conn_id,
                             uint16_t handle, uint16_t value_len,
                             uint8_t *value, esp_gatt_write_type_t write_type,
                             esp_gatt_auth_req_t auth_req)
{
  esp_ble_gattc_write_char_descr(gattc_if, conn_id, handle, value_len, value,
                                 write_type, auth_req);
}

inline void attach_report_listeners(esp_gatt_if_t gattc_if,
                                    esp_hidh_dev_t *dev)
{
  if (dev == NULL)
  {
    return;
  }
  uint16_t ccc_data = 1;
  esp_hidh_dev_report_t *report = dev->reports;

  // subscribe to battery notifications
  if (dev->ble.battery_handle)
  {
    register_for_notify(gattc_if, dev->bda, dev->ble.battery_handle);
    /* if (dev->ble.battery_ccc_handle) {
      // Write CCC descr to enable notifications
      write_char_descr(gattc_if, dev->ble.conn_id, dev->ble.battery_ccc_handle,
                       2, (uint8_t *)&ccc_data, ESP_GATT_WRITE_TYPE_NO_RSP,
                       ESP_GATT_AUTH_REQ_NO_MITM);
    } */
  }

  while (report)
  {
    // subscribe to notifications
    if ((report->permissions & ESP_GATT_CHAR_PROP_BIT_NOTIFY) != 0 &&
        report->protocol_mode == ESP_HID_PROTOCOL_MODE_REPORT)
    {
      register_for_notify(gattc_if, dev->bda, report->handle);
      /* if (report->ccc_handle) {
        // Write CCC descr to enable notifications
        write_char_descr(gattc_if, dev->ble.conn_id, report->ccc_handle, 2,
                         (uint8_t *)&ccc_data, ESP_GATT_WRITE_TYPE_NO_RSP,
                         ESP_GATT_AUTH_REQ_NO_MITM);
      } */
    }
    report = report->next;
  }
}
}
}
#endif