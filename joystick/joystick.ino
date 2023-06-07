

void setup() {
  // put your setup code here, to run once:
  Serial.begin(96000);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X=");
  Serial.println(analogRead(A0));
  Serial.print("Y=");
  Serial.println(analogRead(A0));
  if(analogRead(A3)){
    Serial.print("button clicked");
  }
  

}
