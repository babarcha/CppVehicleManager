#pragma once
#include "Vehicle.hpp"

class Car : public Vehicle {
public:
    Car(std::string make, std::string model, int year);
    std::string getType() const override;
};
