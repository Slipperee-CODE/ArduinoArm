#include <cvzone.h>

SerialData serialData(1,1) //number of values, digits per value

int valsRec[1]; //array with size number of values

void setup() {
  serialData.begin();
  pinMode(13,OUTPUT);
}

void loop() {
  serialData.Get(valsRec);
  digitalWrite(13, valsRec[0]);
}