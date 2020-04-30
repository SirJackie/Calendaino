#include "Calendaino.h"
#include "MsTimer2.h"
//
//Clock* clk;
//String tmp = "";
//unsigned long millisec_recorder = 0;
//
//inline void onTimer(){
//  millisec_recorder += 1005;
//}
//
//unsigned long getMillisFunc(){
//  return millisec_recorder;
//}
//
//void setMillisFunc(unsigned long millisec){
//  millisec_recorder = millisec;
//}
//
//void setup() {
//  // put your setup code here, to run once:
//
//  //Initialize Serial Port
//  Serial.begin(9600);
//
//  //Initialize Clock Object
//  clk = new Clock(2020, 4, 13, 19, 23, 00, getMillisFunc, setMillisFunc);
//  clk->refreshClock();
//
//  //Initialize MsTimer2 Interrupt
//  MsTimer2::set(1000, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer()
//  MsTimer2::start(); //开始计时
//
//  //Initialize Lcd Screen
//  LcdInit();
//  LcdFill(0, 0, 239, 319, rgbhex(0x008484));
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//
//  clk->refreshClock();
//  tmp = "";
//  tmp += (int)clk->Year;
//  tmp += "-";
//  tmp += (int)clk->Month;
//  tmp += "-";
//  tmp += (int)clk->Date;
//  tmp += " ";
//  tmp += (int)clk->Hour;
//  tmp += ":";
//  tmp += (int)clk->Minute;
//  tmp += ":";
//  tmp += (int)clk->Second;
//  tmp += " Week:";
//  tmp += (int)clk->Day;
//  
//  Serial.println(tmp);
//  video_putString8(8, 8, rgbhex(0xffffff), tmp.c_str());
//  delay(500);
//  video_putString8(8, 8, rgbhex(0x008484), tmp.c_str());
//}
