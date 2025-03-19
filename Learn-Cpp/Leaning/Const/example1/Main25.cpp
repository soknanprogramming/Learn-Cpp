#include <iostream>


int main25(int argc, char* argv) {
	const int MAX_AGE = 90;

	int* a = new int;
	*a = 2;
	a = (int*)&MAX_AGE;
	*a = 9;
	std::cout << *a << std::endl;
	//delete a;
	//a = new int;
	//*a = 3;

	//char* b = new char;
	//*b = 's';
	std::cin.get();
	return 1;
}