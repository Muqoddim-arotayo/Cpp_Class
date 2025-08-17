#include <iostream>
using namespace std;

int main(){
    bool is_coding_fun = true; 
    bool is_fish_tasty = false;
    cout << is_coding_fun ;
    cout << is_fish_tasty ;

    int ten = 10;
    int eleven = 11;
    cout << "\n" << (eleven > ten); // returns 1 (true), because 11 is higher than 10
    cout << "\n" << (eleven == ten); // returns 0 (false), because 11 is not equal to 10
}