extern unsigned long timer0_millis;

class Timer{
  public:
    int Year;
    char Month;
    char Date;
    char Hour;
    int Minute;
    unsigned char Second;
    char Day;
    unsigned long *millisCounterPointer;
    Timer(int Year, char Month, char Date, char Hour, int Minute, unsigned char Second, char Day, unsigned long *millisCounterPointer);
    void RefreshTimer();
};

Timer::Timer(int Year, char Month, char Date, char Hour, int Minute, unsigned char Second, char Day, unsigned long *millisCounterPointer){
  *millisCounterPointer = 0;
  this->Year   = Year;
  this->Month  = Month;
  this->Date   = Date;
  this->Hour   = Hour;
  this->Minute = Minute;
  this->Second = Second;
  this->Day    = Day;
  this->millisCounterPointer = millisCounterPointer;
}

bool isLeapYear(int year){ //是不是闰年
  bool isLeapYear;
  if(year % 4 == 0){
    if(year % 100 == 0){
      if(year % 400 == 0){
        //是400年一次的世纪闰年(如1600,2000年)
        return true;
      }
      else{
        //不是闰年(能被100整除)
        return false;
      }
    }
    else{
      //是4年一次的闰年(能被4整除且不能被100整除)
      return true;
    }
  }
  else{
    //不是闰年(不能被4整除)
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
  this->Hour %= 60;

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
  else if(isLeapYear(this->Year) && this->Month == 2 && this->Date > 29){ //如果是二月,而且是闰年,而且日期大于29
    this->Month += 1;
    this->Date  -= 29;
  }
  else if(this->Month == 2 && this->Date > 28){ //如果是二月,而且是闰年,而且日期大于28
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
  timer = new Timer(2020, 4, 9, 15, 24, 00, 4, &timer0_millis);
  timer0_millis = (unsigned long)4294960000; //让millis()提前溢出
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
  Serial.println(tmp);
}
