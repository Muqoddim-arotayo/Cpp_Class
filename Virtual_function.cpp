#include <iostream>
#include <string>
using namespace std;

class Entity {
    public:
        string get_name (){
            return "Entity";
        }
};

class player : public Entity {
    private:
        string m_name;
    public:
        player(const string& name)
        :m_name(name){}
    string get_name(){return m_name;}
};

int main (){
    // Virtual functions allows us to override functions in sub classes
    cout << "Virtual function";
}