#include <iostream>
#include <string>
#include <tuple>
// we can use struct instead
struct Person {
	std::string Name;
	int Age;
};

std::tuple<std::string, int> CreatePerson() {
	return { "Cherno", 24 };
}

int main10() {
	auto person = CreatePerson();
	std::string& name = std::get<0>(person);
	int age = std::get<1>(person);

	std::string name2;
	int age2;
	std::tie(name2, age2) = CreatePerson();

	auto [name3, age3] = CreatePerson();

	std::cin.get();
	return 0;
}