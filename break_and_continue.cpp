#include <iostream>
#include <string>
using namespace std;

int main (){
    // C++ Break
    // The break statement can also be used to jump out of a loop and switch.

    for (int i = 0; i < 5; i ++){
        if (i == 3){
            break;
        }
        cout<< "\nThis is " << i ;
    }

    // C++ Continue
    // The continue statement breaks one iteration (in the loop), 
    // if a specified condition occurs, 
    // and continues with the next iteration in the loop.

    for (int i = 0; i < 7; i++){
        if (i==3){
            continue;
        }
        cout<< "\nThis is in " << i ;
    }

    int i = 1;
    while(i < 5){
        if (i == 3){
            break;
        }
        cout << "\nThis is for " << i ;
        i ++;
    }
 
    int j = 1;
    while(j < 5){
        if (j == 3){
            i++;
            continue;
        }
        cout << "\nThis is on " << j ;
        j ++;
    }
    int k = 0;
    while (k < 10) {
        if (k == 4) {
            k++;
            continue;
        }
        cout << k << "\n";
        k++;
    }

}