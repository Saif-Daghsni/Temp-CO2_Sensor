/*
 * MQ135.c
 *
 *  Created on: Apr 21, 2025
 *      Author: User
 */
#include "MQ135.h"

static ADC_HandleTypeDef* mq135_adc;

void MQ135_Init(ADC_HandleTypeDef* hadc)
{
    mq135_adc = hadc;
}

float MQ135_ReadPPM(void)
{
    uint32_t adcValue = 0;

    HAL_ADC_Start(mq135_adc);
    if (HAL_ADC_PollForConversion(mq135_adc, HAL_MAX_DELAY) == HAL_OK)
    {
        adcValue = HAL_ADC_GetValue(mq135_adc);
    }
    HAL_ADC_Stop(mq135_adc);

    // Convert ADC value (0-4095) to voltage (0 - 3.3V)
    float voltage = (adcValue / 4095.0f) * 3.3f;

    // Approximate conversion to PPM (for demo purposes)
    float ppm = voltage * 100;  // You can adjust this depending on your calibration

    return ppm;
}


