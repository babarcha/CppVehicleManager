#pragma once
#include "Vehicle.hpp"

class Jeep : public Vehicle {
public:
    Jeep(std::string make, std::string model, int year);
    std::string getType() const override;
};
