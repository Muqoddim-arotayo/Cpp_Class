#include <iostream>
#include <string>
using namespace std;

class Entity {
    public:
    float X,Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
    }

    Entity (float x, float y){
        X = x;
        Y = y;
    }

    void Print (){
        cout << X << " , " << Y << endl;
    }
};

class Log {
public:
    static void write (){

    }
};

class car{
    public:
    string brand, model, year;

    // Consttructor overloading occurs when you have more than one contructors in the same class
    // Constructor overloading lets you create objects with custom values.

    car (){
        brand = "UNKNOWN";
        model = "UNKNOWN";
        year = "UNKNOWN";
    }

    // Constructor inside a function
    // car(string a, string b, string c){
    //     brand = a;
    //     model = b;
    //     year = c;
    // }
    car(string a, string b, string c);

};

car ::car(string a, string b, string c){
    brand = a;
    model = b;
    year = c;
}

int main (){
    // CONSTRUCTOR
    // A constructor is a special method that is automatically called when an object of a class is created.
    // It is a type of method that runs every time we instantiate an object

    car my_car("lamborghini","BM-102","2025");
    car his_car;

    cout << his_car.brand << endl;
    cout << my_car.brand << endl;

    cout << "constructor" << endl;
    Entity e(10.0, 5.0);
    cout << e.X << endl;
    e.Print();
}