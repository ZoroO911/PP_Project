
#include <iostream>
#include <string>
using  namespace std;
#ifndef VEHICLE_H// checks the number of function defined 
#define VEHICLE_H// defines the actual body of the function 


class Vehicle {
protected:
    string brand;
    int horsepower;
public:
    Vehicle(const std::string& b, int hp) : brand(b), horsepower(hp) {}

    // Pure virtual function for polymorphism
    virtual void startEngine() const = 0;
    virtual void stopEngine() const = 0;
    virtual double fuelEfficiency() const = 0;

    virtual void displayInfo() const {
        cout << "Brand: " << brand << "\nHorsepower: " << horsepower << std::endl;
    }
};

#endif 
