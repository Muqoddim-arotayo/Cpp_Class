#include <iostream>
using namespace std;


int main(){
    // Use the switch statement to select one of many code blocks to be executed.
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        default:
            cout << "It is a lovely day...";
        // The default keyword specifies some code to run if there is no case match
    }
}