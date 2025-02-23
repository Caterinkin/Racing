// ��� �������� ��

#include "GroundVehicle.h"

// �����������
GroundVehicle::GroundVehicle(const std::string& name, double speed, double moveTime, double restTimeFirst, double restTimeSubsequent): Vehicle(name, speed), moveTime(moveTime), restTimeFirst(restTimeFirst), restTimeSubsequent(restTimeSubsequent)
{
}

// ����� ��� ������� ������� ����������� ��������� � ������ ������
double GroundVehicle::calculateTime(double distance) const
{
    double totalTime = 0;
    double remainingDistance = distance;

    while (remainingDistance > 0)
    {
        double distanceCovered = speed * moveTime;
        if (distanceCovered >= remainingDistance)
        {
            totalTime += remainingDistance / speed;
            break;
        }
        totalTime += moveTime;
        remainingDistance -= distanceCovered;

        if (remainingDistance > 0)
        {
            totalTime += (totalTime == moveTime) ? restTimeFirst : restTimeSubsequent;
        }
    }

    return totalTime;
}