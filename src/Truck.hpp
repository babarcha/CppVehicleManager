#pragma once
#include "Vehicle.hpp"

class Truck : public Vehicle {
public:
    Truck(std::string make, std::string model, int year);
    std::string getType() const override;
};
