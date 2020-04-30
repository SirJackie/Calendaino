#include "Calendaino.h"

Calendaino* calendaino;
String strBuffer = "";

void setup() {
  // put your setup code here, to run once:

  //Initialize Serial Port
  Serial.begin(9600);

  //Initialize Clock Object
  calendaino = new Calendaino(2020, 4, 13, 19, 23, 00, NULL, NULL);
  calendaino->refresh();
}

void loop() {
  // put your main code here, to run repeatedly:
  calendaino->refresh();
  calendaino->getStringDate(&strBuffer);
  Serial.println(strBuffer);
}
