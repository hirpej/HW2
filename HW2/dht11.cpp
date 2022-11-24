#include "dht11.h"
#include "room.h"
#include "util.cpp"

DHT11::DHT11(double temp_stdev, double hum_stdev)
{
    this->temp_stdev = temp_stdev;
    this->hum_stdev = hum_stdev;
}

DHT11::DHT11(double temp_stdev, double hum_stdev, Room *proom)
{
    this->temp_stdev = temp_stdev;
    this->hum_stdev = hum_stdev;
    this->proom = proom;
}

double DHT11::getTemperature() const
{
    while (true)
    {
        double noise = makeRandomNumber();
        if (noise != -1 || noise != 0 || noise != 1)
        {
            // std::cout << "noise : " << noise << std::endl;
            return (this->proom->getTemperature() + noise);
            break;
        }
    }
}

double DHT11::getHumidity() const
{
    return this->proom->getHumidity();
}

void DHT11::setTemperature(double temp) 
{
    temp_stdev = temp;
}

void DHT11::setHumidity(double hum)
{
    hum_stdev = hum;
}

std::pair<double, double> DHT11::getStdevs()
{
    std::pair<double, double> X{};
    X.first = this->getTemperature();
    X.second = this->getHumidity();
    return X;
}