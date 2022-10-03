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
  // hàm điều kiển led 7 đoạn bên trên
    void display7SEG(int num){
   	  HAL_GPIO_WritePin ( a_GPIO_Port , a_Pin , GPIO_PIN_RESET ) ;
   	  HAL_GPIO_WritePin ( b_GPIO_Port , b_Pin , GPIO_PIN_RESET ) ;
   	  HAL_GPIO_WritePin ( c_GPIO_Port , c_Pin , GPIO_PIN_RESET ) ;
   	  HAL_GPIO_WritePin ( d_GPIO_Port , d_Pin , GPIO_PIN_RESET ) ;
   	  HAL_GPIO_WritePin ( e_GPIO_Port , e_Pin , GPIO_PIN_RESET ) ;
   	  HAL_GPIO_WritePin ( f_GPIO_Port , f_Pin , GPIO_PIN_RESET ) ;
   	  HAL_GPIO_WritePin ( g_GPIO_Port , g_Pin , GPIO_PIN_RESET ) ;
   	  if(num == 1 || num == 4)  HAL_GPIO_WritePin ( a_GPIO_Port , a_Pin , GPIO_PIN_SET ) ;
   	  if(num == 5 || num == 6)  HAL_GPIO_WritePin ( b_GPIO_Port , b_Pin , GPIO_PIN_SET ) ;
   	  if(num == 2)  HAL_GPIO_WritePin ( c_GPIO_Port , c_Pin , GPIO_PIN_SET ) ;
   	  if(num == 1 || num == 4 || num == 7)  HAL_GPIO_WritePin ( d_GPIO_Port , d_Pin , GPIO_PIN_SET ) ;
   	  if(num != 0 && num != 2 && num != 6 && num != 8)  HAL_GPIO_WritePin ( e_GPIO_Port , e_Pin , GPIO_PIN_SET ) ;
   	  if(num == 1 || num == 2 || num == 3 || num == 7)  HAL_GPIO_WritePin ( f_GPIO_Port , f_Pin , GPIO_PIN_SET ) ;
   	  if(num == 0 || num == 1 || num == 7)  HAL_GPIO_WritePin ( g_GPIO_Port , g_Pin , GPIO_PIN_SET ) ;
     }
  // hàm điều kiển led 7 đoạn bên phải
     void display7SEG1(int num){
     	  HAL_GPIO_WritePin ( a1_GPIO_Port , a1_Pin , GPIO_PIN_RESET ) ;
     	  HAL_GPIO_WritePin ( b1_GPIO_Port , b1_Pin , GPIO_PIN_RESET ) ;
     	  HAL_GPIO_WritePin ( c1_GPIO_Port , c1_Pin , GPIO_PIN_RESET ) ;
     	  HAL_GPIO_WritePin ( d1_GPIO_Port , d1_Pin , GPIO_PIN_RESET ) ;
     	  HAL_GPIO_WritePin ( e1_GPIO_Port , e1_Pin , GPIO_PIN_RESET ) ;
     	  HAL_GPIO_WritePin ( f1_GPIO_Port , f1_Pin , GPIO_PIN_RESET ) ;
     	  HAL_GPIO_WritePin ( g1_GPIO_Port , g1_Pin , GPIO_PIN_RESET ) ;
     	  if(num == 1 || num == 4)  HAL_GPIO_WritePin ( a1_GPIO_Port , a1_Pin , GPIO_PIN_SET ) ;
     	  if(num == 5 || num == 6)  HAL_GPIO_WritePin ( b1_GPIO_Port , b1_Pin , GPIO_PIN_SET ) ;
     	  if(num == 2)  HAL_GPIO_WritePin ( c1_GPIO_Port , c1_Pin , GPIO_PIN_SET ) ;
     	  if(num == 1 || num == 4 || num == 7)  HAL_GPIO_WritePin ( d1_GPIO_Port , d1_Pin , GPIO_PIN_SET ) ;
     	  if(num != 0 && num != 2 && num != 6 && num != 8)  HAL_GPIO_WritePin ( e1_GPIO_Port , e1_Pin , GPIO_PIN_SET ) ;
     	  if(num == 1 || num == 2 || num == 3 || num == 7)  HAL_GPIO_WritePin ( f1_GPIO_Port , f1_Pin , GPIO_PIN_SET ) ;
     	  if(num == 0 || num == 1 || num == 7)  HAL_GPIO_WritePin ( g1_GPIO_Port , g1_Pin , GPIO_PIN_SET ) ;
       }

       // đèn sáng : 1 = đỏ, 2 = xanh , 3 = vàng
       int led7_1 = 2; // 1 led sẽ bắt đầu đèn xanh
       int led7_2 = 1; // 1 led sẽ bắt đầu đèn đỏ
       // số giây mỗi đèn : đỏ 5 , vàng 2 , xanh 3
       int counter1 = 3; // giây đèn xanh
       int counter2 = 5; // giây đèn đỏ
       // tương tự như led 7 đoạn
       int status1 = 2;
       int status2 = 1;
       //red1 là số giây của đèn led1, tương tự vàng, xanh
       int red1 = 0;
       int yellow1 = 0;
       int green1 = 0;
       int red2 = 0;
       int yellow2 = 0;
       int green2 = 0;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	  // đèn đỏ sáng
	  if(status1 == 1){
		  HAL_GPIO_WritePin ( yellow_GPIO_Port , yellow_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( green_GPIO_Port , green_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( red_GPIO_Port , red_Pin , GPIO_PIN_RESET ) ;
		  red1++;
	  // nếu đèn đỏ hết 5 giây chuyển qua đèn xanh
		  if(red1 == 5){
			  red1 = 0;
			  status1 = 2;
		  }
	  }
	  else if(status1 == 3){
		  HAL_GPIO_WritePin ( yellow_GPIO_Port , yellow_Pin , GPIO_PIN_RESET ) ;
		  HAL_GPIO_WritePin ( green_GPIO_Port , green_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( red_GPIO_Port , red_Pin , GPIO_PIN_SET ) ;
		  yellow1++;
		  if(yellow1 == 2){
			  yellow1 = 0;
			  status1 = 1;
		  }
	  }
	  else if(status1 == 2){
		  HAL_GPIO_WritePin ( yellow_GPIO_Port , yellow_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( green_GPIO_Port , green_Pin , GPIO_PIN_RESET ) ;
		  HAL_GPIO_WritePin ( red_GPIO_Port , red_Pin , GPIO_PIN_SET ) ;
		  green1++;
		  if(green1 == 3){
			  green1 = 0;
			  status1 = 3;
		  }
	  }

	  if(status2 == 1){
		  HAL_GPIO_WritePin ( yellow1_GPIO_Port , yellow1_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( green1_GPIO_Port , green1_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( red1_GPIO_Port , red1_Pin , GPIO_PIN_RESET ) ;
		  red2++;
		  if(red2 == 5){
			  red2 = 0;
			  status2 = 2;
		  }
	  }
	  else if(status2 == 3){
		  HAL_GPIO_WritePin ( yellow1_GPIO_Port , yellow1_Pin , GPIO_PIN_RESET ) ;
		  HAL_GPIO_WritePin ( green1_GPIO_Port , green1_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( red1_GPIO_Port , red1_Pin , GPIO_PIN_SET ) ;
		  yellow2++;
		  if(yellow2 == 2){
			  yellow2 = 0;
			  status2 = 1;
		  }
			}
	  else if(status2 == 2){
		  HAL_GPIO_WritePin ( yellow1_GPIO_Port , yellow1_Pin , GPIO_PIN_SET ) ;
		  HAL_GPIO_WritePin ( green1_GPIO_Port , green1_Pin , GPIO_PIN_RESET ) ;
		  HAL_GPIO_WritePin ( red1_GPIO_Port , red1_Pin , GPIO_PIN_SET ) ;
		  green2++;
		  if(green2 == 3){
			  green2 = 0;
			  status2 = 3;
		  }
	  }
	if(led7_1 == 1){
		display7SEG(counter1);
		counter1--;
		if(counter1 == 0){
			counter1 = 3;
			led7_1 = 2;
		}
	}
	else if(led7_1 == 2){
			display7SEG(counter1);
			counter1--;
			if(counter1 == 0){
				counter1 = 2;
				led7_1 = 3;
			}
	}
	else if(led7_1 == 3){
			display7SEG(counter1);
			counter1--;
			if(counter1 == 0){
				counter1 = 5;
				led7_1 = 1;
			}
	}

	  if(led7_2 == 1){
				display7SEG1(counter2);
				counter2--;
				if(counter2 == 0){
					counter2 = 3;
					led7_2 = 2;
				}
	  }
	  else if(led7_2 == 2){
				display7SEG1(counter2);
				counter2--;
				if(counter2 == 0){
					counter2 = 2;
					led7_2 = 3;
				}
	  }
	  else if(led7_2 == 3){
				display7SEG1(counter2);
				counter2--;
				if(counter2 == 0){
					counter2 = 5;
					led7_2 = 1;
				}
	  }
// độ trễ 1 giây
	HAL_Delay (1000) ;
    /* USER CODE BEGIN 3 */
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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, red_Pin|yellow_Pin|green_Pin|red1_Pin
                          |yellow1_Pin|green1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, a_Pin|b_Pin|c_Pin|d1_Pin
                          |e1_Pin|f1_Pin|g1_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|a1_Pin
                          |b1_Pin|c1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : red_Pin yellow_Pin green_Pin red1_Pin
                           yellow1_Pin green1_Pin */
  GPIO_InitStruct.Pin = red_Pin|yellow_Pin|green_Pin|red1_Pin
                          |yellow1_Pin|green1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin d1_Pin
                           e1_Pin f1_Pin g1_Pin d_Pin
                           e_Pin f_Pin g_Pin a1_Pin
                           b1_Pin c1_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|d1_Pin
                          |e1_Pin|f1_Pin|g1_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|a1_Pin
                          |b1_Pin|c1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

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
