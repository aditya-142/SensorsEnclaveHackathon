#ifndef _IR_H_
#define _IR_H_

/*
 **************************************************************************
 * @file 		IR.h
 * @brief 		IR and its operations [TX and RX]
 **************************************************************************
 *
 */

/**************************************************************************
Include Files
 **************************************************************************/
#include "stm32g4xx_hal.h"

/**************************************************************************
Handlers
 **************************************************************************/
extern UART_HandleTypeDef huart1;

extern TIM_HandleTypeDef htim16;
extern TIM_HandleTypeDef htim17;

/**************************************************************************
Wrapper Functions
 **************************************************************************/
void IR_Execute();
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
#endif