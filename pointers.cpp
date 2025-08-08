#include <iostream>
#include <string>
using namespace std;

int main(){
    // int var = 8;
    // int* ptr = &var;
    // *ptr = 10;
    // cout << var;
    // cin.get(); 

    // A pointer is a variable that stores the memory address as its value.
    // A pointer is an integer that stores a memory address
    // A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. 
    // The address of the variable you're working with is assigned to the pointer

    string my_name = "muqoddim";
    string* my_name_ptr = &my_name;
    // can also be created as :
    // string *my_name_ptr = &my_name;
    // string * my_name_ptr = &my_name;

    cout << my_name;
    cout << "\n" << my_name_ptr;
    cout << "\n" << &my_name;

    // DEREFRENCING
    // Dereferencing is used to get the value of the variable, by using the * operator

    cout << "\n" << *my_name_ptr;

    // Note that the * sign can be confusing here, as it does two different things in our code:

    // When used in declaration (string* ptr), it creates a pointer variable.
    // When not used in declaration, it act as a dereference operator.

    // MODIFYING POINTERS
    // This is used to modify the value of the pointer

    *my_name_ptr = "eniola";
    cout << "\n" << *my_name_ptr;
    cout << "\n" << my_name;


    char* buffer = new char[12];
    *buffer =  'operator';
    cout << "\n" << sizeof(buffer) ;
    cout << "\n" << *buffer;

}

