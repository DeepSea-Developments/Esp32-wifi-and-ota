/* ==============================================================
 * This code was made by DeepSea Developments
 * Deepsea Developments
 * Palo Alto, CA
 * Cali, Colombia
 * info@dsd.dev
 * 
 *  * Programmed by: Diego Felipe Mejia Ruiz
 *                   Sergio Castañeda
 * ==============================================================
;Main file
===============================================================*/

#include <stdio.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "include/semaphores.h"
#include "include/wifi.h"


void app_main(void)
{

    ESP_LOGI("MAIN", "STARTING");

    nvs_flash_init();

    semaphores_init();
    wifi_init();
    
}
