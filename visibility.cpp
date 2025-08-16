#include <iostream>
#include <string>
using namespace std;

class Entity {
private:
    int X,Y;
protected:
    int A,B;
public:
    Entity(){

    }
};

class player : public Entity{
    public:
        player(){
            // X = 3;
            A = 5;

        }
};

int main (){
    cout << "visibility" << endl ; 
    // Visiblity doesnt have any effect on how your program runs and no effect on program perfomance
    // 3 basic visibility modifiers in C++
    // - Public
    // - Private
    // - Protected
    // Default visibility in C++ is private 

    // Making everything public is a bad idea

    player p;
    // p.A = 7;

}