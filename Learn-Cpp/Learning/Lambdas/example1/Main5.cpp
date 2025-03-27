#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // Include this header for std::find_if

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) {
		func(value);
	}
}

int main5() {
	std::vector<int> values = { 1, 5, 4, 2, 3 };
	auto it = std::find_if(values.begin(), values.end(), [=](int value) { return value > 3; }); // Fix the arguments for std::find_if
	//if (it != values.end()) {
	//	std::cout << "Found a value greater than 3: " << *it << std::endl;
	//}
	auto lambda = [](int value) {
		std::cout << "This value is: " << value << std::endl;
	};

	ForEach(values, lambda);

	std::cin.get();
	return 0;
}