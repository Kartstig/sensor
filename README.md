# Arduino Sensor Library

## Installation
Download this repo's zip, or see releases.


## Usage

```cpp
#inlcude <Sensor.h>

Sensor MSensor1 = Sensor(SENSOR_PIN);

void setup() {
    Serial.begin(9600);
}

void loop() {
    sensorReading = MSensor1.averageRead();
    Serial.println(sensorReading);
    delay(10);
}

```

