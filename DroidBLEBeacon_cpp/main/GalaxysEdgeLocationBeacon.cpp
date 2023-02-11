#ifndef __GALAXYSEDGELOCATIONBEACON__
#define __GALAXYSEDGELOCATIONBEACON__
#include "GalaxysEdgeLocationBeacon.h"
#endif

void GalaxysEdgeLocationBeacon::setAdvertisement()
{
    ESP_LOGI(DROID_BEACON_TAG, "GalaxysEdgeLocationBeacon::setAdvertisement() called.");
	
	_starwarsAdvertisingParams.adv_int_min = 0x20; //correct
	_starwarsAdvertisingParams.adv_int_max = 0x40;  //correct
	_starwarsAdvertisingParams.adv_type = ADV_TYPE_IND; //esp_ble_adv_type_t 
	_starwarsAdvertisingParams.own_addr_type = BLE_ADDR_TYPE_PUBLIC;  //esp_ble_addr_type_t
	_starwarsAdvertisingParams.channel_map = ADV_CHNL_ALL; //esp_ble_adv_channel_t
	_starwarsAdvertisingParams.adv_filter_policy = ADV_FILTER_ALLOW_SCAN_ANY_CON_ANY; //esp_ble_adv_filter_t

//https://github.com/ruthsarian/Droid-Toolbox/blob/main/Droid-Toolbox.ino



/* Disney manufacturer ID */
_disneyManufacturerData[0] = 0x83;
_disneyManufacturerData[1] = 0x01;

#ifdef CONFIG_MARKETPLACE
#if CONFIG_MARKETPLACE == 1
/* 0x0A040102A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x01; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Marketplace beacon");
#endif
#endif

#ifdef CONFIG_BEHIND_DROID_DEPOT
#if CONFIG_BEHIND_DROID_DEPOT == 1
/* 0x0A040202A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x02; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Behind Droid Depot beacon");
#endif
#endif

#ifdef CONFIG_RESISTANCE
#if CONFIG_RESISTANCE == 1
/* 0x0A040302A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x03; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Resistance beacon");
#endif
#endif

#ifdef CONFIG_UNKNOWN
#if CONFIG_UNKNOWN == 1
/* 0x0A040402A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x04; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Unknown beacon");
#endif
#endif

#ifdef CONFIG_DROID_DEPOT_1
#if CONFIG_DROID_DEPOT_1 == 1
/* 0x0A040502A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x05; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Droid Depot beacon");
#endif
#endif

#ifdef CONFIG_DOK_ONDAR
#if CONFIG_DOK_ONDAR == 1
/* 0x0A040602A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x06; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Dok Ondar beacon");
#endif
#endif

#ifdef CONFIG_FIRST_ORDER
#if CONFIG_FIRST_ORDER == 1
/* 0x0A040702A601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x07; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x02; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as First Order beacon");
#endif
#endif

#ifdef CONFIG_DISNEYLAND_DROID_DEPOT
#if CONFIG_DISNEYLAND_DROID_DEPOT == 1
/* 0x0A040318BA01 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x03; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x18; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xBA; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Disneyland Droid Depot beacon");
#endif
#endif

#ifdef CONFIG_WALT_DISNEY_WORLD_MARKETPLACE
#if CONFIG_WALT_DISNEY_WORLD_MARKETPLACE == 1
/* 0x0A040618BA01 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x06; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0x18; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xBA; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Walt Disney World Marketplace beacon");
#endif
#endif

#ifdef CONFIG_DISNEYLAND_OGAS_CANTINA
#if CONFIG_DISNEYLAND_OGAS_CANTINA == 1
/* 0x0A0405FFA601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x05; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0xFF; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Disneyland Ogas Cantina beacon");
#endif
#endif

#ifdef CONFIG_OGAS_CANTINA
#if CONFIG_OGAS_CANTINA == 1
/* 0x0A0407FFA601 */
_disneyManufacturerData[2] = 0x0A; // type of beacon (location beacon)
_disneyManufacturerData[3] = 0x04; //length of beacon data
_disneyManufacturerData[4] = 0x07; //location; also corresponds to the audio group the droid will select a sound from
_disneyManufacturerData[5] = 0xFF; //minimum interval between droid reactions to the beacon; this value is multiplied by 5 to determine the interval in seconds. droids have a minimum reaction time of 60 seconds
_disneyManufacturerData[6] = 0xA6; //expected RSSI, beacon is ignored if weaker than value specified
_disneyManufacturerData[7] = 0x01;  //? 0 or 1 otherwise droid will ignore the beacon
ESP_LOGI(DROID_BEACON_TAG, "Built as Ogas Cantina beacon");
#endif
#endif


_starwarsAdvertisement.set_scan_rsp = false;
_starwarsAdvertisement.include_name = true;
_starwarsAdvertisement.include_txpower = true;
_starwarsAdvertisement.min_interval = 0x0006;
_starwarsAdvertisement.max_interval = 0x0010;
_starwarsAdvertisement.appearance = 0x00;
_starwarsAdvertisement.manufacturer_len = sizeof(uint8_t) * 8;
_starwarsAdvertisement.p_manufacturer_data = _disneyManufacturerData;
_starwarsAdvertisement.service_data_len = 0;
_starwarsAdvertisement.p_service_data = NULL;
_starwarsAdvertisement.service_uuid_len = 0;
_starwarsAdvertisement.p_service_uuid = NULL;
_starwarsAdvertisement.flag = (ESP_BLE_ADV_FLAG_GEN_DISC | ESP_BLE_ADV_FLAG_BREDR_NOT_SPT);

    ESP_LOGI(DROID_BEACON_TAG, "GalaxysEdgeLocationBeacon::setAdvertisement() finished.");

	
}

void GalaxysEdgeLocationBeacon::startupBle()
{
    ESP_LOGI(DROID_BEACON_TAG, "GalaxysEdgeLocationBeacon::startupBle()");

    esp_bluedroid_init();
    esp_bluedroid_enable();
    esp_err_t rc;
	rc = esp_ble_gap_config_adv_data(&_starwarsAdvertisement);
	if (rc != ESP_OK)
	{
		ESP_LOGE(DROID_BEACON_TAG, "Error configuring advertising: %s", esp_err_to_name(rc));
	}
	
	rc = esp_ble_gap_start_advertising(&_starwarsAdvertisingParams);
	if (rc != ESP_OK)
	{
		ESP_LOGE(DROID_BEACON_TAG, "Error starting advertising: %s", esp_err_to_name(rc));
	}
	
    ESP_LOGI(DROID_BEACON_TAG, "GalaxysEdgeLocationBeacon::startupBle(): %d.", rc);
	
}

void GalaxysEdgeLocationBeacon::Initialize(void)
{
	setAdvertisement();
	startupBle();
}
