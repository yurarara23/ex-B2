int RledPin = 9;
int BledPin = 8;
int GledPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(RledPin,OUTPUT);
  pinMode(GledPin,OUTPUT);
  pinMode(BledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RledPin,HIGH);
  digitalWrite(GledPin,HIGH);
  digitalWrite(BledPin,HIGH);
}