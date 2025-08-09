#include <iostream>
#include <string>
using namespace std;


enum Example : unsigned char {
    A = 0,B = 4,C =5
};

int a = 0;
int b = 1;
int c = 2;

int main (){
    // An enum is a special type that represents a group of constants (unchangeable values).
    cout << "ENUMS";

    Example value = C;

    if (value == B){

    }
}