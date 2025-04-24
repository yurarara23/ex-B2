const int sensorPin = A0;   
const int ledPin = 9;       

const int cycleTime = 100;  

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("HighTime_ms,LowTime_ms,CDS_Value"); 
}

void loop() {
  for (int highTime = 0; highTime <= cycleTime; highTime += 10) {
    int lowTime = cycleTime - highTime;

    digitalWrite(ledPin, HIGH);
    delay(highTime);
    digitalWrite(ledPin, LOW);
    delay(lowTime);

    int brightness = analogRead(sensorPin);

    // CSV出力
    Serial.print(highTime);
    Serial.print(",");
    Serial.print(lowTime);
    Serial.print(",");
    Serial.println(brightness);
  }

  delay(1000); 
}
