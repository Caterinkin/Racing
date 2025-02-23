#pragma once
// Класс для гонки

#ifndef RACE_H
#define RACE_H

#include <vector>
#include <memory>
#include "Vehicle.h"

class Race
{
  private:
    std::vector<std::shared_ptr<Vehicle>> vehicles; // Список зарегистрированных ТС
    double distance;                                // Дистанция гонки (км)

  public:
    // Конструктор
    Race(double distance);

    // Метод для добавления ТС в гонку
    void addVehicle(std::shared_ptr<Vehicle> vehicle);

    // Метод для запуска гонки и вывода результатов
    void runRace() const;
};

#endif // RACE_H