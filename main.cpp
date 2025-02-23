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
        // Выбор типа гонки
        int raceType;
        while (true)
        {
            std::cout << "\nВыберите тип гонки:\n\n1. Наземная\n2. Воздушная\n3. Смешанная\n\nВведите номер: ";
            std::cin >> raceType;

            // Проверка на корректность ввода
            if (raceType >= 1 && raceType <= 3)
            {
                break;
            }
            else
            {
                std::cout << "\nНеверный номер. Пожалуйста, выберите 1, 2 или 3.\n";
            }
        }

        // Ввод расстояния
        std::cout << "\nВведите расстояние для гонки (в км): ";
        double distance;
        std::cin >> distance;

        // Создание гонки
        Race race(distance);

        // Регистрация ТС
        while (true)
        {
            std::cout << "\nВыберите действие:\n\n1. Зарегистрировать ТС\n2. Начать гонку\n\nВведите номер: ";
            int action;
            std::cin >> action;

            if (action == 1)
            {
                // Вывод доступных ТС для регистрации
                std::cout << "\nДоступные ТС для регистрации:\n\n";
                if (raceType == 1 || raceType == 3)
                {
                    std::cout << "1. Верблюд\n2. Верблюд-быстроход\n3. Кентавр\n4. Ботинки-вездеходы\n";
                }
                if (raceType == 2 || raceType == 3)
                {
                    std::cout << "5. Ковёр-самолёт\n6. Орёл\n7. Метла\n";
                }
                std::cout << "\nВведите номер ТС для регистрации (или 0 для выхода): ";
                int vehicleType;
                std::cin >> vehicleType;

                if (vehicleType == 0)
                {
                    break;
                }

                // Регистрация выбранного ТС
                switch (vehicleType)
                {
                case 1:
                    race.addVehicle(std::make_shared<GroundVehicle>("Верблюд", 10, 30, 5, 8));
                    break;
                case 2:
                    race.addVehicle(std::make_shared<GroundVehicle>("Верблюд-быстроход", 40, 10, 5, 6.5));
                    break;
                case 3:
                    race.addVehicle(std::make_shared<GroundVehicle>("Кентавр", 15, 8, 2, 2));
                    break;
                case 4:
                    race.addVehicle(std::make_shared<GroundVehicle>("Ботинки-вездеходы", 6, 60, 10, 5));
                    break;
                case 5:
                    race.addVehicle(std::make_shared<AirVehicle>("Ковёр-самолёт", 10, 0));
                    break;
                case 6:
                    race.addVehicle(std::make_shared<AirVehicle>("Орёл", 8, 6));
                    break;
                case 7:
                    race.addVehicle(std::make_shared<AirVehicle>("Метла", 20, 0));
                    break;
                default:
                    std::cout << "\nНеверный номер ТС.\n";
                    break;
                }
            }
            else if (action == 2)
            {
                break;
            }
            else
            {
                std::cout << "\nНеверный номер действия.\n";
            }
        }

        // Запуск гонки и вывод результатов
        race.runRace();

        // Повтор или выход
        std::cout << "\nВыберите действие:\n\n1. Провести ещё одну гонку\n2. Выйти\n\nВведите номер: ";
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
