#include "Calendaino.h"
#include "MsTimer2.h"

Calendaino* calendaino;
String strBuffer = "";
unsigned long millisec_recorder = 0;

inline void onTimer(){
  millisec_recorder += 1005;
}

unsigned long getMillisFunc(){
  return millisec_recorder;
}

void setMillisFunc(unsigned long millisec){
  millisec_recorder = millisec;
}

void setup() {
  // put your setup code here, to run once:

  //Initialize Serial Port
  Serial.begin(9600);

  //Initialize Clock Object
  calendaino = new Calendaino(2020, 4, 13, 19, 23, 00, getMillisFunc, setMillisFunc);
  calendaino->refresh();

  //Initialize MsTimer2 Interrupt
  MsTimer2::set(1000, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时

}

void loop() {
  // put your main code here, to run repeatedly:
  calendaino->refresh();
  calendaino->getStringDate(&strBuffer);
  Serial.println(strBuffer);
}
