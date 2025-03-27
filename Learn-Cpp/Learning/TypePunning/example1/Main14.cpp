#include <iostream>


int main14(/*int argc, char** argv*/) {
	int a = 50;
	// double value = (double)a;
	double& value = *(double*)&a;
	// value = 0.0;

	std::cout << value << std::endl;

	std::cin.get();
	return 0;
}