#include <Arduino.h>
#line 1 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino"
#include "motor.hpp"
#include "rtc.hpp"

RTC t; motor m;
bool flag = false;
#line 6 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino"
void setup();
#line 13 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino"
void loop();
#line 6 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino"
void setup() {
  t.setNumber("Robocenter");
  m.setPins(7, 6, 5);
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
//  Serial.write("st");

  if (Serial.available() > 0) {
    int data = Serial.read();
    if (data == 122) {
      flag = true;
      m.on();
    }
    else if (data == 115) t.setr();
    else if (data == 114) Reset();
  }
  if (flag) {
    t.pushNumber();
    t.getTime();
  }
}

