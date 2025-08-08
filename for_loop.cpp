#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    //  Syntax
    //  for (statement 1; statement 2; statement 3) {
    //      code block to be executed
    //  }

    for (int i = 0; i < 5; i++ ){
        cout << "\nThis is " << i ;
    }

    // Statement 1 is executed (one time) before the execution of the code block.
    // Statement 2 defines the condition for executing the code block.
    // Statement 3 is executed (every time) after the code block has been executed.

    for (int j = 0; j < 10; j = j+2){
        cout << "\nThis is " << j ;
    }

    int sum = 0;
    for (int k = 1; k < 5; k ++){
        cout << "\nThis is " << (sum = sum + k);
    }

    for (int l = 5; l < 0; l --){
        cout << "\n" << l ;
    }

    // Nested loop
    // The "inner loop" will be executed one time for each iteration of the "outer loop"


    // MULTIPLICATION TABLE
    for (int i = 1; i < 8; i ++){
        cout << "\nMultiplication table " << i;
        for (int j = 1; j < 12; j++){
            cout << "\n" << i << " x " << j <<  "= " << (i*j) ;
        }
        cout<< "\n";
    }

    // FOR EACH LOOP
    //  Syntax
    //  for (type variableName : arrayName) {
    //      code block to be executed
    //  }

    int my_array[5] = {2,6,3,4,9};
    for (int i : my_array){
        cout << i << "\n" ; 
    }

    string name = "Muqoddim";
    for( int i : name){
        cout<< i << "\n";
    }

    for(int i=0; i<10; i+=2){
        cout << "\n" << i ;
    }

    for (int i = 2; i < 512; i*=2){
        cout << "\n" << i;
    }
}