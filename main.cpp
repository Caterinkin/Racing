#include <windows.h>
#include <iostream>
#include <memory>
#include "Race.h"
#include "GroundVehicle.h"
#include "AirVehicle.h"

int main()
{
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    while (true)
    {
        // ����� ���� �����
        int raceType;
        while (true)
        {
            std::cout << "\n�������� ��� �����:\n\n1. ��������\n2. ���������\n3. ���������\n\n������� �����: ";
            std::cin >> raceType;

            // �������� �� ������������ �����
            if (raceType >= 1 && raceType <= 3)
            {
                break;
            }
            else
            {
                std::cout << "\n�������� �����. ����������, �������� 1, 2 ��� 3.\n";
            }
        }

        // ���� ����������
        std::cout << "\n������� ���������� ��� ����� (� ��): ";
        double distance;
        std::cin >> distance;

        // �������� �����
        Race race(distance);

        // ����������� ��
        while (true)
        {
            std::cout << "\n�������� ��������:\n\n1. ���������������� ��\n2. ������ �����\n\n������� �����: ";
            int action;
            std::cin >> action;

            if (action == 1)
            {
                // ����� ��������� �� ��� �����������
                std::cout << "\n��������� �� ��� �����������:\n\n";
                if (raceType == 1 || raceType == 3)
                {
                    std::cout << "1. �������\n2. �������-���������\n3. �������\n4. �������-���������\n";
                }
                if (raceType == 2 || raceType == 3)
                {
                    std::cout << "5. ����-������\n6. ���\n7. �����\n";
                }
                std::cout << "\n������� ����� �� ��� ����������� (��� 0 ��� ������): ";
                int vehicleType;
                std::cin >> vehicleType;

                if (vehicleType == 0)
                {
                    break;
                }

                // ����������� ���������� ��
                switch (vehicleType)
                {
                case 1:
                    race.addVehicle(std::make_shared<GroundVehicle>("�������", 10, 30, 5, 8));
                    break;
                case 2:
                    race.addVehicle(std::make_shared<GroundVehicle>("�������-���������", 40, 10, 5, 6.5));
                    break;
                case 3:
                    race.addVehicle(std::make_shared<GroundVehicle>("�������", 15, 8, 2, 2));
                    break;
                case 4:
                    race.addVehicle(std::make_shared<GroundVehicle>("�������-���������", 6, 60, 10, 5));
                    break;
                case 5:
                    race.addVehicle(std::make_shared<AirVehicle>("����-������", 10, 0));
                    break;
                case 6:
                    race.addVehicle(std::make_shared<AirVehicle>("���", 8, 6));
                    break;
                case 7:
                    race.addVehicle(std::make_shared<AirVehicle>("�����", 20, 0));
                    break;
                default:
                    std::cout << "\n�������� ����� ��.\n";
                    break;
                }
            }
            else if (action == 2)
            {
                break;
            }
            else
            {
                std::cout << "\n�������� ����� ��������.\n";
            }
        }

        // ������ ����� � ����� �����������
        race.runRace();

        // ������ ��� �����
        std::cout << "\n�������� ��������:\n\n1. �������� ��� ���� �����\n2. �����\n\n������� �����: ";
        int choice;
        std::cin >> choice;
        if (choice == 2)
        {
            break;
        }
    }
   system("pause");
   return EXIT_SUCCESS;
}
