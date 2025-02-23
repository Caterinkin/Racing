# Минимальная версия CMake
cmake_minimum_required(VERSION 3.22.0)

# Название проекта
project(RaceSimulator)

# Добавление исполняемого файла
add_executable(RaceSimulator
    main.cpp
    Vehicle.cpp
    GroundVehicle.cpp
    AirVehicle.cpp
    Race.cpp
    Vehicle.h
    GroundVehicle.h
    AirVehicle.h
    Race.h

)

