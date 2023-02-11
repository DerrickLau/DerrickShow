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

static const char* DROID_BEACON_TAG = "Droid Beacon for Home Use";  /* added by DLau */

class GalaxysEdgeLocationBeacon
{
	protected:
	    esp_ble_adv_data_t _starwarsAdvertisement;
        esp_ble_adv_params_t _starwarsAdvertisingParams;
		uint8_t _disneyManufacturerData[8];
		void setAdvertisement();
		void startupBle();
		
		
	public:
	    void Initialize();
		
};