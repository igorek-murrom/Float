#include "motor.hpp"
#include "rtc.hpp"
RTC t; motor m;
bool statusData = false;
bool statusDB = false;
int depthValue = 410;
byte pinDB, pinMD;

void setup() {
  t.setNumber("Robocenter");
  m.setPins(7, 6, 5, A0);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  Wire.begin();
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');

    if (data == "str") m.on(250, depthValue);
    else if (data[0] == 't' and data.length() == 8 and data[7] == 'x') t.setr(data);
    else if (data == "rst") Reset();
    else if (data == "odt") statusData = true;
    else if (data == "cdt") statusData = false;
    else if (data == "ok") Serial.write("ok\n");
    else if (data[0] == 's' and data[1] == 'd' and data[2] == 's') depthValue = (data.substring(3)).toInt();
    // else if (data == "cdb") statusDB = false;
    // else if (data[0] == 'o' and data[1] == 'd' and data[2] == 'b') {
    //   statusDB = true; pinMD = data[3];
    //   pinDB = (data.substring(4)).toInt();
    //   Serial.println(statusDB);
    //   Serial.println(pinDB);
    // }
  }
  if (statusData) {
    t.pushNumber();
    t.getTime();
  }
  // if (statusDB) {
  //   m.debug(pinDB, pinMD);
  // }
}
