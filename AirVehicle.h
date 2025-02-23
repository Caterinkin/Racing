#pragma once
// Класс для воздушных ТС

#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle
{
  protected:
    double distanceReductionCoefficient; // Коэффициент сокращения расстояния (%)

  public:
    // Конструктор
    AirVehicle(const std::string& name, double speed, double distanceReductionCoefficient);

    // Метод для расчета времени прохождения дистанции с учетом сокращения расстояния
    double calculateTime(double distance) const override;
};

#endif // AIRVEHICLE_H