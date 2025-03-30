#include <iostream>

int& GetValue() {
	static int value = 10;
	return value;
}

int main1() {
	int i = GetValue();
	GetValue() = 5;
	int j = GetValue();

	std::cout << i << ", " << j << std::endl;
	std::cin.get();
	return 0;
}