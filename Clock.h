#ifndef CLOCK_H_
#define CLOCK_H_

class Clock{
  public:
    int Year;
    char Month;
    char Date;
    char Hour;
    int Minute;
    long Second;
    char Day;
    unsigned long (*getMillisFunc) ();
    void (*setMillisFunc) (unsigned long millisec);
    
    Clock(int Year, char Month, char Date, char Hour, int Minute, long Second,
          unsigned long (*getMillisFunc) (), void (*setMillisFunc) (unsigned long millisec));
    bool isLeapYear(int year);                       //判断是不是闰年
    char calcDay(int year, int month, int day);      //计算任何一天是星期几
    void refreshClock();                             //刷新计时器时间
};

#endif
