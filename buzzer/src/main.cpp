#include <Arduino.h>

#define buzzer 6 // buzzer is connected to D6

void setup() {
  /* tone(pin, frequency, duration) */
  //set buzzer pin to play 264Hz for 300ms = Do
  tone(buzzer, 262, 300);
  //wait 1s
  delay(1000);

  //set buzzer pin to play 297Hz for 300ms = Re
  tone(buzzer, 297, 300);
  //wait 1s
  delay(1000);

  //set buzzer pin to play 330Hz for 300ms = Mi
  tone(buzzer, 330, 300);
  //wait 1s
  delay(1000);
}

void loop() {
  // // put your main code here, to run repeatedly:
  // digitalWrite(buzzer, HIGH);
  // delay(1000);
  // digitalWrite(buzzer, LOW);
  // delay(1000);
}

