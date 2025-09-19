#include "Truck.hpp"

Truck::Truck(std::string make, std::string model, int year)
    : Vehicle(std::move(make), std::move(model), year) {}

std::string Truck::getType() const {
    return "Truck";
}
