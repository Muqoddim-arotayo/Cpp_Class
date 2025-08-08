#include <iostream>
#include <string>
using namespace std;


void increment (int& value){
    (value)++;
    cout << "\n" << value;
}

int main(){
    // A reference variable is an alias for an existing variable. It is created using the & operator:
    //  Reference are just pointers in disguise

    int a = 5;
    int& ref_a = a ; // an alias
    ref_a = 2;
    cout << "\n" << ref_a;
    cout << "Reference";

    int b = 10;
    increment(b);
}