
#include "STD_TYPES.h"
#include "GPIO_interface.h"
#include "LED_Struct.h"
#include "LED_Cofg.h"
#include "LED.h"
#include "SysTick_interface.h"
#include "SysTick_MCU_HW_private.h"


static void (*gfptr_fun)(void) =0;
/*static u8 gtime_on;
static u8 gtime_off;*/

void SysTick_voidInit(void)
{
    STCTRL=0;
    STRELOAD= 16000000-1;
    STCURRENT=0;
    STCTRL=0x7;   

}

/*void SysTick_Counts(void (*fptr_fun_on)(void),void (*fptr_fun_off)(void))
{
	    gfptr_fun_on  = fptr_fun_on;
      gfptr_fun_off = fptr_fun_off;
	
}*/
void CallBack_Fun(void (*fptr_fun)(void))
{
	if (0!=fptr_fun)
	{
	 gfptr_fun = fptr_fun ;
	}
}



void SysTick_Handler(void)
{
	if (0!=gfptr_fun)
	{
	 gfptr_fun() ;
	}

}
