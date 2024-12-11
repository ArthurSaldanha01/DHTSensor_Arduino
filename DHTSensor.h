#ifndef DHTSENSOR_H
#define DHTSENSOR_H

#include <dht.h>

class DHTSensor {
  private:
    uint8_t pin;
    dht sensor;
  public:
    DHTSensor(uint8_t pin);  // Construtor
    float getTemperature(); // Retorna a temperatura
    float getHumidity();    // Retorna a umidade
};

#endif
