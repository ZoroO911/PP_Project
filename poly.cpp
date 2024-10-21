#include <iostream>
#include <string>
#include "car.h"
#include "bike.h"
#include "truck.h"
#include "garage.h"
using namespace std;

int main() {
    Garage myGarage;
    int numVehicles;

    cout << "How many vehicles do you want to add to the garage? ";
    cin >> numVehicles;
    
    for (int i = 0; i < numVehicles; ++i) {
        cout << "Enter the type of vehicle (car, bike, truck): ";
        string type;
        cin >> type;

        if (type == "car") {
            string brand;
            int horsepower, numDoors;
            cout << "Enter car brand: ";
            cin >> brand;
            cout << "Enter horsepower: ";
            cin >> horsepower;
            cout << "Enter number of doors: ";
            cin >> numDoors;

            Vehicle* car = new Car(brand, horsepower, numDoors);
            myGarage.addVehicle(car);
        }
        else if (type == "bike") {
            string brand;
            int horsepower;
            cout << "Enter bike brand: ";
            cin >> brand;
            cout << "Enter horsepower: ";
            cin >> horsepower;

            Vehicle* bike = new Bike(brand, horsepower);
            myGarage.addVehicle(bike);
        }
        else if (type == "truck") {
            string brand;
            int horsepower;
            double loadCapacity;
            cout << "Enter truck brand: ";
            cin >> brand;
            cout << "Enter horsepower: ";
            cin >> horsepower;
            cout << "Enter load capacity (in tons): ";
            cin >> loadCapacity;

            Vehicle* truck = new Truck(brand, horsepower, loadCapacity);
            myGarage.addVehicle(truck);
        }
        else {
            cout << "Invalid vehicle type. Please enter car, bike, or truck." << endl;
        }
    }

    // Start all engines
    myGarage.startAllEngines();
    cout << "=========================" << endl;

    // Display vehicle information
    myGarage.displayVehiclesInfo();

    // Stop all engines
    myGarage.stopAllEngines();

    return 0;
}
