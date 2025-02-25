// Êëàññ äëÿ íàçåìíûõ ÒÑ

#ifndef GROUNDVEHICLE_H
#define GROUNDVEHICLE_H

#include "Vehicle.h"

class GroundVehicle : public Vehicle
{
  protected:
    double moveTime;           // Âðåìÿ äâèæåíèÿ äî îòäûõà (÷àñû)
    double restTimeFirst;      // Âðåìÿ îòäûõà ïîñëå ïåðâîãî ýòàïà (÷àñû)
    double restTimeSubsequent; // Âðåìÿ îòäûõà ïîñëå ïîñëåäóþùèõ ýòàïîâ (÷àñû)

  public:
    // Êîíñòðóêòîð
    GroundVehicle(const std::string& name, double speed, double moveTime, double restTimeFirst, double restTimeSubsequent);

    // Ìåòîä äëÿ ðàñ÷åòà âðåìåíè ïðîõîæäåíèÿ äèñòàíöèè ñ ó÷åòîì îòäûõà
    double calculateTime(double distance) const override;
};

#endif // GROUNDVEHICLE_H
