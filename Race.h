#pragma once
// ����� ��� �����

#ifndef RACE_H
#define RACE_H

#include <vector>
#include <memory>
#include "Vehicle.h"

class Race
{
  private:
    std::vector<std::shared_ptr<Vehicle>> vehicles; // ������ ������������������ ��
    double distance;                                // ��������� ����� (��)

  public:
    // �����������
    Race(double distance);

    // ����� ��� ���������� �� � �����
    void addVehicle(std::shared_ptr<Vehicle> vehicle);

    // ����� ��� ������� ����� � ������ �����������
    void runRace() const;
};

#endif // RACE_H