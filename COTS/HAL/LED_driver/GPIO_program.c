
#include "STD_TYPES.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_cfg .h"


void GPIO_setChannelDir(u8 Channel_Id , u8 Port_ID , u8 direction)
{

            if(Channel_Id<8 && Port_ID<6 && direction == 1)
            {
                switch(Port_ID)
                {
                case DIO_PORT_TypeA:
                     /* set pin direction */
                    DIR_A |= (1<<Channel_Id);
                    break;
                case DIO_PORT_TypeB:

                    DIR_B |= (1<<Channel_Id);
                    break;
                case DIO_PORT_TypeC:

                    DIR_C |= (1<<Channel_Id);
                    break;
                case DIO_PORT_TypeD:

                    DIR_D |= (1<<Channel_Id);
                    break;
                case DIO_PORT_TypeE:

                    DIR_E |= (1<<Channel_Id);
                    break;
                case DIO_PORT_TypeF:

                    DIR_F |= (1<<Channel_Id);
                    break;
                }
            }
            else if(direction == 0)
            {
                switch(Port_ID)
                {
                case DIO_PORT_TypeA:
                     /* set pin direction */
                    DIR_A &= ~(1<<Channel_Id);
                    break;
                case DIO_PORT_TypeB:

                    DIR_B &= ~(1<<Channel_Id);
                    break;
                case DIO_PORT_TypeC:

                    DIR_C &= ~(1<<Channel_Id);
                    break;
                case DIO_PORT_TypeD:

                    DIR_D &= ~(1<<Channel_Id);
                    break;
                case DIO_PORT_TypeE:

                    DIR_E &= ~(1<<Channel_Id);
                    break;
                case DIO_PORT_TypeF:

                    DIR_F &= ~(1<<Channel_Id);
                    break;
                }
            }


}

void GPIO_setPortsDir(u8 Port_ID ,  u8 direction)
{
    if(direction == 1)
    {
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:
             /* set port direction */
            DIR_A = 0xFF;
            break;
        case DIO_PORT_TypeB:

            DIR_B = 0xFF;
            break;
        case DIO_PORT_TypeC:

            DIR_C = 0xFF;
            break;
        case DIO_PORT_TypeD:

            DIR_D = 0xFF;
            break;
        case DIO_PORT_TypeE:

            DIR_E = 0xFF;
            break;
        case DIO_PORT_TypeF:

            DIR_F = 0xFF;
            break;
        }
    }
    else if(direction == 0)
    {
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:
             /* set port direction */
            DIR_A = 0x00;
            break;
        case DIO_PORT_TypeB:

            DIR_B = 0x00;
            break;
        case DIO_PORT_TypeC:

            DIR_C = 0x00;
            break;
        case DIO_PORT_TypeD:

            DIR_D = 0x00;
            break;
        case DIO_PORT_TypeE:

            DIR_E = 0x00;
            break;
        case DIO_PORT_TypeF:

            DIR_F = 0x00;
            break;
        }
    }
}
void GPIO_setChannelDigialEn(u8 Channel_Id , u8 Port_ID)
{
    if(Channel_Id<8 && Port_ID<6)
    {
    switch(Port_ID)
     {
     case DIO_PORT_TypeA:
          /* set pin digital enable */
         DEN_A |= (1<<Channel_Id);
         break;
     case DIO_PORT_TypeB:

         DEN_B |= (1<<Channel_Id);
         break;
     case DIO_PORT_TypeC:

         DEN_C |= (1<<Channel_Id);
         break;
     case DIO_PORT_TypeD:

         DEN_D |= (1<<Channel_Id);
         break;
     case DIO_PORT_TypeE:

         DEN_E |= (1<<Channel_Id);
         break;
     case DIO_PORT_TypeF:

         DEN_F |= (1<<Channel_Id);
         break;
     }
    }
}
void GPIO_setPortsDigialEn(u8 Port_ID )
{
    if( Port_ID<6)
    {
    switch(Port_ID)
     {
     case DIO_PORT_TypeA:
          /* set port digital enable */
         DEN_A =0xFF ;
         break;
     case DIO_PORT_TypeB:

         DEN_B = 0xFF;
         break;
     case DIO_PORT_TypeC:

         DEN_C = 0xFF;
         break;
     case DIO_PORT_TypeD:

         DEN_D = 0xFF;
         break;
     case DIO_PORT_TypeE:

         DEN_E = 0xFF;
         break;
     case DIO_PORT_TypeF:

         DEN_F = 0xFF;
         break;
     }
    }
}


u8 Dio_ReadChannel(u8 Channel_Id,u8 Port_ID)
{
   static u8 Local_u8Data=0;
    if( Channel_Id<8 && Port_ID<6 )
    {
        switch (Port_ID)
        {
        case DIO_PORT_TypeA :Local_u8Data= (DATA_A(Channel_Id)) >>( Channel_Id)&1;

        case DIO_PORT_TypeB :Local_u8Data= (DATA_B(Channel_Id)) >>( Channel_Id)&1;
        break;
        case DIO_PORT_TypeC :Local_u8Data= (DATA_C(Channel_Id)) >>( Channel_Id)&1;
        break;
        case DIO_PORT_TypeD :Local_u8Data= (DATA_D(Channel_Id)) >>( Channel_Id)&1;
        break;
        case DIO_PORT_TypeE :Local_u8Data= (DATA_E(Channel_Id)) >>( Channel_Id)&1;
        break;
        case DIO_PORT_TypeF :Local_u8Data= (DATA_F(Channel_Id)) >>( Channel_Id)&1;
        break;
        }
    }
 return Local_u8Data;
}

void Dio_writeChannel(u8 Channel_Id,u8 Port_ID,u8 Dio_Level_Type)
{
    if( Channel_Id<8 && Port_ID<6 && Dio_Level_Type ==1 )
    {
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:
             /* set bit */
            DATA_A(Channel_Id)= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeB:

            DATA_B(Channel_Id)= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeC:

            DATA_C(Channel_Id)= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeD:

            DATA_D(Channel_Id)= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeE:

            DATA_E(Channel_Id)= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeF:

            DATA_F(Channel_Id)= (1<<Channel_Id);

            break;
        }
    }
    else if( Channel_Id<8 && Port_ID<6 && Dio_Level_Type ==0 )
    {
             /* clear bit */
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:

            DATA_A(Channel_Id)= (0<<Channel_Id);
            break;
        case DIO_PORT_TypeB:

            DATA_B(Channel_Id)= (0<<Channel_Id);
            break;
        case DIO_PORT_TypeC:

            DATA_C(Channel_Id)= (0<<Channel_Id);
            break;
        case DIO_PORT_TypeD:

            DATA_D(Channel_Id)= (0<<Channel_Id);
            break;
        case DIO_PORT_TypeE:

            DATA_E(Channel_Id)= (0<<Channel_Id);
            break;
        case DIO_PORT_TypeF:

             DATA_F(Channel_Id)= (0<<Channel_Id);
            break;
        }
    }

}
u8 Dio_ReadPort(u8 Port_ID)
{
    u8 Local_u8Data=0;
    if(  Port_ID<6 )
    {
        switch (Port_ID)
        {
        case DIO_PORT_TypeA :Local_u8Data= DATA_PORT_A ;
        break;
        case DIO_PORT_TypeB :Local_u8Data= DATA_PORT_B ;
        break;
        case DIO_PORT_TypeC :Local_u8Data= DATA_PORT_C ;
        break;
        case DIO_PORT_TypeD :Local_u8Data= DATA_PORT_D ;
        break;
        case DIO_PORT_TypeE :Local_u8Data= DATA_PORT_E ;
        break;
        case DIO_PORT_TypeF :Local_u8Data= DATA_PORT_F ;
        break;
        }
    }
 return Local_u8Data;
}
void Dio_writePort(u8 Port_ID,u8 Port_Level_Type)
{
    if( Port_ID<6 && Port_Level_Type ==1 )
    {
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:
             /*  set port */
            DATA_PORT_A =  0xFF;           // 0xFC=0b1111111100
            break;
        case DIO_PORT_TypeB:

            DATA_PORT_B = 0xFF;
            break;
        case DIO_PORT_TypeC:

            DATA_PORT_C = 0xFF;
            break;
        case DIO_PORT_TypeD:

            DATA_PORT_D = 0xFF;
            break;
        case DIO_PORT_TypeE:

            DATA_PORT_E = 0xFF;
            break;
        case DIO_PORT_TypeF:

            DATA_PORT_F = 0xFF;
            break;
        }
    }
    else if( Port_ID<6 && Port_Level_Type ==0 )
    {
             /* clear port */
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:

            DATA_PORT_A = 0x00;
            break;
        case DIO_PORT_TypeB:

            DATA_PORT_B = 0x00;
            break;
        case DIO_PORT_TypeC:

            DATA_PORT_C = 0x00;
            break;
        case DIO_PORT_TypeD:

            DATA_PORT_D = 0x00;
            break;
        case DIO_PORT_TypeE:

            DATA_PORT_E = 0x00;
            break;
        case DIO_PORT_TypeF:

            DATA_PORT_F = 0x00;
            break;
        }
    }
}
void Dio_flip(u8 Channel_Id,u8 Port_ID)
{
    if( Channel_Id<8 && Port_ID<6)
    {
        switch(Port_ID)
        {
        case DIO_PORT_TypeA:
             /*  */
            DATA_A(Channel_Id)^= (1<<Channel_Id);     // ^ --> ((1 , 1) = 0) / ((0 , 0) = 0) / ((0 , 1) = 1) / ((1 , 0) = 1)
            break;
        case DIO_PORT_TypeB:

            DATA_B(Channel_Id)^= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeC:

            DATA_C(Channel_Id)^= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeD:

            DATA_D(Channel_Id)^= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeE:

             DATA_E(Channel_Id)^= (1<<Channel_Id);
            break;
        case DIO_PORT_TypeF:

             DATA_F(Channel_Id)^= (1<<Channel_Id);
            break;
        }
    }
}

void GPIO_PinInterruptConfig(u8 Channel_Id,u8 Port_ID)
{
	
    if( Channel_Id<8 && Port_ID<6)
    {
 
             LOCK_F&=0x00;
             GPIOIM_F|= 0x00;
						 GPIOIS_F|= (1<<Channel_Id);
				     GPIOIBE_F|= (1<<Channel_Id);
						 GPIOIM_F|= (1<<Channel_Id);
				     

    }
	
}
