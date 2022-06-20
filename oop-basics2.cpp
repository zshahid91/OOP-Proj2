#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

// Parent Class

class Vehicle{
    // Class Members: Attributes & Methods

    int chassis_num = 12345;

    public:
        string brand = "Ford";

        void honk(){ 
            cout << "Beep Beep" << endl;
        }

        void setChassisNum(int s){
            chassis_num = s;
        }

        int getChassisNum(){
            return chassis_num;
        }

};

class Machine{
    public:
        void start(){
            cout << "Machine is starting" << endl;
        }

        int nuts = 1;
};

// Child Class

class Car: public Vehicle{
    public:
        string colour = "Red";
        string FuelType = "Petrol";

};

// Derived Class (grandchild)

class Vehicle2: public Car{
    public:
        float mileage = 0;
};

// Multiple Inheritance

class Vehicle3: public Vehicle, public Machine{
};

int main(){
    Car car;
    car.honk();
    cout << car.brand << endl;

    car.setChassisNum(34544);
    cout << car.getChassisNum() << endl;

    Vehicle2 vehicle2;

    vehicle2.honk();

    vehicle2.setChassisNum(34544);
    cout << vehicle2.getChassisNum() << endl;

    // cout << vehicle2.brand << " " << vehicle2.colour << "   " << vehicle2.FuelType;

    Vehicle3 vehicle3;
    vehicle3.honk(); 
    cout << "    " << vehicle3.nuts;
    return 0;
}