const int sensorPin = 0;
const int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int brightness = analogRead(sensorPin);
  Serial.println(brightness);
  int intensity = map(brightness, 0, 1023, 255, 0);
  Serial.println(intensity);
  analogWrite(ledPin, intensity);
  delay(50);
}
