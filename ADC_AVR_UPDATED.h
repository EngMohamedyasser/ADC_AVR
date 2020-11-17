
//file guard for ADC file
#ifndef ADC_H_

#define ADC_H_


/* ADC header file
this ADC file made for AVR kit "Atmega32"*/
Made by Eng Mohamed shehab :)


//_________________________________________________________________

#define CustomADC_reg ADCSRA
//_________________________________________________________________


#define ADC_open      CustomADC_reg|=(1<<7) //open the ADC "ADCEN"
//_______________________________________________________________


//choose your CLK !
  #define ADC_CLK2      CustomADC_reg|=(1<<0)

  #define ADC_CLK4      CustomADC_reg|=(1<<1)

  #define ADC_CLK8      CustomADC_reg|=(1<<0)|(1<<1)

  #define ADC_CLK16     CustomADC_reg|=(1<<2)

  #define ADC_CLK132    CustomADC_reg|=(1<<0)|(1<<2)

  #define ADC_CLK128    CustomADC_reg|=(1<<1)|(1<<2)

  #define ADC_CLK128    CustomADC_reg|=(1<<0)|(1<<1)|(1<<2)
//_________________________________________________________________
//ADC Channels
  //#define open_ADC0 by enabling the ADC ,ADC0 channel will be automatically enabled   

  #define open_ADC1  ADMUX|=(1<<0)

  #define open_ADC2  ADMUX|=(1<<1)

  #define open_ADC3  ADMUX|=(1<<0)|(1<<1)

  #define open_ADC4  ADMUX|=(1<<2)

  #define open_ADC5  ADMUX|=(1<<0)|(1<<2)

  #define open_ADC6  ADMUX|=(1<<1)|(1<<2)

  #define open_ADC7  ADMUX|=(1<<0)|(1<<1)|(1<<2)
  
  


//you have to check that the ADC is finshed converting i.e(this line will go to infinite loop till the ADC tells the AVr that it finished "==1")
  #define Check_sucssesful_conversion  while(CustomADC_reg&(1<<4))==0) 
//_________________________________________________________________



//lets start convertion ;)
  #define ADC_Startconversion CustomADC_reg|=(1<<6)
//_________________________________________________________________



//data had been resulted ? set it in your ports
  #define set_ADC_data_to_Rports(data,fullport,partialport) data=ADC; \ fullport=data; \ partialport=data >> 8; //right adjustment

  #define set_ADC_data_to_Lports(data,fullport,partialport) data=ADC; \ fullport=data; \ partialport=data << 1; //left adjustment
//_________________________________________________________________

//VRef source i.e(this should happen in setup steps... if you will plug Vexternal , you can ignore this setup step ;))
  #define ADC_AVCC ADMUX|=(1<<6)

  #define ADC_2.65V ADMUX|=(1<<6)|(1<<7)

  #define ADC_Vref_reserved ADMUX|=(1<<7)

#define 


#endif
