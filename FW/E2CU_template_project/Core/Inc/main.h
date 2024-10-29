/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CFG0_Pin GPIO_PIN_2
#define CFG0_GPIO_Port GPIOF
#define CFG1_Pin GPIO_PIN_3
#define CFG1_GPIO_Port GPIOF
#define CFG2_Pin GPIO_PIN_4
#define CFG2_GPIO_Port GPIOF
#define CFG3_Pin GPIO_PIN_5
#define CFG3_GPIO_Port GPIOF
#define SDMMC1_nDET_Pin GPIO_PIN_0
#define SDMMC1_nDET_GPIO_Port GPIOC
#define RTC_RST_Pin GPIO_PIN_0
#define RTC_RST_GPIO_Port GPIOB
#define LED0_Pin GPIO_PIN_10
#define LED0_GPIO_Port GPIOD
#define LED1_Pin GPIO_PIN_11
#define LED1_GPIO_Port GPIOD
#define ETH_RST_Pin GPIO_PIN_4
#define ETH_RST_GPIO_Port GPIOG
#define IMU_BL_IND_Pin GPIO_PIN_6
#define IMU_BL_IND_GPIO_Port GPIOG
#define IMU_RST_Pin GPIO_PIN_7
#define IMU_RST_GPIO_Port GPIOG
#define IMU_BL_Pin GPIO_PIN_8
#define IMU_BL_GPIO_Port GPIOG
#define SDMMC2_nDET_Pin GPIO_PIN_3
#define SDMMC2_nDET_GPIO_Port GPIOD
#define MMC_RST_Pin GPIO_PIN_4
#define MMC_RST_GPIO_Port GPIOD
#define IMU_INT_Pin GPIO_PIN_15
#define IMU_INT_GPIO_Port GPIOG

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
