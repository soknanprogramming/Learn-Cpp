#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main6() {
	int a = 50000;
	float b = 55.55f;
	double c = 343.335;
	int& ref = a;
	ref = 2;

	LOG(a);
	std::cin.get();
	return 0;
}