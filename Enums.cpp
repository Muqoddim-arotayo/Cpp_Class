#include <iostream>
#include <string>
using namespace std;

enum Example : unsigned char {
    A, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main (){
    // An enum is a special type that represents a group of constants (unchangeable values).
    // Enum is a set of value, it is a way of giving name to a value 

    // Whenever you want a set of value that you want to represent numerically, an enum is the way to go.
    cout << "ENUMS";

    Example value = A;

    if (value == A){
        cout << "Yes it is !!";
    }

    
}