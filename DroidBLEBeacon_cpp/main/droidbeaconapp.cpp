/*
 * SPDX-FileCopyrightText: 2021 Espressif Systems (Shanghai) CO LTD
 *
 * SPDX-License-Identifier: Unlicense OR CC0-1.0
 */



/****************************************************************************
*
* This file is for iBeacon demo. It supports both iBeacon sender and receiver
* which is distinguished by macros IBEACON_SENDER and IBEACON_RECEIVER,
*
* iBeacon is a trademark of Apple Inc. Before building devices which use iBeacon technology,
* visit https://developer.apple.com/ibeacon/ to obtain a license.
*
****************************************************************************/

#include <stdint.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "nvs_flash.h"

#include "esp_bt.h"
#include "esp_gap_ble_api.h"
#include "esp_gattc_api.h"
#include "esp_gatt_defs.h"
#include "esp_bt_main.h"
#include "esp_bt_defs.h"
//#include "/components/bt/host/bluedroid/api/include/api/esp_gap_ble_api.h"
#include "esp_gap_ble_api.h"

#define LOG_LOCAL_LEVEL ESP_LOG_VERBOSE  /* added by DLau */

#include "esp_log.h"
#include "freertos/FreeRTOS.h"

#include "GalaxysEdgeLocationBeacon.h"

GalaxysEdgeLocationBeacon locationBeacon;

extern "C" { void app_main(); }

void app_main(void)
{
    ESP_LOGI(DROID_BEACON_TAG, "app_main() called.");
    ESP_ERROR_CHECK(nvs_flash_init());
    ESP_ERROR_CHECK(esp_bt_controller_mem_release(ESP_BT_MODE_CLASSIC_BT));
    esp_bt_controller_config_t bt_cfg = BT_CONTROLLER_INIT_CONFIG_DEFAULT();
    esp_bt_controller_init(&bt_cfg);
    esp_bt_controller_enable(ESP_BT_MODE_BLE);

    locationBeacon.Initialize();

    /* set scan parameters */

    ESP_LOGI(DROID_BEACON_TAG, "droid_beacon_init() finished.");

}
