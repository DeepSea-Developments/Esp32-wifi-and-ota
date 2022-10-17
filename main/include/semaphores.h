/* ==============================================================
 * Programmed by: Diego Felipe Mejia Ruiz
 *                Sergio Castañeda
 * Deepsea Developments SAS.
 * Cali, Colombia
 * ==============================================================
;Semaphores header file
===============================================================*/

#ifndef MAIN_SEMPH_H_
#define MAIN_SEMPH_H_

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "common.h"


//SemaphoreHandle_t i2cKey;


void semaphores_init();

#endif