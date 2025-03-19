#include <iostream>

void Increment(int& value) {
	value++;
}

int main9() {
	int a = 5;
	int b = 8;

	int* ref = &a;
	*ref = 2;
	ref = &b;
	*ref = 1;
	
	Increment(a);
	std::cout << a << std::endl;
	std::cin.get();
	return 0;
}