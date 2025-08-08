#include <iostream>
using namespace std;

int main(){
    // The while loop loops through a block of code as long as a specified condition is true
    int eleven = 1;
    while( eleven < 11){
        cout << "\nit is " << eleven;
        eleven ++;
    }
    int number = 5;
    while(number > 0){
        cout << "\nThis is " << number;
        number--;
    }

    // The do/while loop is a variant of the while loop. 
    // This loop will execute the code block once, before checking if the condition is true. 
    // Then it will repeat the loop as long as the condition is true.

    int digit = 5;
    do {
        cout << "\nThis is the "<< digit <<" do aspect" ;
        digit--;
    } while (digit > 0);

    // This example keeps asking the user to enter a positive number. 
    // The loop stops when the user enters 0 or a negative number

    int user_number;
    cin>> user_number ;
    do {
        cout << "Enter a positive number >> ";
        cin >> user_number ;
    } while (user_number > 0);


}