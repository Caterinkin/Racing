// Êëàññ äëÿ âîçäóøíûõ ÒÑ

#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

#include "Vehicle.h"

class AirVehicle : public Vehicle
{
  protected:
    double distanceReductionCoefficient; // Êîýôôèöèåíò ñîêðàùåíèÿ ðàññòîÿíèÿ (%)

  public:
    // Êîíñòðóêòîð
    AirVehicle(const std::string& name, double speed, double distanceReductionCoefficient);

    // Ìåòîä äëÿ ðàñ÷åòà âðåìåíè ïðîõîæäåíèÿ äèñòàíöèè ñ ó÷åòîì ñîêðàùåíèÿ ðàññòîÿíèÿ
    double calculateTime(double distance) const override;
};

#endif // AIRVEHICLE_H
