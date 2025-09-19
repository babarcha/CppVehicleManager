#include "Car.hpp"

Car::Car(std::string make, std::string model, int year)
    : Vehicle(std::move(make), std::move(model), year) {}

std::string Car::getType() const {
    return "Car";
}
