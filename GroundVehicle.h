#pragma once
// ����� ��� �������� ��

#ifndef GROUNDVEHICLE_H
#define GROUNDVEHICLE_H

#include "Vehicle.h"

class GroundVehicle : public Vehicle
{
  protected:
    double moveTime;           // ����� �������� �� ������ (����)
    double restTimeFirst;      // ����� ������ ����� ������� ����� (����)
    double restTimeSubsequent; // ����� ������ ����� ����������� ������ (����)

  public:
    // �����������
    GroundVehicle(const std::string& name, double speed, double moveTime, double restTimeFirst, double restTimeSubsequent);

    // ����� ��� ������� ������� ����������� ��������� � ������ ������
    double calculateTime(double distance) const override;
};

#endif // GROUNDVEHICLE_H