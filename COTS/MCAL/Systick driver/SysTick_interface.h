#ifndef SysTick_interface_H_
#define SysTick_interface_H_



void SysTick_voidInit(void);
/*void SysTick_Counts(u8 time_on,u8 time_off);*/
void CallBack_Fun(void (*fptr_fun)(void));


#endif
