#include <iostream>

using namespace std;

// BASE CLASS
class Vehicle{
    int numWheels;
    int range;
public:
    Vehicle(int w, int r){
        numWheels = w;
        range = r;
    }
    void showVehicle(){
        cout << "wheels: " << numWheels << endl;
        cout << "range: " << range << endl;
    }
};

class Car : public Vehicle{
    int passengers;
public:
    Car(int p, int w, int r) : Vehicle(w, r){
        passengers = p;
    }
    void show(){
        showVehicle();
        cout << "Passengers: " << passengers << endl;
    }
};

class Truck : public Vehicle{
    int loadLimit;
public:
    Truck(int l, int w, int r) : Vehicle(w,r){
        loadLimit = l;
    }
    void show(){
        showVehicle();
        cout << "Load limit: " << loadLimit << endl;
    }
};

int main()
{
    Vehicle v(0, 0);
    Car c(5,4,500);
    Truck t(30000, 12, 1200);

    cout << "vehicle: " << endl;
    v.showVehicle();
    cout << "car: " << endl;
    c.show();
    cout << "truck: " << endl;
    t.show();
    return 0;
}
