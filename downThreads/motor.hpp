// #include "extra.hpp"
// int time_old;
// #define fixDelay(ms) time_old = millis(); while (millis() - time_old < ms);
class motor {
  public:
    void setPins(byte pwm, byte control1, byte control2, byte depthSensor) {
      pinMode(pwm, OUTPUT);
      pinMode(control1, OUTPUT);
      pinMode(control2, OUTPUT);
      pinMode(depthSensor, INPUT);
    }

    void on(int speed = 250, int valueDepth = 440) {
      Serial.write("start\n");
      analogWrite(pwm, speed);
      digitalWrite(control1, 0);
      digitalWrite(control2, 1);

      while (analogRead(depthSensor) > valueDepth);

      analogWrite(pwm, 0);
      digitalWrite(control1, 0);
      digitalWrite(control2, 0);
    }

    void debug(byte pin, int mode = 0) {
      /*  0 - analog    1 - digital*/
      if (mode == 0) Serial.write(String(analogRead(pin)).c_str());
      else Serial.write(String(digitalRead(pin)).c_str());
      Serial.write("\n");
    }

    byte pwm, control1, control2, depthSensor;
};
