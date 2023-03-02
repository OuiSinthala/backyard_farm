#include <Arduino.h>
#include "say_hello.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  greeting();
}