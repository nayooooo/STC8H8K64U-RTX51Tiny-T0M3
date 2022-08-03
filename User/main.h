#ifndef __MAIN_H
#define __MAIN_H

#include "config.h"
#include "delay.h"

#include "led.h"

/* 宏定义任务序号 -----------------------------*/
#define MAIN_TASK			0	/* 初始化任务 */
#define LED_FLASH_TASK		1	/* LED0闪烁任务 */

/* 中断宏 ------------------------------------------*/
#define EA_CLS EA = 0
#define EA_OPN EA = 1

#endif