//// VERİCİ
//
#include <SoftwareSerial.h>
SoftwareSerial FixSerial(D4, D5); 
 
#define M0 D0
#define M1 D1
 
void setup() {
  Serial.begin(115200);
 
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  digitalWrite(M0, LOW);
  digitalWrite(M1, LOW);
 
  FixSerial.begin(9600);
}
 
void loop() {
  FixSerial.write((byte)0x00); //Alıcı Adresi HIGH
  FixSerial.write(1);       //Alıcı Adresi LOW
  FixSerial.write(18);       //Alıcı Kanalı =0x17=23    (410M+23=433 MHz)
 
  intGonder(12345); // Bu Sayıyı Göndereceğiz ->
  delay(1000);
}
 
void intGonder(int sayi) {
  FixSerial.write(highByte (sayi));
  FixSerial.write(lowByte (sayi));
}
