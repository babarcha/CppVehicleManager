#pragma once
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(std::string make, std::string model, int year);
    virtual ~Vehicle() = default;

    virtual std::string getType() const = 0;
    virtual void showInfo() const;
};
