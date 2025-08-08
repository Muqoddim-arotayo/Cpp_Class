#include <iostream>
#include <string>
using namespace std;

class Log {
    private:
    int m_LogLevel;
    public:
    void SetLevel(int level){
        m_LogLevel = level;
    }
    void Warn(const char* message){

    }
};

int main (){
    // CREATING A LOG CLASS

    Log log;
    log.SetLevel(LogLevelWarning);
    log.Warn("Hello !");
    cin.get();
    
}