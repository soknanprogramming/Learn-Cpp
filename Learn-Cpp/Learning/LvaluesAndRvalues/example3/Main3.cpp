#include <iostream>
#include <string>

void PrintName(std::string& name) {
	std::cout << "[lvalue]: " << name << std::endl;
}

void PrintName(std::string&& name) {
	std::cout << "[rvalue]: " << name << std::endl;
}

int main3() {
	std::string firstName = "Yan";
	std::string lastName = "Chernikov";

	std::string fullName = firstName + lastName;

	PrintName("fullName");
	PrintName(fullName);

	std::cin.get();
	return 0;
}