int sign=13;
int motorp=12;
int motorn=11;
void setup() {
  // put your setup code here, to run once:]
  pinMode(motorp,OUTPUT);
  pinMode(motorn,OUTPUT);
  pinMode(sign,OUTPUT);
  Serial.begin(9600);
  pinMode(motorp,OUTPUT);

  

}

void loop() {
  digitalWrite(motorp,1);
  digitalWrite(sign,1);
  delay(2000);
  digitalWrite(sign,0);
  delay(2000);
  // put your main code here, to run repeatedly:
//  if(analogRead(A0)>100){
//    Serial.println("high voltage");
//    digitalWrite(motor,1);
//    delay(1000);
//  }else{
//    Serial.println("low voltage");
//    digitalWrite(motor,0);
//    delay(1000);
//  }
}
