#include <iostream>
#include <string>
using namespace std;

class Log {
    public:
    void SetLevel (int level){
        
    }
    void Warn (const char* message){
        
    }

};

int main (){
    // CREATING A LOG CLASS

    Log log;
    log.SetLevel(LogLevelWarning);
    log.Warn("Hello !");
}