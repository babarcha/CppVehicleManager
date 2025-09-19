cmake_minimum_required(VERSION 3.12)
project(VehicleProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(VehicleProject
    src/main.cpp
    src/Vehicle.cpp
    src/Car.cpp
    src/Jeep.cpp
    src/SUV.cpp
    src/Truck.cpp
)
