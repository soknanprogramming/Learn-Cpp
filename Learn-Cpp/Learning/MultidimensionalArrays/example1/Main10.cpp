/*
#include <iostream>

int main() {
	int* array = new int[50];
	char* sn = (char*)(malloc(50));
	// array[0] = nullptr; // error
	for (int i = 0; i < 50; i++) {
		sn[i] = 'A' + i;
	}

	delete[] array;
	free(sn);

	int** a2d = new int*[50];
	// a2d[0] = nullptr;
	// create
	for (int i = 0; i < 50; i++) {
		a2d[i] = new int[30];
	}

	// add value into
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 30; j++) {
			a2d[i][j] = j;
		}
	}
	for (int i = 0; i < 50; i++) {
		std::cout << "Pointer" << a2d[i] << std::endl;
		for (int j = 0; j < 30; j++) {
			std::cout << a2d[i][j] << std::endl;
		}
	}

	for (int i = 0; i < 50; i++) {
		delete[] a2d[i];
		a2d[i] = nullptr;
	}
	delete[] a2d;
	a2d = nullptr;

	std::cin.get();
	return 0;
}
*/