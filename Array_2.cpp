#include <iostream>
#include <string>
using namespace std;

int main (){
    cout << "Arrays !!!" << endl;

    int example[5];
    example[0] = 2;
    example[1] = 2;
    example[2] = 2;
    example[3] = 2;
    example[4] = 2;

    for (int i = 0; i < 5; i++){
        example[i] = 2;
    }


    int* new_int = new int[8];
    for (int i = 0; i < 5; i++){
        new_int[i] = 2;
    } // It can cause the indirection of data

    // Size - byte
    // count - number of elements
    delete[] new_int;


    int a = example[0];

    cout << example[0] << endl;
    cout << example << endl;
}