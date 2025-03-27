/*
#include <iostream>
#include <string>

//typedef void(*HelloWorldFunction)();
using HelloWorldFunction = void(*)();

void HelloWorld() {
	std::cout << "Hello World!" << std::endl;
}

int main() {
	// void(*function)();
	void(*function)() = HelloWorld;
	function = HelloWorld;
	auto fn = HelloWorld;

	function();
	function();
	function();


	//HelloWorldFunction = HelloWorld; // error
	//HelloWorldFunction();

	std::cin.get();
	return 0;
}
*/