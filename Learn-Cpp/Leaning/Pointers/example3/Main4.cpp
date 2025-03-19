#include <iostream>

int main4() {
	char* buffer = new char[8];
	memset(buffer, 0, 8);

	char** ptr = &buffer;

	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << **ptr << std::endl;

	delete[] buffer;

	std::cin.get();
	return 0;
}