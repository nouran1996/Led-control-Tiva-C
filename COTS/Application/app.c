/*
 * app.c
 *
 *  Created on: ???/???/????
 *      Author: noura
 */
#include "STD_TYPES.h"
#include "GPIO_private.h"
#include "GPIO_interface.h"
#include "SysTick_interface.h"
#include "SysTick_MCU_HW_private.h"
#include "LED_Struct.h"
#include "LED_Cofg.h"
#include "LED.h"



static u8 gcounts_time_on=6;
static u8 gcounts_time_off=3;


LED led1 = {Pin,Port,Direction};
LED*Copy_LED = &led1;




void LED_void_Off_On(void)
{
    static u8 Led_Status=0;
    static u8 counts=0;
    counts++;
	Led_Status=Dio_ReadChannel(Pin,Port);
    if(counts==gcounts_time_off && Led_Status==0)
    {
      LED_voidon(Copy_LED);
			counts=0;
    }
    else if(counts==gcounts_time_on && Led_Status==1)
    {
      LED_voidoff(Copy_LED);
			counts=0;
    }

}




void test1_fun(void);
void test1_fun()
{

		gcounts_time_on++;
		gcounts_time_off--;


}
void test2_fun(void);
void test2_fun(void)
{
		gcounts_time_on--;
		gcounts_time_off++;

}
