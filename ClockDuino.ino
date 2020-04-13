
#include "font.h"


extern unsigned long timer0_millis;

class Timer{
  public:
    int Year;
    char Month;
    char Date;
    char Hour;
    int Minute;
    long Second;
    char Day;
    unsigned long *millisCounterPointer;
    Timer(int Year, char Month, char Date, char Hour, int Minute, long Second, unsigned long *millisCounterPointer);
    bool isLeapYear(int year);                       //判断是不是闰年
    char calcDay(int year, int month, int day);      //计算任何一天是星期几
    void refreshTimer();                             //刷新计时器时间
};

Timer::Timer(int Year, char Month, char Date, char Hour, int Minute, long Second, unsigned long *millisCounterPointer){
  *millisCounterPointer = ((unsigned long)Hour * 3600 + (unsigned long)Minute * 60 + (unsigned long)Second) * 1000;
  this->Year   = Year;
  this->Month  = Month;
  this->Date   = Date;
  this->Hour   = Hour;
  this->Minute = Minute;
  this->Second = Second;
  this->Day    = this->calcDay(Year, Month, Date);
  this->millisCounterPointer = millisCounterPointer;
}

bool Timer::isLeapYear(int year){ //是不是闰年
  bool isLeapYear;
  if(year % 4 == 0){
    if(year % 100 == 0){
      if(year % 400 == 0){
        //Serial.println("Century Leap Year");
        //是400年一次的世纪闰年(如1600,2000年)
        return true;
      }
      else{
        //不是闰年(能被100整除)
        //Serial.println("Not Leap Year(Devide By 100)");
        return false;
      }
    }
    else{
      //是4年一次的闰年(能被4整除且不能被100整除)
      //Serial.println("Leap Year");
      return true;
    }
  }
  else{
    //不是闰年(不能被4整除)
    //Serial.println("Not Leap Year(Can't Devide By 4)");
    return false;
  }
}

char Timer::calcDay(int year, int month, int day){
  
  unsigned long todayDay = 0; //1900年1月1日是星期一,所以前一天是星期日
  
  //增加从1900年到今年的天数
  for(int i = 1900; i < year; i++){
    if(isLeapYear(i) == true){
      //如果是闰年,366/7=52,366%7=2,所以哪一年会过52个星期多两天,所以来年的1月1日会比前一年晚两个工作日(休息日)
      //e.g. 1904年1月1日是星期五,1905年1月1日是星期天,多了两天
      todayDay += 2;
    }
    else{
      //如果是平年,365%7=1,所以多一天
      //e.g. 1901年1月1日是星期一,1902年1月1日是星期二,多了一天
      todayDay += 1;
    }
    todayDay %= 7;
  }

  //增加从今年1月到这个月的天数
  for(int i = 0; i < month; i++){
    if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
      //如果是大月,31%7=3,所以多3天
      todayDay += 3;
    }
    else if(i == 4 || i == 6 || i == 9 || i == 11){
      //如果是小月,30%7=2,所以多2天
      todayDay += 2;
    }
    else if(this->isLeapYear(this->Year) == true  && i == 2){
      //如果是二月,而且是闰年,29%7=1,所以多1天
      todayDay += 1;
    }
    else if(this->isLeapYear(this->Year) == false && i == 2){
      //如果是二月,而且不是闰年,28%7=0,所以多0天,什么都不做
      ;
    }
    todayDay %= 7;
  }

  //增加从这个月1日到今天的天数,并且%7
  todayDay += day;
  todayDay %= 7;
  
  return todayDay;
}

void Timer::refreshTimer(){
  //刷新天数
  while(1){
    if(*this->millisCounterPointer > 86400000){  //已经过去一天
      *millisCounterPointer = *millisCounterPointer - 86400000;
      this->Date += 1;
      this->Day  += 1;
      if(Day == 7){
        Day = 0;
      }
    }
    else{
      break;
    }
  }

  //刷新时分秒
  this->Second = *millisCounterPointer / 1000;
  
  this->Minute = this->Second / 60;
  this->Second %= 60;

  this->Hour = this->Minute / 60;
  this->Minute %= 60;

  //刷新月份
  if((this->Month == 1 || this->Month == 3 || this->Month == 5 || this->Month == 7 || this->Month == 8 || this->Month == 10 || this->Month == 12)
     && this->Date > 31){ //如果是大月而且日期大于31
    this->Month += 1;
    this->Date  -= 31;
  }
  else if((this->Month == 4 || this->Month == 6 || this->Month == 9 || this->Month == 11)
          && this->Date > 30){ //如果是小月而且日期大于30
    this->Month += 1;
    this->Date  -= 30;
  }
  else if(this->isLeapYear(this->Year) == true  && this->Month == 2 && this->Date > 29){ //如果是二月,而且是闰年,而且日期大于29
    this->Month += 1;
    this->Date  -= 29;
  }
  else if(this->isLeapYear(this->Year) == false && this->Month == 2 && this->Date > 28){ //如果是二月,而且不是闰年,而且日期大于28
    this->Month += 1;
    this->Date  -= 28;
  }

  //刷新年份
  if(this->Month > 12){
    this->Year  += 1;
    this->Month =  1;
  }
}

Timer* timer;
String tmp = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  LcdInit();
  LcdFill(0, 0, 239, 319, rgbhex(0x008484));
  timer = new Timer(2020, 4, 13, 13, 54, 00, &timer0_millis);
  timer->refreshTimer();
  tmp = "";
  tmp += (int)timer->Year;
  tmp += "-";
  tmp += (int)timer->Month;
  tmp += "-";
  tmp += (int)timer->Date;
  tmp += " ";
  tmp += (int)timer->Hour;
  tmp += ":";
  tmp += (int)timer->Minute;
  tmp += ":";
  tmp += (int)timer->Second;
  tmp += " Week:";
  tmp += (int)timer->Day;
  
  Serial.println(tmp);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  timer->refreshTimer();
  tmp = "";
  tmp += (int)timer->Year;
  tmp += "-";
  tmp += (int)timer->Month;
  tmp += "-";
  tmp += (int)timer->Date;
  tmp += " ";
  tmp += (int)timer->Hour;
  tmp += ":";
  tmp += (int)timer->Minute;
  tmp += ":";
  tmp += (int)timer->Second;
  tmp += " Week:";
  tmp += (int)timer->Day;
  
  Serial.println(tmp);
//  video_putString8(8, 8, rgbhex(0xffffff), tmp.c_str());
//  delay(500);
}
