#include <Arduino.h>

#define LightSensor A0
#define LED 2

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  //read the value of Light Sensor and store to value
  int value = analogRead(LightSensor);
  //if Sensor reading is less than 150 turn on LED
  if (value < 150) {
    //turn on LED
    digitalWrite(LED, HIGH);
    //delay for 1s
    delay(1000);
  } else
  {
    //turn off LED
    digitalWrite(LED, LOW);
    //delay for 1s
    delay(1000);
  }

}