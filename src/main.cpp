#include <Arduino.h>
const int LED = 5;

void setup()
{
}

void loop()
{
  analogWrite(LED, 51); //20%
  delay(1000);
  analogWrite(LED, 103); //40%
  delay(1000);
  analogWrite(LED, 154);
  delay(1000);
  analogWrite(LED, 205);
  delay(1000);
  analogWrite(LED, 255);
  delay(1000);
}