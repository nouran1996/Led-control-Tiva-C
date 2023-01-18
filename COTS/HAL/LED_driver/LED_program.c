#include "STD_TYPES.h"
#include "GPIO_interface.h"

#include "LED_Struct.h"
#include "LED_Cofg.h"
#include "LED.h"


void LED_voidon(LED*Copy_LED)
{

    //GPIO_setChannelDir(Copy_LED->pin, Copy_LED->port, Copy_LED->direction);
   // GPIO_setChannelDigialEn(Copy_LED->pin , Copy_LED->port);
    Dio_writeChannel(Copy_LED->pin,Copy_LED->port,DIO_LevelType_High);




}


void LED_voidoff(LED*Copy_LED)
{


     //GPIO_setChannelDir(Copy_LED->pin, Copy_LED->port, Copy_LED->direction);
     //GPIO_setChannelDigialEn(Copy_LED->pin , Copy_LED->port);
     Dio_writeChannel(Copy_LED->pin,Copy_LED->port,DIO_LevelType_Low);

}




void LED_voidtoggle(LED*Copy_LED)
{
    GPIO_setChannelDir(Copy_LED->pin , Copy_LED->port , Copy_LED->direction);
    GPIO_setChannelDigialEn(Copy_LED->pin , Copy_LED->port);
    Dio_flip(Copy_LED->pin,Copy_LED->port);
}
