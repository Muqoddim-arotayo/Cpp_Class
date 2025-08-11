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

int main (){
    // CONSTRUCTOR
    // A constructor is a special method that is automatically called when an object of a class is created.
    // It is a type of method that runs every time we instantiate an object

    cout << "constructor" << endl;
    Entity e(10.0, 5.0);
    cout << e.X << endl;
    e.Print();
}