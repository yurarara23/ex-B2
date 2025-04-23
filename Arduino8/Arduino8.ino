const int ledPin13 = 13;
const int ledPin12 = 12;
const int ledPin11 = 11;
const int ledPin10 = 10;
const int ledPin9 = 9;
const int ledPin8 = 8;

void setup() {
  pinMode(ledPin13, OUTPUT);
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin11, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin8, OUTPUT);
}

void loop() {
  digitalWrite(ledPin13, LOW);
  digitalWrite(ledPin12, LOW);
  digitalWrite(ledPin11, HIGH);
  digitalWrite(ledPin10, LOW);
  digitalWrite(ledPin9, LOW);
  digitalWrite(ledPin8, LOW);
  delay(100);
}
