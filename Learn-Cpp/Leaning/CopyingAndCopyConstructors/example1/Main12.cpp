#include <iostream>
#include <string>
#include <cstdlib>
struct Vector2E12 {
	float x, y;
};

std::ostream& operator<<(std::ostream& os, Vector2E12 v2) {
	os << "{ " << v2.x << ", " << v2.y << " }";
	return os;
}

int main12() {
	Vector2E12 a = { 2, 3 };
	Vector2E12 b = a;
	b.x = 9;

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	system("cls");

	Vector2E12* a2 = new Vector2E12();
	Vector2E12* b2 = a2;
	b2->x = 2;
	std::cout << *a2 << std::endl;
	std::cout << *b2 << std::endl;

	std::cin.get();
	return 0;
}