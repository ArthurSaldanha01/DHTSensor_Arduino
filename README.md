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
  Serial.print("Temperature (\u00B0C): ");
  Serial.println(ambiente.getTemperature());
  Serial.print("Humidity (%): ");
  Serial.println(ambiente.getHumidity());
  delay(2000);
}
```

## Dependencies
This library depends on the DHTlib library. To install it:

1. Open the Arduino IDE.
2. Navigate to **Sketch > Include Library > Manage Libraries**.
3. Search for **DHTlib** and click **Install**.

## License
This library is open-source and licensed under the MIT License. Feel free to use, modify, and distribute it.
