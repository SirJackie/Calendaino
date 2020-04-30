#ifndef CALENDAINO_H_
#define CALENDAINO_H_

/* External library including 外部库引用 */
#include <Arduino.h>    //For String           用于String类型支持
#include "MsTimer2.h"   //For Interrupt Timer  用于创建中断定时器

class Calendaino
{
  public:
    //Properties  属性
    int  Years;        //Years   年
    char Months;       //Months  月
    char Dates;        //Dates   日
    char Hours;        //Hours   时
    int  Minutes;      //Minutes 分
    long Seconds;      //Seconds 秒
    char Days;         //Days    星期几

    //Methods     方法
    unsigned long (*getMillisFunc) ();                                 //Get the number of milliseconds from boot to the present  (指针)获取开机到现在的毫秒数
    void          (*setMillisFunc) (unsigned long millisec);           //Set the number of milliseconds to boot to the present    (指针)更改开机到现在的毫秒数
    bool          isLeapYear       (int years);                        //Leap year Judging                                        判断是不是闰年
    char          calcDays         (int years, int months, int days);  //Calculate the day of the week on any given day           计算任何一天是星期几
    void          refresh          ();                                 //Refresh the calendar(calendaino:)                        刷新万年历的时间
    void          getStringDate    (String* strBuffer);

    //Constructor 构造函数
    Calendaino
    (
      int  Years,
      char Months,
      char Dates,
      char Hours,
      int  Minutes,
      long Seconds,
      unsigned long (*getMillisFunc) (),
      void (*setMillisFunc) (unsigned long millisec)
    );
};

#endif
