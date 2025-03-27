#include <iostream>

int main11() {
	int** a2d = new int* [50];
	for (int i = 0; i < 50; i++) {
		a2d[i] = new int[50];
	}

	a2d[0][0] = 0;
	a2d[0][1] = 1;
	a2d[0][2] = 0;

	for (int y = 0; y < 50; y++) {
		for (int x = 0; x < 50; x++) {
			a2d[x][y] = 2;
		}
	}

	for (int i = 0; i < 50; i++) {
		delete[] a2d[i];
	}
	delete[] a2d;

	int* array = new int[5 * 5];
	for (int i = 0; i < 5 * 5; i++) {
		array[i] = 2;
	}

	std::cin.get();
	return 0;
}