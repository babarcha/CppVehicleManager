#include "Jeep.hpp"

Jeep::Jeep(std::string make, std::string model, int year)
    : Vehicle(std::move(make), std::move(model), year) {}

std::string Jeep::getType() const {
    return "Jeep";
}
