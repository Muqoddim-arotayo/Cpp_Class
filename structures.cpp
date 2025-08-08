#include <iostream>
#include <string>
using namespace std;

int main (){
    // STRUCTURES
    // Structures (also called structs) are a way to group several related variables into one place.
    // Each variable in the structure is known as a member of the structure.

    struct {
        int my_int;
        string my_string;
        bool male;
    } about_me, about_him, about_her;

    about_me.my_int = 18;
    about_me.my_string = "string";
    about_me.male = true;

    about_him.my_int = 25;
    about_him.my_string = "Malik";
    about_him.male = true;

    about_her.my_int = 24;
    about_her.my_string = "Lydia";
    about_her.male = false;

    int my_num = 4;
    cout << &my_num;


    cout << "\n" << about_me.my_int;
    cout << "\n" << about_me.my_string;
    cout << "\n" << about_me.male;

    cout << "\n" << about_him.my_int;
    cout << "\n" << about_him.my_string;
    cout << "\n" << about_him.male;

    cout << "\n" << about_her.my_int;
    cout << "\n" << about_her.my_string;
    cout << "\n" << about_her.male;

    
    

}