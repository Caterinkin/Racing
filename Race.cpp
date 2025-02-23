// ��� �����
#include "Race.h"
#include <algorithm>
#include <iostream>

// �����������
Race::Race(double distance): distance(distance)
{
}

// ����� ��� ���������� �� � �����
void Race::addVehicle(std::shared_ptr<Vehicle> vehicle)
{
    vehicles.push_back(vehicle);
}

// ����� ��� ������� ����� � ������ �����������
void Race::runRace() const
{
    std::vector<std::pair<std::string, double>> results; // ������ ��� �������� �����������

    // ������������ ����� ��� ������� ��
    for (const auto& vehicle : vehicles)
    {
        double time = vehicle->calculateTime(distance);
        results.emplace_back(vehicle->getName(), time);
    }

    // ��������� ���������� �� ������� (�� �������� � ��������)
    std::sort(results.begin(), results.end(), [](const auto& a, const auto& b)
        { return a.second < b.second; });

    // ������� ����������
    std::cout << "\n���������� �����:\n\n";
    for (const auto& result : results)
    {
        std::cout << result.first << ": " << result.second << " �����\n";
    }
}