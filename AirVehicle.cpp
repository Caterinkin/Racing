// для воздушных ТС

#include "AirVehicle.h"

// Конструктор
AirVehicle::AirVehicle(const std::string& name, double speed, double distanceReductionCoefficient): Vehicle(name, speed), distanceReductionCoefficient(distanceReductionCoefficient)
{
}

// Метод для расчета времени прохождения дистанции с учетом сокращения расстояния
double AirVehicle::calculateTime(double distance) const
{
    double reducedDistance = distance * (1 - distanceReductionCoefficient / 100);
    return reducedDistance / speed;
}