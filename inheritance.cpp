#include <iostream>
#include <string>
using namespace std;

class vehicle {
    public:
        void move(){
            cout << "Moving..." << endl;
        }
        void park(){
            cout << "Parking..." << endl;
        }
};

class car : public vehicle {
    public:
        void detail(string brand, string model, string year){
            cout << "The brand of my car is " << brand << ", with model " << model << "and year" << year << endl;
        }
};

int main (){
    // Inheritance allows one class to reuse attributes and methods from another class. It helps you write cleaner, more efficient code by avoiding duplication.
    // 1. derived class (child) - the class that inherits from another class
    // 2. base class (parent) - the class being inherited from
    cout << "Inheritance" << endl;

    car my_car;
    my_car.move();
    my_car.detail("lexus","350","2025");
    my_car.park();

}