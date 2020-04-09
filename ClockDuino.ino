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
    Timer(int Year, char Month, char Date, char Hour, int Minute, long Second, char Day, unsigned long *millisCounterPointer);
    void RefreshTimer();
};

Timer::Timer(int Year, char Month, char Date, char Hour, int Minute, long Second, char Day, unsigned long *millisCounterPointer){
  this->Year   = Year;
  this->Month  = Month;
  this->Date   = Date;
  this->Hour   = Hour;
  this->Minute = Minute;
  this->Second = Second;
  this->Day    = Day;
  this->millisCounterPointer = millisCounterPointer;
  *millisCounterPointer = ((unsigned long)this->Hour * 3600 + (unsigned long)this->Minute * 60 + (unsigned long)this->Second) * 1000;
}

bool isLeapYear(int year){ //是不是闰年
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

void Timer::RefreshTimer(){
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
  else if(isLeapYear(this->Year) == true  && this->Month == 2 && this->Date > 29){ //如果是二月,而且是闰年,而且日期大于29
    this->Month += 1;
    this->Date  -= 29;
  }
  else if(isLeapYear(this->Year) == false && this->Month == 2 && this->Date > 28){ //如果是二月,而且是闰年,而且日期大于28
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

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
//  timer = new Timer(2020, 12, 31, 23, 59, 50, 4, &timer0_millis); //测试时分秒进位情况
//  timer0_millis = (unsigned long)4294960000;                      //测试millis()溢出

//  timer = new Timer(2008, 2, 28, 23, 59, 55, 4, &timer0_millis);  //测试4年闰年的情况
//  timer = new Timer(2009, 2, 28, 23, 59, 55, 4, &timer0_millis);  //测试不是闰年的情况
//  timer = new Timer(2000, 2, 28, 23, 59, 55, 4, &timer0_millis);  //测试400年闰年的情况
//  timer = new Timer(1900, 2, 28, 23, 59, 55, 4, &timer0_millis);  //测试不是世纪闰年，但被100整除的情况

  timer = new Timer(2020, 4, 9, 16, 49, 00, 4, &timer0_millis);
}

String tmp = "";

void loop() {
  // put your main code here, to run repeatedly:
//  a = millis();
//  Serial.println((unsigned long)a);

  timer->RefreshTimer();
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
  tmp += " Millis:";
  tmp += (unsigned long)millis();
  Serial.println(tmp);
}
