/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void clearAllClock();
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int second = 0;
    int minute = 59;
    int hour = 5;
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
	  clearAllClock();
	  second++;
	  	  if (second >= 60) {
	  		  second = 0;
	  		  minute++;
	  		  if (minute >= 60) {
	  			  minute = 0;
	  			  hour++;
	  			  if (hour >= 12) hour = 0;
	  		  }
	  	  }
	  	  clock(hour);
	  	  clock(minute/5);
	  	  clock(second/5);
	  	  HAL_Delay(1000);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, s1_Pin|s2_Pin|s3_Pin|s4_Pin
                          |s5_Pin|s6_Pin|s7_Pin|s8_Pin
                          |s9_Pin|s10_Pin|s11_Pin|s12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : s1_Pin s2_Pin s3_Pin s4_Pin
                           s5_Pin s6_Pin s7_Pin s8_Pin
                           s9_Pin s10_Pin s11_Pin s12_Pin */
  GPIO_InitStruct.Pin = s1_Pin|s2_Pin|s3_Pin|s4_Pin
                          |s5_Pin|s6_Pin|s7_Pin|s8_Pin
                          |s9_Pin|s10_Pin|s11_Pin|s12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */
void clearAllClock(){
			  HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, SET);
		  	  HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, SET);
		  	  HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, SET);
		  	  HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, SET);
		  	  HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, SET);
		  	  HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, SET);
		  	  HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, SET);
		  	  HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, SET);
		  	  HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, SET);
		  	  HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, SET);
		  	  HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, SET);
		  	  HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, SET);
}
void clock(int num){
	switch (num) {
	case 0:
			HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, RESET);
			break;
	case 12:
		HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, RESET);
		break;
	case 1:
			HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, RESET);
			break;
	case 2:
			HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, RESET);
			break;
	case 3:
			HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, RESET);
			break;
	case 4:
			HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, RESET);
			break;
	case 5:
			HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, RESET);
			break;
	case 6:
			HAL_GPIO_WritePin(s8_GPIO_Port, s8_Pin, RESET);
			break;
	case 7:
			HAL_GPIO_WritePin(s9_GPIO_Port, s9_Pin, RESET);
			break;
	case 8:
			HAL_GPIO_WritePin(s10_GPIO_Port, s10_Pin, RESET);
			break;
	case 9:
			HAL_GPIO_WritePin(s11_GPIO_Port, s11_Pin, RESET);
			break;
	case 10:
			HAL_GPIO_WritePin(s12_GPIO_Port, s12_Pin, RESET);
			break;
	case 11:
			HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, RESET);
			break;
	}
}
/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
