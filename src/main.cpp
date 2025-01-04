#include <Arduino.h>
#include "../include/pins_creality_v114.h"
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
pinMode(FAN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(FAN_PIN, HIGH);   // turn the FAN_PIN on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(FAN_PIN, LOW);    // turn the FAN_PIN off by making the voltage LOW
  delay(1000);// put your main code here, to run repeatedly:
}
