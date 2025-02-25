// Êëàññ äëÿ ãîíêè

#ifndef RACE_H
#define RACE_H

#include <vector>
#include <memory>
#include "Vehicle.h"

class Race
{
  private:
    std::vector<std::shared_ptr<Vehicle>> vehicles; // Ñïèñîê çàðåãèñòðèðîâàííûõ ÒÑ
    double distance;                                // Äèñòàíöèÿ ãîíêè (êì)

  public:
    // Êîíñòðóêòîð
    Race(double distance);

    // Ìåòîä äëÿ äîáàâëåíèÿ ÒÑ â ãîíêó
    void addVehicle(std::shared_ptr<Vehicle> vehicle);

    // Ìåòîä äëÿ çàïóñêà ãîíêè è âûâîäà ðåçóëüòàòîâ
    void runRace() const;
};

#endif // RACE_H
