#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>
#define LED 13
 int value;
void setup() {
Serial.begin(9600);
}

void loop() {
 for(value = 0; value <= 255;value++){
     analogWrite(LED,value);
	 delay (10);
 }
 for(value = 255;value >= 0; value--){
    analogWrite(LED,value);
	 delay(10);

 }
 Serial.println();
  delay(10);
}
