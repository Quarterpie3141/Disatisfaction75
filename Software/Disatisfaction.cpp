#include <Arduino.h>
#include <Wire.h>


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

Serial.begin(9600);



}




void Matrix() {
 








}



void OLED(){





}



void QTENCODER(){
