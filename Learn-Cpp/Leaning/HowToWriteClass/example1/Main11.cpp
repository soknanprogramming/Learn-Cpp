#include <iostream>

class Log {
public:
	const static int logLevelError = 0;
	const static int logLevelWarning = 1;
	const static int logLevelInfo = 2;
private:
	int m_LogLevel;
public:
	Log(int level) : m_LogLevel(level) {}
	void setLevel(int level) {
		m_LogLevel = level;
	}
	void Error(const char* message) {
		if(m_LogLevel >= logLevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}
	void Warn(const char* message) {
		if(m_LogLevel >= logLevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}
	void Info(const char* message) {
		if(m_LogLevel >= logLevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
	
	
};

int main11() {
	Log log(Log::logLevelWarning);
	log.setLevel(log.logLevelInfo);
	log.Error("Hello!");
	log.Warn("Hello!");
	log.Info("Hello!");


	std::cin.get();
	return 0;
}