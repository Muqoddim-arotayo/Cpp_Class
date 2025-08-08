#include <iostream>
#include <string>
using namespace std;

class player {      // The class
    public:         // Access specifier  
    int x, y;       // Attribute (int variable)
    int speed;

    void move (int xa, int ya){
        x += xa * speed;
        y += ya * speed;
    }
};

class Book {
    public:
    string title, author;
    int year;
};



int main(){
    // Object Oriented Programming
    // Object-oriented programming is about creating "objects", which can hold data and functions that work on that data.
    // A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.


    // Create an object of my_player

    player my_player;
    my_player.x = 6;
    cout << my_player.x << "\n";

    player player;
    player.speed = 5;
    player.x = 6;
    player.y = 6;
    player.move(6,5);
    cout << player.x ;

    Book novel;
    novel.title = "The Bubbling impact";
    novel.author = "Muqoddim Arotayo";
    novel.year = 2025;

    Book literature;
    literature.title = "Baba and the bull";
    literature.author = "Baba blue";
    literature.year = 2001;

    cout << literature.author ;

}