

#include "STD_TYPES.h"
#include "NVIC_private.h"
#include "NVIC_cfg .h"
#include "NVIC_interface.h"
#include "GPIO_private.h"
#include "LED_Struct.h"
#include "LED_Cofg.h"
#include "LED.h"
//static u8 gcounts_time_on;
//static u8 gcounts_time_off=3;
 u8 flag1;
 u8 flag2;

void IntCtrl_int(u8 Copy_u8InterruptNum, u8 Copy_u8PerPriority,u8 Copy_u8InterruptStatus)
{

APINT = GROUPS_AND_SUB_NUMBER ;

    /* enable interrupts */
    if(Copy_u8InterruptNum < 32 &&GROUPS_AND_SUB_NUMBER && Copy_u8InterruptStatus==1 )
    {
        EN0 |= ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 64 && Copy_u8InterruptStatus==1)
    {
        Copy_u8InterruptNum -= 32;
        EN1 |= ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 96 && Copy_u8InterruptStatus==1)
    {
        Copy_u8InterruptNum -= 64;
        EN2 |= ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 128 && Copy_u8InterruptStatus==1)
    {
        Copy_u8InterruptNum -= 96;
        EN3 |= ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 139 && Copy_u8InterruptStatus==1)
    {
        Copy_u8InterruptNum -= 128;
        EN4 |= ( 1 << Copy_u8InterruptNum );
    }

/******************************************************************************/

    /* disable interrupts */
    if(Copy_u8InterruptNum < 32 && Copy_u8InterruptStatus==0 )
    {
        DIS0 &= ~( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 64 && Copy_u8InterruptStatus==0)
    {
        Copy_u8InterruptNum -= 32;
        DIS1 &= ~ ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 96 && Copy_u8InterruptStatus==0)
    {
        Copy_u8InterruptNum -= 64;
        DIS2 &= ~ ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 128 && Copy_u8InterruptStatus==0)
    {
        Copy_u8InterruptNum -= 96;
        DIS3 &= ~ ( 1 << Copy_u8InterruptNum );
    }
    else if (Copy_u8InterruptNum < 139 && Copy_u8InterruptStatus==0)
    {
        Copy_u8InterruptNum -= 128;
        DIS4 &= ~ ( 1 << Copy_u8InterruptNum );
    }
/********************************************************************************/
    if(Copy_u8InterruptNum < 139 && Copy_u8PerPriority < 8)
    {
        switch(Copy_u8InterruptNum)
        {
            /*      Bits From 7 : 5                   */
            /*      1st clear bits then write priority to avoid over writing       */
        case 0:   PRI0 = (PRI0 & ~(0xF<<5))|(Copy_u8PerPriority<<5);  // assign priority for isr0
            /*      Bits From 15 : 13                 */
        case 1:   PRI0 = (PRI0 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr1
            /*      Bits From 23 :21                  */
        case 2:   PRI0 = (PRI0 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr2
            /*      Bits From 31 : 29                 */
        case 3:   PRI0 = (PRI0 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr3
            /*      Bits From 7 : 5                   */
        case 4:   PRI1 = (PRI1 & ~(0xF<<5))|(Copy_u8PerPriority<<5);  // assign priority for isr4
           /*      Bits From 15 : 13                 */
        case 5:   PRI1 = (PRI1 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr5
           /*      Bits From 23 :21                  */
        case 6:   PRI1 = (PRI1 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr6
           /*      Bits From 31 : 29                 */
        case 7:   PRI1 = (PRI1 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr7
            /*      Bits From 7 :5                  */
        case 8:   PRI2 = (PRI0 & ~(0xF<<5))|(Copy_u8PerPriority<<5); // assign priority for isr8
            /*      Bits From 15 : 13                 */
        case 9:   PRI2 = (PRI2 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr9
            /*      Bits From 23 : 21                   */
        case 10:  PRI2 = (PRI2 & ~(0xF<<21))|(Copy_u8PerPriority<<21);  // assign priority for isr10
           /*      Bits From 31 : 29                 */
        case 11:  PRI2 = (PRI2 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr11
           /*      Bits From 7 : 5                  */
        case 12:  PRI3 = (PRI3 & ~(0xF<<5))|(Copy_u8PerPriority<<5); // assign priority for isr12
           /*      Bits From 15 : 13                 */
        case 13:  PRI3 = (PRI3 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr13
           /*      Bits From 23 : 21                  */
        case 14:  PRI3 = (PRI3 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr14
          /*      Bits From 31 : 29                 */
        case 15:  PRI3 = (PRI3 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr15
				           /*      Bits From 7 : 5                  */
        case 16:  PRI4 = (PRI4 & ~(0xF<<5))|(Copy_u8PerPriority<<5);   // assign priority for isr16
           /*      Bits From 15 : 13                 */
        case 17:  PRI4 = (PRI4 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr17
           /*      Bits From 23 : 21                  */
        case 18:  PRI4 = (PRI4 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr18
          /*      Bits From 31 : 29                 */
        case 19:  PRI4 = (PRI4 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr19
				           /*      Bits From 7 : 5                  */
        case 20:  PRI5 = (PRI5 & ~(0xF<<5))|(Copy_u8PerPriority<<5);   // assign priority for isr20
           /*      Bits From 15 : 13                 */
        case 21:  PRI5 = (PRI5 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr21
           /*      Bits From 23 : 21                  */
        case 22:  PRI5 = (PRI5 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr22
          /*      Bits From 31 : 29                 */
        case 23:  PRI5 = (PRI5 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr23
								           /*      Bits From 7 : 5                  */
        case 24:  PRI6 = (PRI6 & ~(0xF<<5))|(Copy_u8PerPriority<<5);   // assign priority for isr24
           /*      Bits From 15 : 13                 */
        case 25:  PRI6 = (PRI6 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr25
           /*      Bits From 23 : 21                  */
        case 26:  PRI6 = (PRI6 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr26
          /*      Bits From 31 : 29                 */
        case 27:  PRI6 = (PRI6 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr27
												           /*      Bits From 7 : 5                  */
        case 28:  PRI7 = (PRI7 & ~(0xF<<5))|(Copy_u8PerPriority<<5);   // assign priority for isr28
           /*      Bits From 15 : 13                 */
        case 29:  PRI7 = (PRI7 & ~(0xF<<13))|(Copy_u8PerPriority<<13); // assign priority for isr29
           /*      Bits From 23 : 21                  */
        case 30:  PRI7 = (PRI7 & ~(0xF<<21))|(Copy_u8PerPriority<<21); // assign priority for isr30
          /*      Bits From 31 : 29                 */
        case 31:  PRI7 = (PRI7 & ~(0xF<<29))|(Copy_u8PerPriority<<29); // assign priority for isr31
				

        }
    }
}



void GPIOF_Handler(void)
{

	//test_fun();
	
	if(GPIOMIS_F&0x01==0x01)
	{
    test1_fun();	
    GPIOICR_F |= 0x01;
	}
	 if (GPIOMIS_F&0x10==0x10)
		{
    test2_fun();	
    GPIOICR_F |= 0x10;
	}
	 //flag1 = 1;
	//GPIOICR_F |= 0x10;
	// flag2 = 1;
}
