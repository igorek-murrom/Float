void(* softReset) (void) = 0;
void Reset() {
    Serial.write("reset\n");
    delay(100);
    softReset();
}