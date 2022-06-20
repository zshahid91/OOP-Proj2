#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

class Car{
    // Class Members: Attributes & Methods

    int chassis_num = 12345;
    string license_num = "AB3456";

    public: // Access Specifier
        // Attributes/Properties/Data
        string colour;
        string brand;
        string FuelType;
        float mileage;

        // Methods
        // Inside Class Definition

        void ignition(){
            cout << "The car is starting" << endl;
        }

        void speed_user(float speed){
            cout << "Car is moving at " << speed << " km/h" << endl;
        }

        // Function Overloading
        // 2 or more functions of the same names with different parameters

        int sum(int num1, int num2){
            return num1 + num2;
        }

        float sum(float num1, float num2, float num3){
            return num1 + num2 + num3;
        }

        void cnic_printer(string cnic){
            cout << "CNIC: " << cnic << endl;
        }

        void cnic_printer(double cnic){
            cout << "CNIC: " << fixed << cnic << endl;
        }

        // Outside Class Definition

        // Declaration
        void speed_up(string);

        // Setter
        void setChassisNum(int s, string lnum){
            chassis_num = s;
            license_num = lnum;
        }

        // Getter
        int getChassisNum(){
            return chassis_num;
        }

        void getChassisLicense(){
            cout << "The chassis number is " << chassis_num << endl;
            cout << "The license number is " << license_num << endl;
        }

        // Constructors: Special method

        // Default Constructor

        // Car(){
        //     colour = "red";
        //     FuelType = "petrol";
        //     mileage = 12.5;
        // }

        // Parameterized Constructor
        // Car(string x, string y, float z){
        //     colour = x;
        //     FuelType = y;
        //     mileage = z;
        // }

        // Outside Definition

        // Constructor Declaration
        Car(string x, string y, float z);

    private: // Access specifier
        // Private Members

        // Private Attribute
       

};

// Outside Class Definition
// Scope Resolution Operator

void Car::speed_up(string carName = "Kia"){
    cout << carName << " is speeding up" << endl;
}

Car::Car(string x, string y, float z){
    colour = x;
    FuelType = y;
    mileage = z;
}

int main(){
    float speed = 0, num1 = 0, num2 = 0;
    // string cnic;
    double cnic;
    //Car car2("red", "BMW", 12.5);

    Car toyota("red", "Petrol", 12.5);
    // Car bmw("black", "petrol", 12.5);
    //toyota.license_num = "AB124";
    //bmw.chassis_num = "CD123";

    
    toyota.setChassisNum(54634, "AB123");
    cout << "Chassis Number: " << toyota.getChassisNum() << endl;
    toyota.getChassisLicense();

    // cout << "Enter the mileage of the car = ";
    // cin >> toyota.mileage;

    // toyota.mileage = 14; // Usage of dot notation
    // toyota.brand = "Vitz";
    // toyota.FuelType = "Petrol";
    // toyota.colour = "white";

    cout << "The mileage of the car is " << toyota.mileage << endl;
    cout << "The fuel type of the car is " << toyota.FuelType << endl;
    cout << "Colour is " << toyota.colour << endl;
    //cout << "Chassis num = " << bmw.chassis_num << endl;
    toyota.ignition();

    // cout << "The mileage of the car is " << bmw.mileage << endl;
    // cout << "The fuel type of the car is " << bmw.FuelType << endl;
    // cout << "Colour is " << bmw.colour << endl;

    cout << "Enter the speed of the car = ";
    cin >> speed;
    toyota.speed_user(speed);

    // cout << "Enter the first number = ";
    // cin >> num1;
    // cout << "Enter the second number = ";
    // cin >> num2;

    cout << "The sum of the numbers is " << toyota.sum(2.2, 4, 5) << endl; 

    cout << "Enter the CNIC = ";
    cin >> cnic;
    toyota.cnic_printer(cnic);

    toyota.speed_up("Honda");

    return 0;
}