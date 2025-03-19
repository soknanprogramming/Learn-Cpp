#include <iostream>

class Log {
public:
	enum level {
		Error = 0, Warning, Info
	};
private:
	int m_LogLevel = Info;
public:
	void SetLevel(int level) {
		m_LogLevel = level;
	}
	void error(const char* message) {
		if (m_LogLevel >= Error) {
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
	void warn(const char* message) {
		if (m_LogLevel >= Warning) {
			std::cout << "[WARN]: " << message << std::endl;
		}
	}
	void info(const char* message) {
		if (m_LogLevel >= Info) {
			std::cout << "[INFO]: " << message << std::endl;
		}
	}
};

int main18() {
	Log log;
	log.SetLevel(Log::Warning);
	log.error("Hello");
	log.warn("Hey");
	log.info("Hi");



	std::cin.get();
	return 1;
}