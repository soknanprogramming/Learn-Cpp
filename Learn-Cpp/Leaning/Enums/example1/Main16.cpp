#include <iostream>

enum Example {
	A, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main16() {
	Example value = B;

	if (value == 1) {
		// Do something here
		std::cout << b << std::endl;
	}

	std::cin.get();
	return 1;
}