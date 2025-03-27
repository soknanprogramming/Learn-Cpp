/*
#include <iostream>
#include <vector>

void PrintValue(int value) {
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) {
		func(value);
	}
}

int main4() {
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	// way 1
	ForEach(values, PrintValue);
	//way 2
	ForEach(values, [](int value) {
		std::cout << "This value is: " << value << std::endl;
		});

	std::cin.get();
	return 0;
}
*/