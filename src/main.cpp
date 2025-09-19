#include "Car.hpp"
#include "Jeep.hpp"
#include "SUV.hpp"
#include "Truck.hpp"
#include <vector>
#include <memory>

int main() {
    std::vector<std::unique_ptr<Vehicle>> vehicles;

    vehicles.push_back(std::make_unique<Car>("Toyota", "Corolla", 2020));
    vehicles.push_back(std::make_unique<Jeep>("Jeep", "Wrangler", 2022));
    vehicles.push_back(std::make_unique<SUV>("Kia", "Sorento", 2021));
    vehicles.push_back(std::make_unique<Truck>("Ford", "F-150", 2019));

    for (const auto& v : vehicles) {
        v->showInfo();
    }

    return 0;
}
