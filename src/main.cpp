#include <Arduino.h>


void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Hello LabMaker from MS");
  delay(1000);
}
