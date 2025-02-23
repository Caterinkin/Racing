#pragma once
// Базовый класс для ТС

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
  protected:
    std::string name; // Название ТС
    double speed;     // Скорость ТС (км/ч)

  public:
    // Конструктор
    Vehicle(const std::string& name, double speed);

    // Виртуальный метод для расчета времени прохождения дистанции
    virtual double calculateTime(double distance) const = 0;

    // Геттер для названия ТС
    std::string getName() const;

    // Геттер для скорости ТС
    double getSpeed() const;
};

#endif // VEHICLE_H