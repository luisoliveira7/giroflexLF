void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  tone(10, 1000);
  delay(300);

  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  tone(10, 1500);
  delay(300);
}