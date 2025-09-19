#include "SUV.hpp"

SUV::SUV(std::string make, std::string model, int year)
    : Vehicle(std::move(make), std::move(model), year) {}

std::string SUV::getType() const {
    return "SUV";
}
