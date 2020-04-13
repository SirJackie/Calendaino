
#include "font.h"
#include "Clock.h"
#include "MsTimer2.h"

Clock* clk;
String tmp = "";
unsigned long millisec_recorder = 0;

inline void onTimer(){
  millisec_recorder += 1;
}

unsigned long getMillisFunc(){
  return millisec_recorder;
}

void setMillisFunc(unsigned long millisec){
  millisec_recorder = millisec;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  MsTimer2::set(1, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
  MsTimer2::start(); //开始计时
  
  LcdInit();
  LcdFill(0, 0, 239, 319, rgbhex(0x008484));
  
  clk = new Clock(2020, 4, 13, 13, 54, 00, getMillisFunc, setMillisFunc);
  clk->refreshClock();
}

void loop() {
  // put your main code here, to run repeatedly:

  clk->refreshClock();
  tmp = "";
  tmp += (int)clk->Year;
  tmp += "-";
  tmp += (int)clk->Month;
  tmp += "-";
  tmp += (int)clk->Date;
  tmp += " ";
  tmp += (int)clk->Hour;
  tmp += ":";
  tmp += (int)clk->Minute;
  tmp += ":";
  tmp += (int)clk->Second;
  tmp += " Week:";
  tmp += (int)clk->Day;
  
  Serial.println(tmp);
//  video_putString8(8, 8, rgbhex(0xffffff), tmp.c_str());
//  delay(500);
}
