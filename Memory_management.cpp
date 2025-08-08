#include <iostream>
#include <string>
using namespace std;

int main(){
    // Memory management is the process of controlling how much memory your program uses - and how it is used. 
    // This includes creating, using, and releasing memory when it's no longer needed.
    int my_num = 8;
    string my_name = "muqoddim";

    // You can check how much memory a variable type uses with the sizeof operator
    cout << sizeof(my_num);
    cout << "\n" << sizeof(my_name) ;

    // CREATE A MEMORY SPACE

    int* my_int_ptr = new int;
    *my_int_ptr = 35;
    cout << "\n" << *my_int_ptr;

    // CLEAN UP MEMORY SPACE

    delete my_int_ptr;
    cout << my_int_ptr ;


    // If you forget to delete memory, your program will still run, but it may use more and more memory over time.
    // This is called a MEMORY LEAK, and it can slow down or crash your program over time.

    // Dynamic arrays are useful when you don't know the size of the array in advance
    // like when the size depends on user input or other values that are not known at the start of the program.

    // WHEN TO USE NEW KEYWORD
    // 1. You don't know how much memory you'll need in advance (like how many guests or scores)
    // 2. You want to create memory while the program is running, based on user input
    // 3. You need to store large or flexible amounts of data
    // 4. You want full manual control over memory (e.g., performance-critical code)
}