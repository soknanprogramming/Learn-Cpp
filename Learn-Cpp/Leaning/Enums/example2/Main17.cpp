#include <iostream>
enum Example : char {
	A = 'A', B = 'B', C = 'C'
};
enum Example2 : int {
	X = 5, Y, Z
};

int main17() {
	Example value = B;
	if (value == 'B') {
		// Do something here
		std::cout << value << std::endl;
	}

	Example2 value2 = Y;
	if (value2 == 6) {
		std::cout << value2 << std::endl;
	}

	std::cin.get();
	return 1;
}