#ifndef GARAGE_H// checks the number of function defined 
#define GARAGE_H// defines the actual body of the function 
using  namespace std;

#include <iostream>
#include <string>
#include <vector>  // Needed for vector array
#include "vehicle.h"  // Assuming you have a vehicle base class with virtual methods

class Garage {
private:
    vector<Vehicle*> vehicles;  // Polymorphic storage of vehicles
public:
    // Add a vehicle to the garage
    void addVehicle(Vehicle* v) {
        vehicles.push_back(v);
    }

    // Start all engines in the garage
    void startAllEngines() const {
        for (const auto& v : vehicles) {
            v->startEngine();  // Assuming Vehicle has a virtual startEngine() method
        }
    }

    // Stop all engines in the garage
    void stopAllEngines() const {
        for (const auto& v : vehicles) {
            v->stopEngine();  // Assuming Vehicle has a virtual stopEngine() method
        }
    }

    // Display information of all vehicles
    void displayVehiclesInfo() const {
        for (const auto& v : vehicles) {
            v->displayInfo();  // Assuming Vehicle has a virtual displayInfo() method
            cout << "Fuel Efficiency: " << v->fuelEfficiency() << " km/l" << endl;  // Assuming fuelEfficiency() is a virtual method
            cout << "---------------------------" << endl;
        }
    }
};

#endif 
