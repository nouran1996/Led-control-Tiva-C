
#include "STD_TYPES.h"
#include "SysCtrl_interface.h"
#include "SysCtrl_MCU_HW_private.h"
#include "SysCtrl_cfg .h"

void RCC_voidInit(void)
{
    RCC=0x00; // Main oscillator enable
    //RCC|= OSCILLATOR_SOURCE; //clock source is Main oscillator
    RCC|=(1<<6);
    RCC|=(0<<7);
    RCC|=(1<<8);
    RCC|=(0<<9);
    RCC|=(1<<10);
}
void SysCtr_clockGating(u8 Port_ID, u8 Peripheral_Status){
if (Peripheral_Status==1)
{
    /** GPIO Moduels */
    if(Port_ID == DIO_PORT_TypeA){
   if (GPIO_AHB_BUS)
        /* Enable AHB bus*/
        GPIOHBCTL|=(1<<0);
        /* Enable GPIOA Clock. */
        RCGCGPIO|=(1<<0);
    }else if(Port_ID == DIO_PORT_TypeB){
    if (GPIO_AHB_BUS)
        /* Enable AHB bus*/
        GPIOHBCTL|=(1<<1);

        /* Enable GPIOB Clock. */
        RCGCGPIO|=(1<<1);
    }else if(Port_ID == DIO_PORT_TypeC){
        if (GPIO_AHB_BUS)
        /* Enable AHB bus*/
        GPIOHBCTL|=(1<<2);

        /* Enable GPIOC Clock. */
        RCGCGPIO|=(1<<2);
    }else if(Port_ID == DIO_PORT_TypeD){
        if (GPIO_AHB_BUS)
        /* Enable AHB bus*/
        GPIOHBCTL|=(1<<3);

        /* Enable GPIOD Clock. */
        RCGCGPIO|=(1<<3);
    }else if(Port_ID == DIO_PORT_TypeE){
        if (GPIO_AHB_BUS)
        /* Enable AHB bus*/
        GPIOHBCTL|=(1<<4);

        /* Enable GPIOE Clock. */
        RCC|=(1<<4);
    }else if(Port_ID == DIO_PORT_TypeF){
        if (GPIO_AHB_BUS)
        /* Enable AHB bus*/
        GPIOHBCTL|=(1<<5);

        /* Enable GPIOF Clock. */
        RCGCGPIO|=(1<<5);

    }else{

    }
}
else if (Peripheral_Status==0)
{
    /** GPIO Moduels */
    if(Port_ID == DIO_PORT_TypeA)
    {
        /* Disable GPIOA Clock. */
        RCGCGPIO&=~(1<<0);
    }else if(Port_ID == DIO_PORT_TypeB)
    {
        /* Disable GPIOB Clock. */
        RCGCGPIO&=~(1<<1);
    }else if(Port_ID == DIO_PORT_TypeC)
    {
        /* Disable GPIOC Clock. */
        RCGCGPIO&=~(1<<2);
    }else if(Port_ID == DIO_PORT_TypeD)
    {
        /* Disable GPIOD Clock. */
        RCGCGPIO&=~(1<<3);
    }else if(Port_ID == DIO_PORT_TypeE)
    {
        /* Disable GPIOE Clock. */
        RCGCGPIO&=~(1<<4);
    }else if(Port_ID == DIO_PORT_TypeF)
    {
        /* Disable GPIOF Clock. */
        RCGCGPIO&=~(1<<5);

    }else{

    }
}
//return state;
}
