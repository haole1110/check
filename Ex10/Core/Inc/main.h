/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

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
#define s1_Pin GPIO_PIN_4
#define s1_GPIO_Port GPIOA
#define s2_Pin GPIO_PIN_5
#define s2_GPIO_Port GPIOA
#define s3_Pin GPIO_PIN_6
#define s3_GPIO_Port GPIOA
#define s4_Pin GPIO_PIN_7
#define s4_GPIO_Port GPIOA
#define s5_Pin GPIO_PIN_8
#define s5_GPIO_Port GPIOA
#define s6_Pin GPIO_PIN_9
#define s6_GPIO_Port GPIOA
#define s7_Pin GPIO_PIN_10
#define s7_GPIO_Port GPIOA
#define s8_Pin GPIO_PIN_11
#define s8_GPIO_Port GPIOA
#define s9_Pin GPIO_PIN_12
#define s9_GPIO_Port GPIOA
#define s10_Pin GPIO_PIN_13
#define s10_GPIO_Port GPIOA
#define s11_Pin GPIO_PIN_14
#define s11_GPIO_Port GPIOA
#define s12_Pin GPIO_PIN_15
#define s12_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
