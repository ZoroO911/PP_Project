#include <iostream>
#include <string>
using  namespace std;
#ifndef CAR_H// checks the number of function defined 
#define CAR_H// defines the actual body of the function 

#include "vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;
public:
    Car(const string& b, int hp, int doors) : Vehicle(b, hp), numDoors(doors) {}

    void startEngine() const override {
        cout << brand << " car's engine started with " << horsepower << " HP." << endl;
    }

    void stopEngine() const override {
        cout << brand << " car's engine stopped." << endl;
    }

    double fuelEfficiency() const override {
        return horsepower * 0.05; // Simple calculation for fuelefficiency
    }

    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Doors: " << numDoors << endl;
    }
};

#endif 