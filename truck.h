#include <iostream>
#include <string>
#ifndef TRUCK_H // checks the number of function defined 
#define TRUCK_H // defines the actual body of the function 
using  namespace std;
#include "vehicle.h"

class Truck : public Vehicle {
private:
    double maxLoadCapacity; //In tons
public:
    Truck(const string& b, int hp, double capacity) : Vehicle(b, hp), maxLoadCapacity(capacity) {}

    void startEngine() const override {
        cout << brand << " truck's engine started with " << horsepower << " HP." << endl;
    }

    void stopEngine() const override {
        cout << brand << " truck's engine stopped." << endl;
    }

    double fuelEfficiency() const override {
        return horsepower * 0.03; // Truck take more load than bike and cars 
    }

    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Max Load Capacity: " << maxLoadCapacity << " tons" << endl;
    }
};

#endif