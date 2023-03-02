#include <Arduino.h>
#define ldr A0

void sinh(){
   int value = analogRead(ldr);
   int tvalue = map(value, 0, 800, 100, 0);
   if(tvalue < 0){
    tvalue = 0;
   }
   Serial.print("LDR: ");
   Serial.print(tvalue);
   Serial.println("%");
   delay(1000);
}