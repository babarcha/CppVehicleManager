#include "Vehicle.hpp"
#include <iostream>

Vehicle::Vehicle(std::string make, std::string model, int year)
    : make(std::move(make)), model(std::move(model)), year(year) {}

void Vehicle::showInfo() const {
    std::cout << "[" << getType() << "] "
              << year << " " << make << " " << model << std::endl;
}
