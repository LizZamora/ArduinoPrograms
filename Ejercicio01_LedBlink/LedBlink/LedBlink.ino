#define LED_R 13
void setup() {
  pinMode(LED_R, OUTPUT);
}

void loop() {
  digitalWrite(LED_R, HIGH);
    delay(500);
  digitalWrite(LED_R, LOW);
    delay(500);
}
