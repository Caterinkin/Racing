//базовый

#include "Vehicle.h"

// Конструктор
Vehicle::Vehicle(const std::string& name, double speed): name(name), speed(speed)
{
}

// Геттер для названия ТС
std::string Vehicle::getName() const
{
    return name;
}

// Геттер для скорости ТС
double Vehicle::getSpeed() const
{
    return speed;
}