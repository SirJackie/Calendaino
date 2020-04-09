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

void Timer::RefreshTimer(){
  if(*this->millisCounterPointer > 86400000){  //已经过去一天
    *millisCounterPointer = *millisCounterPointer - 86400000;
    this->Date += 1;
    this->Day  += 1;
    if(Day == 7){
      Day = 0;
    }
  }

  this->Second = *millisCounterPointer / 1000;
  
  this->Minute = this->Second / 60;
  this->Second %= 60;

  this->Hour = this->Minute / 60;
  this->Hour %= 60;
}

Timer* timer;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  timer = new Timer(2020, 4, 9, 15, 24, 00, 4, &timer0_millis);
  
//  让millis()提前溢出
//  timer0_millis = (unsigned long)4294967295;
//  timer0_millis = (unsigned long)4294960000;
  Serial.println(timer->Year);
  
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
