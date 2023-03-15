#include "motor.hpp"
#include "rtc.hpp"

RTC t; motor m;
bool flag = false;
void setup() {
  t.setNumber("Robocenter");
  m.setPins(7, 6, 5);
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  if (Serial.available() > 0) {
    int data = Serial.read();
    // Serial.write(data); Serial.write("\n");
    if (data == 122) {
      flag = false;
      m.on();
      flag = true;
    }
    else if (data == 115) t.setr();
    else if (data == 114) Reset();
  }
  if (flag) {
    t.pushNumber();
    t.getTime();
  }
}
