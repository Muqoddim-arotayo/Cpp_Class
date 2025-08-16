#include <iostream>
#include <string>
using namespace std;

class Log {
    public: 
        enum Level {
            LevelError = 0, LevelWarning, LevelInfo
        };

        // const int LogLevelError = 0;
        // const int LogLevelWarning = 1;
        // const int LogLevelInfo = 2;
    private:
        // int m_LogLevel =  LogLevelWarning ;
        Level m_LogLevel =  LevelWarning ;

        public:
        void SetLevel (Level level){
            m_LogLevel = level;
        }
        void Warn (const char* message){
            if (m_LogLevel >= LevelWarning){
                cout << "[WARNING]" << message << endl ;
            }
        }
        void Error (const char* message){
            if (m_LogLevel >= LevelError){
                cout << "[ERROR]" << message << endl ;
            }
        }
        void Info (const char* message){
            if (m_LogLevel >= LevelInfo){
                cout << "[INFO]" << message << endl ;
            }
        }

};

int main (){
    // CREATING A LOG CLASS

    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello !");
    log.Error("Hello !");
    log.Info("Hello !");
    log.SetLevel(Log::LevelWarning);
    log.Warn("Hello !");
    log.Error("Hello !");
    log.Info("Hello !");
}