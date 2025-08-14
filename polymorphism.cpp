#include <iostream>
#include <string>
using namespace std;

class animal {
    public:
        void make_sound (){
            cout << "sound sound" << endl;
            cout << "okay" << endl;
        }
};

class dog : public animal{
    public:
        void make_sound (){
            cout << "bow wow" << endl ;
        }
};

class cat : public animal{
    public:
        void make_sound (){
            cout << "meow meow" << endl;
        }
};

int main (){
    cout << "Polymorphism" << endl;
    animal human;
    human.make_sound();

    dog bingo;
    bingo.make_sound();

    cat pussy;
    pussy.make_sound();
}