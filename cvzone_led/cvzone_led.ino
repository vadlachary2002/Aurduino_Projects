#include <cvzone.h>
SerialData serialData(1,1);//num of values , digites per value



int valuesRec[1];
void setup() {
  serialData.begin();
  pinMode(13,OUTPUT);

}

void loop() {
  serialData.Get(valuesRec);
  digitalWrite(13,valuesRec[0]);

}
