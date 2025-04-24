const int sensorPin = A0;   
const int ledPin = 9;       

const int cycleTime = 20;  

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  Serial.println("HighTime_ms,LowTime_ms,CDS_Value"); 
}

void loop() {
  for (int highTime = 0; highTime <= cycleTime; highTime += 2) {
    int lowTime = cycleTime - highTime;

    digitalWrite(ledPin, HIGH);
    delayMicroseconds(100); // 点灯が安定するまでちょっと待つ

    int brightness = analogRead(sensorPin); // 点灯中に読む！

    delay(highTime); // 点灯時間キープ

    digitalWrite(ledPin, LOW);
    delay(lowTime); // 消灯時間

    // CSV出力
    Serial.print(highTime);
    Serial.print(",");
    Serial.print(lowTime);
    Serial.print(",");
    Serial.println(brightness);
  }

  delay(500); 
}
