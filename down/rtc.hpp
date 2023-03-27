#include <DS3231.h>
#include "extra.hpp"

DS3231 c1;
class RTC {
  public:
    void setNumber(const char* name) {
      numberTeam = name;
    }

    void getTime() {
      Serial.write("UTC:  ");
      print2digits(c1.getHour(h12Flag, pmFlag));
      Serial.write(':');
      print2digits(c1.getMinute());
      Serial.write(':');
      print2digits(c1.getSecond());
      Serial.write("\n");
      delay(1000);
    }

    void pushNumber() {
      Serial.write("number of team:  ");
      Serial.write(numberTeam);
      Serial.write("      ");
    }
    void setr(String data) {
      byte h, m, s;
      byte temp1, temp2;

      temp1 = (byte)data[1] - 48;
      temp2 = (byte)data[2] - 48;
      h = temp1 * 10 + temp2;
      temp1 = (byte)data[3] - 48;
      temp2 = (byte)data[4] - 48;
      m = temp1 * 10 + temp2;
      temp1 = (byte)data[5] - 48;
      temp2 = (byte)data[6] - 48;
      s = temp1 * 10 + temp2;

      Serial.write("Set RTC:  ");
      print2digits(h); Serial.write(":"); 
      print2digits(m); Serial.write(":"); 
      print2digits(s); Serial.write("\n");

      c1.setClockMode(false);
      c1.setHour(h);
      c1.setMinute(m);
      c1.setSecond(s);
    }

  private:
    const char* numberTeam;
    bool h12Flag, pmFlag;

    void print2digits(byte number) {
      int i = int(number);
      Serial.write((i - (i % 10)) / 10 + 48);
      Serial.write(i % 10 + 48);
    }
};
