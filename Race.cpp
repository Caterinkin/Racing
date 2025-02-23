// для гонки
#include "Race.h"
#include <algorithm>
#include <iostream>

// Конструктор
Race::Race(double distance): distance(distance)
{
}

// Метод для добавления ТС в гонку
void Race::addVehicle(std::shared_ptr<Vehicle> vehicle)
{
    vehicles.push_back(vehicle);
}

// Метод для запуска гонки и вывода результатов
void Race::runRace() const
{
    std::vector<std::pair<std::string, double>> results; // Вектор для хранения результатов

    // Рассчитываем время для каждого ТС
    for (const auto& vehicle : vehicles)
    {
        double time = vehicle->calculateTime(distance);
        results.emplace_back(vehicle->getName(), time);
    }

    // Сортируем результаты по времени (от меньшего к большему)
    std::sort(results.begin(), results.end(), [](const auto& a, const auto& b)
        { return a.second < b.second; });

    // Выводим результаты
    std::cout << "\nРезультаты гонки:\n\n";
    for (const auto& result : results)
    {
        std::cout << result.first << ": " << result.second << " часов\n";
    }
}