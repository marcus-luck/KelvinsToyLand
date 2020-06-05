#include <iostream>
#include "logger.hpp"

class Log
{
public:
    const int LevelError = 0;
    const int LevelWarning = 1;
    const int LevelInfo = 2;

private:
    int m_LogLevel = LevelInfo;

public:
    void setLevel(int Level)
    {
        m_LogLevel = Level;
    }

    void Error(const char * message)
    {
        if (m_LogLevel >= LevelError)
            std::cout << "[Error] " << message << std::endl;

    }

    void Warn(const char * message)
    {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[Warning] " << message << std::endl;
    }

    void Info(const char * message)
    {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[Info] " << message << std::endl;

    }
};