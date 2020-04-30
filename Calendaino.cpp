#include "Calendaino.h"

/*
**  Default Timer Functions 默认定时器支持函数
*/

unsigned long DefaultTimer_MillisecRecorder = 0;

inline void DefaultTimer_TimerCallback(){
  DefaultTimer_MillisecRecorder += 1005;  //1000毫秒的程序时间 + 5毫秒的中断时间 (适用于12Mhz的AtMega328P)
}

unsigned long DefaultTimer_GetMillisFunc(){
  return DefaultTimer_MillisecRecorder;
}

void DefaultTimer_SetMillisFunc(unsigned long millisec){
  DefaultTimer_MillisecRecorder = millisec;
}

/*
**  Calenduino  万年历主程序
*/

Calendaino::Calendaino
(
  int  Years,
  char Months,
  char Dates,
  char Hours,
  int  Minutes,
  long Seconds,
  unsigned long (*getMillisFunc) (),
  void (*setMillisFunc) (unsigned long millisec)
)
/* Constructor 构造函数 */
{
  //初始化类属性的值
  this->Years         = Years;
  this->Months        = Months;
  this->Dates         = Dates;
  this->Hours         = Hours;
  this->Minutes       = Minutes;
  this->Seconds       = Seconds;
  this->Days          = this->calcDays(Years, Months, Dates);
  if(getMillisFunc == NULL || setMillisFunc == NULL)
  /* Use Default Timer 使用默认定时器 */
  {
    this->getMillisFunc = DefaultTimer_GetMillisFunc;
    this->setMillisFunc = DefaultTimer_SetMillisFunc;
    
    //Initialize MsTimer2 Interrupt
    MsTimer2::set(1000, DefaultTimer_TimerCallback); //设置中断,每1000ms进入一次中断
    MsTimer2::start();                               //开始计时
  }
  else
  /* Use Custom Timer 使用用户定义的定时器 */
  {
    this->getMillisFunc = getMillisFunc;
    this->setMillisFunc = setMillisFunc;
  }

  //设置开机后的毫秒数为今天0点到现在过去的毫秒数,方便计算
  this->setMillisFunc(((unsigned long)this->Hours * 3600 + (unsigned long)this->Minutes * 60 + (unsigned long)this->Seconds) * 1000);
}



bool Calendaino::isLeapYear(int Years)
/* Leap Year Judging 闰年检测 */
{
  bool isLeapYears;
  if(Years % 4 == 0)
  {
    if(Years % 100 == 0)
    {
      if(Years % 400 == 0)
      {
        //是400年一次的世纪闰年(如1600,2000年)
        return true;
      }
      else
      {
        //不是闰年(能被100整除)
        return false;
      }
    }
    else
    {
      //是4年一次的闰年(能被4整除且不能被100整除)
      return true;
    }
  }
  else
  {
    //不是闰年(不能被4整除)
    return false;
  }
}



char Calendaino::calcDays(int Years, int Months, int Days)
/* 计算星期几 */
{
  unsigned long toDaysDays = 0; //1900年1月1日是星期一,所以前一天是星期日
  
  //增加从1900年到今年的天数
  for(int i = 1900; i < Years; i++)
  {
    if(isLeapYear(i) == true)
    {
      //如果是闰年,366/7=52,366%7=2,所以哪一年会过52个星期多两天,所以来年的1月1日会比前一年晚两个工作日(休息日)
      //e.g. 1904年1月1日是星期五,1905年1月1日是星期天,多了两天
      toDaysDays += 2;
    }
    else
    {
      //如果是平年,365%7=1,所以多一天
      //e.g. 1901年1月1日是星期一,1902年1月1日是星期二,多了一天
      toDaysDays += 1;
    }
    toDaysDays %= 7;
  }

  //增加从今年1月到这个月的天数
  for(int i = 0; i < Months; i++)
  {
    if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
    {
      //如果是大月,31%7=3,所以多3天
      toDaysDays += 3;
    }
    else if(i == 4 || i == 6 || i == 9 || i == 11)
    {
      //如果是小月,30%7=2,所以多2天
      toDaysDays += 2;
    }
    else if(this->isLeapYear(this->Years) == true  && i == 2)
    {
      //如果是二月,而且是闰年,29%7=1,所以多1天
      toDaysDays += 1;
    }
    else if(this->isLeapYear(this->Years) == false && i == 2)
    {
      //如果是二月,而且不是闰年,28%7=0,所以多0天,什么都不做
      ;
    }
    toDaysDays %= 7;
  }

  //增加从这个月1日到今天的天数,并且%7
  toDaysDays += Days;
  toDaysDays %= 7;
  
  return toDaysDays;
}



void Calendaino::refresh()
/* 刷新万年历 */
{
  while(1){
    if(this->getMillisFunc() > 86400000)
    /* It's been a day 已经过去一天 */
    {
      this->setMillisFunc(this->getMillisFunc() - 86400000);
      this->Dates += 1;
      this->Days  += 1;
      if(Days == 7)
      {
        Days = 0;
      }
    }
    else
    {
      break;
    }
  }

  //刷新时分秒
  this->Seconds = this->getMillisFunc() / 1000;
  
  this->Minutes = this->Seconds / 60;
  this->Seconds %= 60;

  this->Hours = this->Minutes / 60;
  this->Minutes %= 60;

  //刷新月份
  if( (this->Months == 1 || this->Months == 3 || this->Months == 5 || this->Months == 7 || this->Months == 8 || this->Months == 10 || this->Months == 12) &&
      (this->Dates > 31)
    )
  /* 如果是大月而且日期大于31 */
  { 
    this->Months += 1;
    this->Dates  -= 31;
  }
  else if( (this->Months == 4 || this->Months == 6 || this->Months == 9 || this->Months == 11) &&
           (this->Dates > 30)
         )
  /* 如果是小月而且日期大于30 */
  {
    this->Months += 1;
    this->Dates  -= 30;
  }
  else if(this->isLeapYear(this->Years) == true  && this->Months == 2 && this->Dates > 29)
  /* 如果是二月,而且是闰年,而且日期大于29 */
  {
    this->Months += 1;
    this->Dates  -= 29;
  }
  else if(this->isLeapYear(this->Years) == false && this->Months == 2 && this->Dates > 28)
  /* 如果是二月,而且不是闰年,而且日期大于28 */
  {
    this->Months += 1;
    this->Dates  -= 28;
  }

  //刷新年份
  if(this->Months > 12)
  {
    this->Years  += 1;
    this->Months =  1;
  }
}

void Calendaino::getStringDate(String* strBuffer){
  *strBuffer = "";
  *strBuffer += this->Years;
  *strBuffer += "-";
  *strBuffer += (int)this->Months;
  *strBuffer += "-";
  *strBuffer += (int)this->Dates;
  *strBuffer += " ";
  *strBuffer += (int)this->Hours;
  *strBuffer += ":";
  *strBuffer += this->Minutes;
  *strBuffer += ":";
  *strBuffer += (int)this->Seconds;
  
  /**/ if(this->Days == 0) *strBuffer += " Sunday";
  else if(this->Days == 1) *strBuffer += " Monday";
  else if(this->Days == 2) *strBuffer += " Tuesday";
  else if(this->Days == 3) *strBuffer += " Wednesday";
  else if(this->Days == 4) *strBuffer += " Thursday";
  else if(this->Days == 5) *strBuffer += " Friday";
  else if(this->Days == 6) *strBuffer += " Saturday";
}
