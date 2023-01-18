#ifndef SysCtrl_interface_H_
#define SysCtrl_interface_H_

#define         DIO_PORT_TypeA            0
#define         DIO_PORT_TypeB            1
#define         DIO_PORT_TypeC            2
#define         DIO_PORT_TypeD            3
#define         DIO_PORT_TypeE            4
#define         DIO_PORT_TypeF            5

#define         GPIO_AHB_BUS              0

void RCC_voidInit(void);
void SysCtr_clockGating(u8 Port_ID, u8 Peripheral_Status);



#endif
