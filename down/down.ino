#include "motor.hpp"
#include "rtc.hpp"
RTC t; motor m;
bool status = false;

void setup() {
  t.setNumber("Robocenter");
  m.setPins(7, 6, 5);
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');
    if (data == "s") m.on();
    else if (data[0] == 't' and data.length() == 8 and data[7] == 'x') t.setr(data);
    else if (data == "r") Reset();
    else if (data == "d") status = true;
    else if (data == "c") status = false;
  }
  if (status) {
    t.pushNumber();
    t.getTime();
  }
}
