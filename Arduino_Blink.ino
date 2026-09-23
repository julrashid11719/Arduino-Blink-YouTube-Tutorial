/*
YouTube Demo
Arduino Tutorial - LED Blink / Code Included 
*/

//Sets Red to digital pin 8 and Green to digital pin 7
#define Red 8
#define Green 7

void setup()
{
//Initializes pin 8 and 7 as outputs
  pinMode(13,OUTPUT);
 
}

void loop()
{
//Blinking
  digitalWrite(13,HIGH); //Red on
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}

