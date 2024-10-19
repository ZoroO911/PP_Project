#include <iostream>
#include <string>
using  namespace std;
#ifndef BIKE_H// checks the number of function defined 
#define BIKE_H// defines the actual body of the function 

#include "vehicle.h"

class Bike : public Vehicle {
public:
    Bike(const string& b, int hp) : Vehicle(b, hp) {}

    void startEngine() const override {
        cout << brand << " bike's engine started with " << horsepower << " HP." << endl;
    }

    void stopEngine() const override {
        cout << brand << " bike's engine stopped." << endl;
    }

    double fuelEfficiency() const override {
        return horsepower * 0.1; // Different calculation for bikes
    }
};

#endif 
