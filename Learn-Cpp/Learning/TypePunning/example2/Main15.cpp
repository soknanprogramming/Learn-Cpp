#include <iostream>
#include <chrono>
#include <iomanip>
struct Entity {
	int x, y;
	int* getPostition() {
		return &x;
	}
};

int main() {
	Entity e = { 5, 8 };

	// int* postiton = (int*)&e;
	int* postition = e.getPostition();

	int y = *(int*)((char*)&e + 4);
	
	std::cout << y << std::endl;

	std::cout << "Size of e: " << sizeof(e) << std::endl;
	// std::cout << postiton[0] << ", " << postiton[1] << std::endl;

	std::cin.get();
	return 0;
}