#include <iostream>

int main12() {
	int* array = new int[5 * 5];
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			array[x + y * 5] = 2;
		}
	}
	delete[] array;

	std::cin.get();
	return 0;
}