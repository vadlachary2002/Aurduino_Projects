int x=0;
int a=2,b=3,c=4,d=5,e=6,f=7,g=8;
void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
 
  
}

void loop() {
  if(x==1 || x==4)
    digitalWrite(a,HIGH);
  else
    digitalWrite(a,LOW);
  if(x==5 || x==6){
    digitalWrite(b,HIGH);
  }else{
    digitalWrite(b,LOW);
  }
  if(x==2){
    digitalWrite(c,HIGH);
  }else{
    digitalWrite(c,LOW);
  }
  if(x==1 || x==4 || x==7 ){
    digitalWrite(d,HIGH);
  }else{
    digitalWrite(d,LOW);
  }
  if(x==0 || x==2 || x==6 || x==8){
    digitalWrite(e,LOW);
  }else{
    digitalWrite(e,HIGH);
  }
  if(x==1 || x==2 || x==3 || x==7){
    digitalWrite(f,HIGH);
  }else{
    digitalWrite(f,LOW);
  }
  if(x==1 || x==7 || x==0){
    digitalWrite(g,HIGH);
  }else{
    digitalWrite(g,LOW);
  }
 delay(1000);
 if(x>=9){
  x=0;
 }else{
  x++;
 }

}
