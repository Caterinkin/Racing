//�������

#include "Vehicle.h"

// �����������
Vehicle::Vehicle(const std::string& name, double speed): name(name), speed(speed)
{
}

// ������ ��� �������� ��
std::string Vehicle::getName() const
{
    return name;
}

// ������ ��� �������� ��
double Vehicle::getSpeed() const
{
    return speed;
}