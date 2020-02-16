/*
  Sensor.h - Sensor Library
  Copyright (c) 2020 Herman Singh.  All right reserved.
*/

#define ROUND(x) ((x)>=0?(long)((x)+0.5):(long)((x)-0.5))

#ifndef READ_COUNT
#define READ_COUNT 5
#endif

#ifndef Sensor_H
#define Sensor_H

class Sensor
{
  public:
    Sensor(int pin);
    int averageRead(void);

  private:
    int pin;
};

#endif
