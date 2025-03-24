/*
#include <iostream>

class Singleton {
public:
	static Singleton& Get() {
		Singleton instance;
		return instance;
	}
	void Hello() {
		std::cout << "Hello !" << std::endl;
	}
private:
	Singleton() {}
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton) = delete;
};

int main() {
	Singleton::Get().Hello();
	// Singleton a;

	std::cin.get();
	return 0;
}
*/