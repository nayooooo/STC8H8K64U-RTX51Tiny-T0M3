#include "RTX51TNY.h"

#include "main.h"

/*******************************************************************************
* 函 数 名       : main_task
* 函数功能		 : 任务0
* 输    入       : 无
* 输    出    	 : 无
*******************************************************************************/
void Main_Task(void) _task_ MAIN_TASK
{
	EA_CLS;
	
	CreatTask:
	if(os_create_task(LED_FLASH_TASK))
	{
		goto CreatTask;
	}
	DeleteTask:
	if(os_delete_task(MAIN_TASK))
	{
		goto DeleteTask;
	}
	
	EA_OPN;
	
	while(1)
	{
		;
	}
}

/*******************************************************************************
* 函 数 名       : LED_Flash
* 函数功能		 : 任务1
* 输    入       : 无
* 输    出    	 : 无
*******************************************************************************/
void LED_Flash(void) _task_ LED_FLASH_TASK
{
	u8 i = 0;  // 实测最长延时时间约为255个时间片
			   // 应该是使用了8位长度的变量，所以能修改
	LED_Init();
	
	while(1)
	{
		os_wait(K_IVL, i, 0);
		
		LED(0) = !LED(0);
		i++;
	}
}