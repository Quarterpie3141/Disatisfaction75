#include <Arduino.h>
#include <Wire.h>
#include <Keypad.h>

 




// KEYMAP/ keyboard layout 1 in ascii codes
  const byte ROWS = 6;
  const byte COLS = 14;

  char keys[ROWS][COLS]={

{'','2','3','4','','','','','','','','','','',},
{'','','','','','','','','','','','','','',},
{'','','','','','','','','','','','','','',},
{'','','','','','','','','','','','','','',},
{'','','','','','','','','','','','','','',},
{'','','','','','','','','','','','','','',}
 
};
//pin defenitions for the keypad libary 
byte rowPins[ROWS] = {PF0, PF1, PF4, PF5, PF6, PF7}; 
byte colPins[COLS] = {PC7, PC6, PD7, PD6, PD5, PD4, PD3, PD2, PB7, PB6, PB5, PB4, PB3, PB2}; 

Keypad Disatisfaction = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS ); // if you wan tto change the keymap then create a new array and replace makeKeymaps(keys) with the name of the array




void setup() {
  
   /* pin defentions for the rows and coloums 
  of the keyboard matrix. The current flows from 
  the coloums and is read by each of the rows sequentially
  */
  
  
  //Col pins
  pinMode(PC7,OUTPUT);
  pinMode(PC6,OUTPUT);
  pinMode(PD7,OUTPUT);
  pinMode(PD6,OUTPUT);
  pinMode(PD5,OUTPUT);
  pinMode(PD4,OUTPUT);
  pinMode(PD3,OUTPUT);
  pinMode(PD2,OUTPUT);
  pinMode(PB7,OUTPUT);
  pinMode(PB6,OUTPUT);
  pinMode(PB5,OUTPUT);
  pinMode(PB4,OUTPUT);
  pinMode(PB3,OUTPUT);
  pinMode(PB2,OUTPUT);

  //Row pins
  pinMode(PF0,INPUT);
  pinMode(PF1,INPUT);
  pinMode(PF4,INPUT);
  pinMode(PF5,INPUT);
  pinMode(PF6,INPUT);
  pinMode(PF7,INPUT);



// setting the debounce and repeat times(milliseconds)
Disatisfaction.setHoldTime(800);// time untill the keypress is repeated
Disatisfaction.setDebounceTime(10);// time untill new keypresses are accepted


}

void loop()
{






}


void scanMatrix() {
 char key = Disatisfaction.getKey();
 
 if(key)



}

void OLED(){





}

void QTENCODER(){





}