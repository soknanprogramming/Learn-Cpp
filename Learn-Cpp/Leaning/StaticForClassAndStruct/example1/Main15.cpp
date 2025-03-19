#include <iostream>

struct Entity {
	static int x, y;
	static void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};

//int Entity::x;
//int Entity::y;

static void Print(Entity e) {
	std::cout << e.x << ", " << e.y << std::endl;
}

int main15() {
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1;
	Entity::x = 3;
	Entity::y = 4;

	Entity::Print();
	Print(e1);
	std::cin.get();
	return 1;
}