// Áàçîâûé êëàññ äëÿ ÒÑ

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle
{
  protected:
    std::string name; // Íàçâàíèå ÒÑ
    double speed;     // Ñêîðîñòü ÒÑ (êì/÷)

  public:
    // Êîíñòðóêòîð
    Vehicle(const std::string& name, double speed);

    // Âèðòóàëüíûé ìåòîä äëÿ ðàñ÷åòà âðåìåíè ïðîõîæäåíèÿ äèñòàíöèè
    virtual double calculateTime(double distance) const = 0;

    // Ãåòòåð äëÿ íàçâàíèÿ ÒÑ
    std::string getName() const;

    // Ãåòòåð äëÿ ñêîðîñòè ÒÑ
    double getSpeed() const;
};

#endif // VEHICLE_H
