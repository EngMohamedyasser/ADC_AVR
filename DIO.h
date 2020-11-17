
//file guard for ADC file
#ifndef DIO_H_

#define DIO_H_


/* DIO header file
this ADC file made for AVR kit "Atmega32"*/
//Made by Eng Mohamed shehab :)

#define DA DDRA

#define DB DDRB

#define DC DDRC

#define DD DDRD

#define Set_Register(Register) Register=0xFF

#define Set_OutputPort(Port)  Port=0xFF

#define CLR_register(Register) Register=0x00

#define CLR_Port(Port) Port=0x00

#define Set_Register_n(Register,Shiftedpin) Register|=(1<<Shiftedpin)

#define CLR_Register_n(Register,Shiftedpin) Register&=~(1<<Shiftedpin)

#define Set_register_as_input(Register) Register=0x00; 

#define Set_pin_as_input(Register,pinx) Register&=~(1<<pinx)

#define check_pressed_button(Pinname,pinx) ((Pinname&(1<<pinx))==1)

#define check_unpressed_button(Pinname,pinx) ((Pinname&(1<<pinx))==0)

#define Toggle_Portxn(PortName,Portx) PortName^=(1<<Portx)

#define Toggle_Register(Register) Register^=0xff;

#define Toggle_Registerx(Register,pinx) Register^=(1<<pinx)

#endif
