#ifndef CALENDAINO_H_
#define CALENDAINO_H_
#include<Arduino.h>

class Calendaino{
  public:
  
    //Properties  属性
    int  Years;        //年
    char Months;       //月
    char Dates;        //日
    char Hours;        //时
    int  Minutes;      //分
    long Seconds;      //秒
    char Days;         //星期几

    //Methods     方法
    unsigned long (*getMillisFunc) ();                                 //(指针)获取开机到现在的毫秒数
    void          (*setMillisFunc) (unsigned long millisec);           //(指针)更改开机到现在的毫秒数
    bool          isLeapYear       (int years);                        //判断是不是闰年
    char          calcDays         (int years, int months, int days);  //计算任何一天是星期几
    void          refresh          ();                                 //刷新万年历的时间
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
