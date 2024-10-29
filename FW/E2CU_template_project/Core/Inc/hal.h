/*
 * hal.h
 *
 *  Created on: May 30, 2024
 *      Author: mario
 */

#ifndef INC_HAL_H_
#define INC_HAL_H_

#include "stm32f7xx_hal.h"

typedef struct CanTxMessageStruct
{
	CAN_TxHeaderTypeDef Header;
	uint8_t Data[8];
} CanTxMessageType;

typedef struct CanRxMessageStruct
{
	CAN_RxHeaderTypeDef Header;
	uint8_t Data[8];
	uint32_t Timestamp;
} CanRxMessageType;


#endif /* INC_HAL_H_ */
