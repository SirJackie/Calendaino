#include "Calendaino.h"

Calendaino* calendaino;  //Calendar Object
String strBuffer = "";   //String Buffer

void setup() {
  
  //Initialize serial port
  Serial.begin(9600);

  //Initialize clock object
  calendaino = new Calendaino(2020, 4, 13, 19, 23, 00, NULL, NULL);
}

void loop() {

  //Refresh the calendar(calendaino:)
  calendaino->refresh();

  //Convert time to string and show it
  calendaino->getStringDate(&strBuffer);
  Serial.println(strBuffer);
}
