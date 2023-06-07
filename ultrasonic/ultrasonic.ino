int trig=10;
int echo=9;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  long distance,duration;
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)/29.1;
  if(distance>=100 || distance<=0){
    Serial.println("out of range");
  }
  else{
    Serial.println(distance);
  }

}
