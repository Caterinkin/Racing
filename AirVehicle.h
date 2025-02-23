#pragma once
// ����� ��� ��������� ��

#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle
{
  protected:
    double distanceReductionCoefficient; // ����������� ���������� ���������� (%)

  public:
    // �����������
    AirVehicle(const std::string& name, double speed, double distanceReductionCoefficient);

    // ����� ��� ������� ������� ����������� ��������� � ������ ���������� ����������
    double calculateTime(double distance) const override;
};

#endif // AIRVEHICLE_H