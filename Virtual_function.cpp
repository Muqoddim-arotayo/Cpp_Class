#include <iostream>
#include <string>
using namespace std;

class Entity {
    public:
        virtual string get_name(){
            return "Entity";
        }
};

class player : public Entity {
    private:
        string m_name;
    public:
        player(const string& name){
            m_name = name;
        }

        string get_name(){
            return m_name;
        }
};

void print_name(Entity* entity){
    cout << entity->get_name();
}

int main (){
    // Virtual functions allows us to override functions in sub classes
    cout << "Virtual function" << endl;

    Entity* e = new Entity;
    print_name(e);

    player* p = new player("eniola");
    print_name(p);



    // Entity* e = new Entity();
    // cout << e->get_name() << endl ;

    // player* p = new player("eniola");
    // cout << p->get_name() << endl;

}