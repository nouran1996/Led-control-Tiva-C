

/**
 * main.c
 */
#include "STD_TYPES.h"
#include "GPIO_interface.h"
#include "SysCtrl_interface.h"
#include "SysTick_interface.h"
#include "NVIC_interface.h"
#include "LED_Struct.h"
#include "LED_Cofg.h"
#include "LED.h"
//u8 x=0;
//u8 y=0;
//extern u8 gcounts_time_on=6;
//extern u8 gcounts_time_off=3;

extern u8 flag1;
extern u8 flag2;

int main(void)
{  
	

	SysCtr_clockGating(5,1);               /*  enable clock for fort f */
	GPIO_setChannelDir(1,5,1);             /*  enable pin 1 in port f direction as output */
	GPIO_setChannelDigialEn(Pin , Port);   /*  enable pin 1 in port f digital GPIO pin */
	GPIO_setChannelDir(0,5,0);             /*  enable pin 0 in port f direction as input */  
	GPIO_setChannelDigialEn(0 , Port);     /*  enable pin 0 in port f digital GPIO pin */
	GPIO_setChannelDir(4,5,0);             /*  enable pin 4 in port f direction as input */ 
	GPIO_setChannelDigialEn(4 , Port);     /*  enable pin 4 in port f digital GPIO pin */
	RCC_voidInit();
	SysTick_voidInit();
	IntCtrl_int(30,1,1);
	GPIO_PinInterruptConfig(4,5);
	GPIO_PinInterruptConfig(0,5);

  CallBack_Fun(LED_void_Off_On);
	
	while(1)
	{

	}
}
