# 1 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino"
# 2 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino" 2
# 3 "c:\\Users\\dmina\\MATE2023\\buyo\\buyo.ino" 2

RTC t; motor m;
bool flag = false;
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
