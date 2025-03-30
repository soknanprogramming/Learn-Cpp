/*
#include <iostream>
#include <any>

void* operator new(size_t size) {
	return malloc(size);
}

struct CustomClass {
	std::string s0, s1;
};

int main() {

	std::any data;
	data = 2;
	// data = "Cherno";
	data = std::string("Soknan");
	data = CustomClass();
	std::string& string = std::any_cast<std::string&>(data);


	std::cin.get();
	return 0;
}
*/