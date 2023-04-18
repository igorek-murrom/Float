#include <Thread.h> 
#include "motor.hpp"
#include "rtc.hpp"

RTC t; motor m;
byte pinDB, pinMD;
bool statusData = false;
bool statusDB = false;
int depthValue = 410;

Thread serThread = Thread();
Thread pushThread = Thread();

void setup() {
  t.setNumber("Robocenter");
  m.setPins(7, 6, 5, A0);
  Serial.begin(9600);
  pinMode(A0, INPUT);
  Wire.begin();

  serThread.onRun(ser);
  serThread.setInterval(20);
  pushThread.onRun(push);
  pushThread.setInterval(1000);
}

void loop() {
  if (serThread.shouldRun()) serThread.run();
  if (pushThread.shouldRun()) pushThread.run();
}

void ser() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');

    if (data == "str") {statusData = false; m.on(250, depthValue);}
    else if (data[0] == 't' and data.length() == 8 and data[7] == 'x') t.setr(data);
    else if (data == "rst") Reset();
    else if (data == "odt") statusData = true;
    else if (data == "cdt") statusData = false;
    else if (data == "ok") Serial.write("ok\n");  
    else if (data[0] == 's' and data[1] == 'd' and data[2] == 's') {
      depthValue = (data.substring(3)).toInt();
      Serial.write("Set DV: "); Serial.write(String(depthValue).c_str()); Serial.write("\n");
    }
  }
}

void push() {
  if (statusData) {
    t.pushNumber();
    t.getTime();
  }
}


/* ARCHIVE
    // else if (data == "cdb") statusDB = false;
    // else if (data[0] == 'o' and data[1] == 'd' and data[2] == 'b') {
    //   statusDB = true; pinMD = data[3];
    //   pinDB = (data.substring(4)).toInt();
    //   Serial.println(int(A0));
    //   Serial.print(byte(14));
    //   Serial.println(statusDB);
    //   Serial.println(pinDB);
    // }

    // if (statusDB) {
    //   m.debug(pinDB, pinMD);
    // }
*/