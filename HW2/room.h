#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <memory>
#include "dht11.h"
#include <iomanip>

class Room
{
private:
    size_t id;
    double temperature{28};
    mutable double humidity{95}; //  Make this as last 2 digits of your student no

public:
    Room(size_t id, double temperature, double humidity);
    Room() = default;
    double getTemperature() const;
    double getHumidity() const;
    void changeTemperatureStdev(double stdev);
    void changeHumidityStdev(double stdev) const;
    std::unique_ptr<DHT11> dht;
};

#endif