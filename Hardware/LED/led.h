#ifndef __LED_H
#define __LED_H

#include "config.h"

/*------------- LED GPIO 端口定义 -------------*/

#define LED_GPIO_Port	GPIO_P4
#define LED_GPIO_Pin(N)	GPIO_Pin_##N
#define LED_0_GPIO_Pin	LED_GPIO_Pin(5)
#define LED_1_GPIO_Pin	LED_GPIO_Pin(6)
#define LED_0	P45
#define LED_1	P46
#define LED(N)	LED_##N

/*------------- LED GPIO 端口定义 -------------*/

/*------------- LED 状态定义 -------------*/

typedef enum{
	LED_ON		= 0,
	LED_OFF		= 1,
}LED_State_Typedef;

/*------------- LED 状态定义 -------------*/

void LED_Init(void);

#endif