/*
#include <iostream>
#include <array>

void PrintArrayOld(const int* array, unsigned int size) {
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}
}
template<size_t N>
void PrintArray(const std::array<int, N>& data) {
	for (size_t i = 0; i < data.size(); i++) {
		std::cout << data[i] << std::endl;
	}
}

int main1() {
	std::array <int, 5> data;
	// std::cout << data.size() << std::endl;
	data[0] = 0;
	data[3] = 9;
	PrintArray(data);

	int dataOld[5];
	dataOld[0] = 1;
	dataOld[3] = 2;
	// PrintArrayOld(dataOld, 5);

	std::cin.get();
	return 0;
}
*/