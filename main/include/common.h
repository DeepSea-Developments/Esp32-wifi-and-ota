/* ==============================================================
 * Programmed by: Diego Felipe Mejia Ruiz
 *                Sergio Castañeda
 * Deepsea Developments SAS.
 * Cali, Colombia
 * ==============================================================
;Firmware Common header file
===============================================================*/
#ifndef COMMON_H
#define COMMON_H

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/uart.h"
#include "driver/gpio.h"
#include "esp_system.h"
#include <esp_ota_ops.h>
#include "esp_timer.h"
#include "driver/i2c.h"
#include "nvs_flash.h"
#include "nvs.h"
#include "esp_log.h"
#include "esp_sleep.h"
#include "esp_mac.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include <esp_http_server.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h> 
#include <sys/param.h>
#include "mdns.h"

#include "lwip/err.h"
#include "lwip/sys.h"

#include <unistd.h>

#define SIZE_BLE_TASK               (configMINIMAL_STACK_SIZE+1000)
#define SIZE_INTERFACE_TASK         10000
#define SIZE_ACQUISITION_TASK       4096
#define SIZE_MONITOR_TASK           4096
#define SIZE_UI_TASK                4096
#define SIZE_WIFI_TASK              4096
#define SIZE_DEBUG_TASK             4096

#define PRIORITY_BLE_TASK           1
#define PRIORITY_INTERFACE_TASK     4
#define PRIORITY_ACQUISITION_TASK   1
#define PRIORITY_MONITOR_TASK       1
#define PRIORITY_UI_TASK            1
#define PRIORITY_WIFI_TASK          1   
#define PRIORITY_DEBUG_TASK         1

#define ACQUISITION_TASK_TAG        "ACQUISITION_T"
#define BLUETOOTH_TASK_TAG          "BLUETOOTH_T"
#define DEBUG_TASK_TAG              "DEBUG_T"
#define INTERFACE_TASK_TAG          "INTERFACE_T"
#define MONITOR_TASK_TAG            "MONITOR_T"
#define UI_TASK_TAG                 "UI_T"
#define WIFI_TASK_TAG               "WIFI_T"
#define ERROR_TAG                   "ERROR_T"

#define CONFIG_MDNS_HOSTNAME        "deepsea"
#define CO_ESP_WIFI_SSID            "DeepSea"
#define CO_ESP_WIFI_PASS            "deepseadev"
#define CO_ESP_WIFI_CHANNEL         6
#define CO_MAX_STA_CONN             2

#define DEBUG_MODE 1

#endif