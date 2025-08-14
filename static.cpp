#include <iostream>
#include <string>
using namespace std;

static int s_five = 5;

struct Entity {
    static int x,y ;
    // - Non-static member: Every student (object) has their own notebook.
    // - Static member: There’s one shared whiteboard for the whole class.
    // Static is incredibly useful for static data that doesn't change between class instances,
    // but that we actually want to use in our classes.



    void print (){
        cout << x << " , " << y << endl;
    }
};

int Entity::x;
int Entity::y;

int main (){
    // Try much as possible to mark your function and your variable static unless you actually need them to be linked across translation unit
    // A static method does not have a class instance
    Entity e;
    Entity::x = 2;
    Entity::y = 3;

    Entity e1;
    Entity::x = 5;
    Entity::y = 6;

    e.print();
    e1.print();
    

}

