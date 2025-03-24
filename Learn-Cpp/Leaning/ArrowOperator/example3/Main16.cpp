/*
#include <iostream>
#include <string>

struct Vector3E16 {
	float x, y, z;
};

int main16() {
	// ((Vector3E16*)0)->x; 
	int offset = (int)&((Vector3E16*)nullptr)->x;
	int offset2 = (int)&((Vector3E16*)nullptr)->y;
	int offset3 = (int)&((Vector3E16*)nullptr)->z;
	std::cout << offset << std::endl;
	std::cout << offset2 << std::endl;
	std::cout << offset3 << std::endl;

	std::cin.get();
	return 0;
}
*/