#include <Arduino.h>
#include "soil_sensor.h"
#include "ldr.h"

void setup() {
  Serial.begin(9600);
  pinMode(ldr, INPUT);
}

void loop() {
  sinh();
}