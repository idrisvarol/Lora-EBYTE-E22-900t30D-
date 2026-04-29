////// ALICI

#include <SoftwareSerial.h>
SoftwareSerial FixSerial(D4, D5); 
 
#define M0 D0
#define M1 D1
byte upperByte, lowerByte;
int newInt=0;
 
void setup() {
  Serial.begin(115200);
   
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  digitalWrite(M0, LOW);
  digitalWrite(M1, LOW);
   
  FixSerial.begin(9600);
}
 
void loop() {
  if (FixSerial.available() > 1) {
    upperByte = FixSerial.read();
    lowerByte = FixSerial.read();
 
    newInt = (upperByte << 8) + lowerByte;
    Serial.print("Sayi= ");
    Serial.println(newInt);
  }
}
