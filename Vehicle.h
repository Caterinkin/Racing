#pragma once
// ������� ����� ��� ��

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
  protected:
    std::string name; // �������� ��
    double speed;     // �������� �� (��/�)

  public:
    // �����������
    Vehicle(const std::string& name, double speed);

    // ����������� ����� ��� ������� ������� ����������� ���������
    virtual double calculateTime(double distance) const = 0;

    // ������ ��� �������� ��
    std::string getName() const;

    // ������ ��� �������� ��
    double getSpeed() const;
};

#endif // VEHICLE_H