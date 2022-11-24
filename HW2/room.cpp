#include "room.h"

Room::Room(size_t id, double temperature, double humidity)
{
    this->id = id;
    this->temperature = temperature;
    this->humidity = humidity;
    dht = std::make_unique<DHT11>(temperature, humidity, this);
    dht->setTemperature(dht->getTemperature());
    dht->setHumidity(dht->getHumidity());
}

double Room::getTemperature() const
{
    return temperature;
}

double Room::getHumidity() const
{
    return humidity;
}

void Room::changeTemperatureStdev(double stdev)
{
    temperature = stdev;
}

void Room::changeHumidityStdev(double stdev) const
{
    humidity = stdev;
}