/*
 * MQ135.h
 *
 *  Created on: Apr 21, 2025
 *      Author: User
 */

#ifndef INC_MQ135_H_
#define INC_MQ135_H_

#include "stm32f4xx_hal.h"

void MQ135_Init(ADC_HandleTypeDef* hadc);
float MQ135_ReadPPM(void);

#endif /* INC_MQ135_H_ */

