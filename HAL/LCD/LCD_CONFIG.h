/*
 * LCD_CONFIG.h
 *
 * Created: 9/30/2024 10:11:11 PM
 *  Author: Eng_A
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


#include "MCAL/DIO/DIO_INTERFACE.h"
/***********************************LCD_Start_CONFIGRATION_PINS *****************************/


#define	  LCD_MODE  4

  typedef enum
  {
	  LCD16X2,
	  LCD20X4
	  }LCD_TYPE;

  typedef struct 
  {
	  PORTS DATA ;
	  PORTS CONTROL ;
	  #if (LCD_MODE == 4 )
		  PINS D7 ;
		  PINS D6 ;
		  PINS D5 ;
		  PINS D4 ;
	  #endif
	  PINS RS ;
	  PINS RW ;
	  PINS EN ;
	  LCD_TYPE TYPE ;
	  }LCD_CONFIG;





/***********************************LCD_END_CONFIGRATION_PINS *****************************/



#endif /* LCD_CONFIG_H_ */