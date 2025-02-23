#pragma once
// Класс для наземных ТС

#ifndef GROUNDVEHICLE_H
#define GROUNDVEHICLE_H

#include "Vehicle.h"

class GroundVehicle : public Vehicle
{
  protected:
    double moveTime;           // Время движения до отдыха (часы)
    double restTimeFirst;      // Время отдыха после первого этапа (часы)
    double restTimeSubsequent; // Время отдыха после последующих этапов (часы)

  public:
    // Конструктор
    GroundVehicle(const std::string& name, double speed, double moveTime, double restTimeFirst, double restTimeSubsequent);

    // Метод для расчета времени прохождения дистанции с учетом отдыха
    double calculateTime(double distance) const override;
};

#endif // GROUNDVEHICLE_H