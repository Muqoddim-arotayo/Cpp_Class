#include <iostream>
#include <string>
using namespace std;


class car {                 // The class
    public:                 // Access specifier
        void move (){       // Inside class definition
            cout << "\n" << "vroom vroom";
        }
        void stop();
};

void stop (){
    cout << "\nShrrrrr ";
}

int main (){
    // CLASS METHODS
    // Methods are functions that belomg to a class
    // 1. Inside class definition
    // 2. outside class definition

    car camry;
    camry.move();
    camry.stop();
    return 0;


}