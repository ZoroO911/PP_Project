
#include <iostream>
#include <string>
#include "car.h"
#include "bike.h"
#include "truck.h"
#include "garage.h"
using  namespace std;

int main() {
    Garage myGarage;

    // Create some vehicles and add them to the garage
    Vehicle* car1 = new Car("Toyota", 150, 4);
    Vehicle* bike1 = new Bike("Honda", 100);
    Vehicle* truck1 = new Truck("Volvo", 400, 10.0);
    Vehicle* car2 = new Car("BMW",360,2);

    myGarage.addVehicle(car1);
    myGarage.addVehicle(car2);
    myGarage.addVehicle(bike1);
    myGarage.addVehicle(truck1);

    // Start all engines
    myGarage.startAllEngines();
    cout << "=========================" << endl;

    // Display vehicle information
    myGarage.displayVehiclesInfo();

    // Stop all engines
    myGarage.stopAllEngines();

    return 0;
}
