void(* softReset) (void) = 0;
void Reset() {
    Serial.write("reset"); Serial.write("\n");
    delay(100);
    softReset();
}
int time_old;
#define fixDelay(ms) time_old = millis(); while (millis() - time_old < ms)