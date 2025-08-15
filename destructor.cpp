#include <iostream>
#include <string>
using namespace std;

class Entity {
    public:
    float X,Y;

    Entity(){
        cout << "Created entity" << endl;
    }

    Entity (float x, float y){
        X = x;
        Y = y;
    }

    // ~Entity (){
    //     cout << "Destroyed entity" << endl;
    // }

    void print (){
        cout << X << " , " << Y << endl;
    }
};

void function(){
    Entity e;
    e.print();
}

int main (){
    cout << "DESTRUCTOR" << endl ;
    // The destructor runs when you destroy an object
    // Anytime an object is destroyed the destructor method gets called
    // It is used to uninitializ and clean any memory we might have used

    function();

}