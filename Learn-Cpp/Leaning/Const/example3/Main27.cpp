#include <iostream>

int main27(int argc, char* argv) {
	const int MAX_AGE = 90;

	const int* const a = new int;

	//*a = 88; // const at the frond
	//a = (int*)&MAX_AGE; // const at the end
	//a = nullptr; // const at the end

	std::cin.get();
	return 1;
}