#include <iostream>
#include <string>
using namespace std;

// Access specifiers controls how the members (attributes and methods) of a class can be accessed

class my_class {
    // PUBLIC - which means that they can be accessed and modified from outside the code
    public:
    int public_int = 7;
    
    // PRIVATE - members cannot be accessed (or viewed) from outside the class
    private:
    int private_int = 10;

    // PROTECTED - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about
    protected:
    int protected_int = 15;
};

int main (){
    cout << "Access specifier" << endl;
    my_class my_class_test;
    cout << my_class_test.public_int ;

}