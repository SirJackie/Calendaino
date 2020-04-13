
#include "font.h"
#include "Clock.h"

Clock* clk;
String tmp = "";

unsigned long getMillisFunc(){
  return 0;
}
void setMillisFunc(unsigned long millisec){
  return;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  LcdInit();
  LcdFill(0, 0, 239, 319, rgbhex(0x008484));
  clk = new Clock(2020, 4, 13, 13, 54, 00, getMillisFunc, setMillisFunc);
  clk->refreshClock();
  delay(1000);
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
