#pragma once
#include "Vehicle.hpp"

class SUV : public Vehicle {
public:
    SUV(std::string make, std::string model, int year);
    std::string getType() const override;
};
