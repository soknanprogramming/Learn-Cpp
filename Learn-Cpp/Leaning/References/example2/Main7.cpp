#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void increment(int* value) {
	(*value)++;
	/*
	*value++;
	*value = 9;
	*/
}

void incrementB(int& value) {
	value++;
}



int main7() {
	int a = 5;
	increment(&a);

	int b = 9;
	incrementB(b);

	LOG(b);
	std::cin.get();
	return 0;
}