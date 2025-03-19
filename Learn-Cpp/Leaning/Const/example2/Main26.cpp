#include <iostream>
#include <string>

void testing26(const int* a) {
	a = new int; // it right
	// *a = 4; // it wrong
}

int main26(int argc, char* argv) {
	const int MAX_AGE = 90;
	// const int* a = new int;
	const int* a = (int*)&MAX_AGE; // example1
	a = nullptr;
	int* const b = new int; 
	*b = 8;
	// delete a; // can not delete
	// *a = 2; // it wrong
	// a = new int; // it work
	a = (int*)&MAX_AGE;

	std::cin.get();
	return 1;
}