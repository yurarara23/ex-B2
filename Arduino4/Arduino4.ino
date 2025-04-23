const int sensorPin = 0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int brightness = analogRead(sensorPin);
  int intensity = map(brightness, 0, 1023, 255, 0);
  analogWrite(ledPin, intensity);
  delay(50);
}
