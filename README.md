# Arduino Sensor Library

## Installation
### Releases
- [1.0.0](https://github.com/Kartstig/sensor/releases/tag/1.0.0)
1. Download a release
2. Unzip the contents in a folder called Sensor/
3. Copy the folder into <arduino-path>/libraries/.



## Usage

```cpp
#inlcude <Sensor.h>

Sensor MSensor1 = Sensor(SENSOR_PIN);

void setup() {
    Serial.begin(9600);
}

void loop() {
    int sensorReading = MSensor1.averageRead();
    Serial.println(sensorReading);
    delay(10);
}

```

