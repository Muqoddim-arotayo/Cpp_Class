#include <iostream>
#include <string>
using namespace std;


class Dog {
    public:
        void bark(int speed){
            cout << speed << "Woof!\n";
        }
};

class car {                 // The class
    public:                 // Access specifier
        void move (int speed){       // Inside class definition
            cout << speed << "vroom vroom";
        }
        void stop_1(int speed);
};

// Method/function definition outside the class
void car::stop_1(int speed){
    cout << "\n" << speed << "Shrrr shrr ";
}

int main (){
    // CLASS METHODS
    // Methods are functions that belomg to a class
    // 1. Inside class definition
    // 2. outside class definition

    Dog bingo;
    bingo.bark(900);

    car camry;
    camry.move(800);
    camry.stop_1(-800);
    return 0;

}
