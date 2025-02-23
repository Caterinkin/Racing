// ��� ��������� ��

#include "AirVehicle.h"

// �����������
AirVehicle::AirVehicle(const std::string& name, double speed, double distanceReductionCoefficient): Vehicle(name, speed), distanceReductionCoefficient(distanceReductionCoefficient)
{
}

// ����� ��� ������� ������� ����������� ��������� � ������ ���������� ����������
double AirVehicle::calculateTime(double distance) const
{
    double reducedDistance = distance * (1 - distanceReductionCoefficient / 100);
    return reducedDistance / speed;
}