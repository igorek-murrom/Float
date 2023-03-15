#include "motor.hpp"
#include "rtc.hpp"

RTC t; motor m;
bool status = false;

void init() {
  t.setNumber("Robocenter");
  m.setPins(7, 6, 5);
  Serial.begin(9600);
  Wire.begin();
}

void setup() {
  init();
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    // Serial.write(data); Serial.write("\n");
    if (data == 's') m.on();
    else if (data == 't') t.setr();
    else if (data == 'r') Reset();
    else if (data == 'd') status = true;
    else if (data == 'c') status = false;
  }
  if (status) {
    t.pushNumber();
    t.getTime();
  }
}