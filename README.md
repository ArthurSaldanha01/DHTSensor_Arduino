# DHTSensor Library

A lightweight Arduino library for reading temperature and humidity data from the DHT22 sensor. Designed for modularity and easy integration into IoT projects.

## Features
- Simple API for reading temperature and humidity.
- Designed for DHT22 sensors.
- Lightweight and efficient.
- Compatible with any Arduino board.

## Installation
1. Download this repository as a ZIP file.
2. Extract the `DHTSensor` folder into your Arduino `libraries` directory:
   - **Windows**: `Documents/Arduino/libraries/`
   - **Linux/Mac**: `~/Arduino/libraries/`
3. Restart the Arduino IDE.

## Usage
### Example Code
```cpp
#include <DHTSensor.h>

#define DHT22_PIN 7

DHTSensor ambiente(DHT22_PIN);

void setup() {
  Serial.begin(9600);
  Serial.println("Starting DHTSensor...");
}

void loop() {
  Serial.print("Temperature (°C): ");
  Serial.println(ambiente.getTemperature());
  Serial.print("Humidity (%): ");
  Serial.println(ambiente.getHumidity());
  delay(2000);
}
