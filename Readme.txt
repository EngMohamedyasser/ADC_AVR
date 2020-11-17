/*
Steps for Making ADC
1-turn on the using pin as ADC channel (ADC0,ADC1,......,ADC7)

2-Turn on ADC Mode

3-Select the Conversion speed (CLK)

4-Select the Voltage refrence mode (AVCC,2.56V,Reserved)

5-Activate Start Conversion

6- put your MCU in Waiting state "waiting for the conversion to be done"

7-Read ADCL,ADCH and store them


/*
