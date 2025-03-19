#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void increment(int& value) {
	value++;
}

int main8() {
	int a = 5;
	int b = 8;

	int& ref = a;
	ref = b;

	increment(a);

	LOG(a);
	std::cin.get();
	return 0;

}