#ifndef GPIO_interface_H_
#define GPIO_interface_H_

#define         DIO_PORT_TypeA            0
#define         DIO_PORT_TypeB            1
#define         DIO_PORT_TypeC            2
#define         DIO_PORT_TypeD            3
#define         DIO_PORT_TypeE            4
#define         DIO_PORT_TypeF            5

/* pin number */

#define         DIO_Channel_Type0             0
#define         DIO_Channel_Type1             1
#define         DIO_Channel_Type2             2
#define         DIO_Channel_Type3             3
#define         DIO_Channel_Type4             4
#define         DIO_Channel_Type5             5
#define         DIO_Channel_Type6             6
#define         DIO_Channel_Type7             7

/* pin level high/low */

#define         DIO_LevelType_Low              0
#define         DIO_LevelType_High             1


#define         ORTPIN_OUTPUT_CURRENT_2        0xFF
#define         ORTPIN_OUTPUT_CURRENT_4        0xFF
#define         ORTPIN_OUTPUT_CURRENT_8        0xFF

#define         PORTPIN_INTERNAL_ATTACH_PULLUP          0xFF
#define         PORTPIN_INTERNAL_ATTACH_PULLDOWN        0xFF
#define         PORTPIN_INTERNAL_ATTACH_OPENDRAIN       0xFF

#define MASK         0x3FC

void GPIO_setChannelDir(u8 Channel_Id , u8 Port_ID , u8 direction);
void GPIO_setPortsDir(u8 Port_ID ,  u8 direction);
void GPIO_setChannelDigialEn(u8 Channel_Id , u8 Port_ID);
void GPIO_setPortsDigialEn(u8 Port_ID );
u8 Dio_ReadChannel(u8 Channel_Id,u8 Port_ID);
void Dio_writeChannel(u8 Channel_Id,u8 Port_ID,u8 Dio_Level_Type);
u8 Dio_ReadPort(u8 port_Id);
void Dio_writePort(u8 port_Id,u8 Port_Level_Type);
void Dio_flip(u8 Channel_Id,u8 Port_ID);
void GPIO_PinInterruptConfig(u8 Channel_Id,u8 Port_ID);

#endif
