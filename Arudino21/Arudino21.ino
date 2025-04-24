const int sensorPin = A0;  
const int ledPin = 9;      

void setup() {
  Serial.begin(9600);    
  pinMode(ledPin, OUTPUT); 
  Serial.println("LED_Value,CDS_Value"); 
}

void loop() {
  for (int value = 0; value <= 255; value += 5) {
    analogWrite(ledPin, value);         
    delay(100);                       
    int brightness = analogRead(sensorPin); 
    Serial.print(value);
    Serial.print(",");
    Serial.println(brightness);        
  }

  delay(1000); 
}
