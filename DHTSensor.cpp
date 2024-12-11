#include "DHTSensor.h"

DHTSensor::DHTSensor(uint8_t pin) : pin(pin) {}

// Lê e retorna a temperatura
float DHTSensor::getTemperature() {
    sensor.read22(pin);
    return sensor.temperature;
}

// Lê e retorna a umidade
float DHTSensor::getHumidity() {
    sensor.read22(pin);
    return sensor.humidity;
}
