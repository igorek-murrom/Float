void(* softReset) (void) = 0;
void Reset() {
    Serial.write("reset"); Serial.write("\n");
    delay(100);
    softReset();
}