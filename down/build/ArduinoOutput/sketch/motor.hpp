#line 1 "c:\\Users\\dmina\\MATE2023\\buyo\\motor.hpp"
int time_old;
#define fixDelay(ms)  time_old = millis();while (millis() - time_old < ms)

class motor {
  public:
    void setPins(byte pwm, byte control1, byte control2) {
      pinMode(pwm, OUTPUT);
      pinMode(control1, OUTPUT);
      pinMode(control2, OUTPUT);
    }

    void on(int tdive = 7000, int tascent = 4000) {
      Serial.write("start");
      Serial.write("\n");
      //dive
      fixDelay(tdive) {
        // Serial.println("test");
        analogWrite(pwm, 250);
        digitalWrite(control1, 0);
        digitalWrite(control2, 1);
        // delay(tdive);
      }
      //ascent
      fixDelay(tascent) {
        analogWrite(pwm, 0);
        digitalWrite(control1, 0);
        digitalWrite(control2, 0);
        delay(tascent);
      }
    }

  private:
    byte pwm, control1, control2;
};
