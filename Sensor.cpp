/*
  Sesnor.h - Sensory Library
  Copyright (c) 2020 Herman Singh.  All right reserved.
*/

#include "Arduino.h"

#include "Sensor.h"

Sensor::Sensor(int pin) {
  pin = pin;

  pinMode(pin, INPUT);
}

int Sensor::averageRead(void) {
  int i=0;
  int sum = 0;
  while (i < READ_COUNT ) {
    int read = analogRead(pin);
    sum += read;
    i++;
  }
  const float avg = (float) sum / (float) READ_COUNT;
  return ROUND(avg);
}
