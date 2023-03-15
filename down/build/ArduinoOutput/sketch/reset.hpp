#line 1 "c:\\Users\\dmina\\MATE2023\\buyo\\reset.hpp"
void(* softReset) (void) = 0;
void Reset() {
    Serial.write("reset"); Serial.write("\n");
    delay(100);
    softReset();
}