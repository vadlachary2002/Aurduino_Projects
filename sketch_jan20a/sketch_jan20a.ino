int chary=13;
void setup() {
  // put your setup code here, to run once:

  pinMode(chary,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(chary,HIGH);
  delay(1000);
  digitalWrite(chary,LOW);
  delay(500);

}
