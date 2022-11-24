#ifndef DHT11_H
#define DHT11_H

#include <iostream>
#include <cstdlib> 
#include <ctime>
// #include "room.h"

class Room;

class DHT11
{
private:
    double temp_stdev{1};
    double hum_stdev{1};
    Room *proom;

public:
    DHT11(double temp_stdev, double hum_stdev);
    DHT11(double temp_stdev, double hum_stdev, Room *proom);
    DHT11() = default;

    double getTemperature() const;
    double getHumidity() const;
    void setTemperature(double temp);
    void setHumidity(double hum);
    std::pair<double, double> getStdevs();
};

#endif