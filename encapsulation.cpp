#include <iostream>
#include <string>
using namespace std;

class my_password {
    private:
    int pass_code;

    public:
    void setPassword(int code){
        pass_code = code;
    }
    int getPassword(){
        return pass_code;
    }
};

int main(){
    // Encapsulation is to make sure that "sensitive" data is hidden from users.
    // If you want others to read or modify the value of a private member, you can provide public get and set methods.
    
    cout << "encapsulation";
    my_password user_pass_word;
    user_pass_word.setPassword(9087);
    cout << user_pass_word.getPassword() << endl;
    return 0;
}