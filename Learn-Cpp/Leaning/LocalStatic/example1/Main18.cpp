/*
#include <iostream>
#include <string>
class Singleton {
private:
	static Singleton* s_Instance;
public:
	static Singleton& Get() {
		return *s_Instance;
	}
	void Hello() {
		std::cout << "Hello!" << std::endl;
	}
};

Singleton* Singleton::s_Instance = nullptr;

void Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

int main() {
	Singleton::Get().Hello();

	Function();
	Function();
	// i = 10; // error
	Function();
	Function();

	std::cin.get();
	return 0;
}
*/