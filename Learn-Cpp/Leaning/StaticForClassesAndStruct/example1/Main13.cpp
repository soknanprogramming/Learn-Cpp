#include <iostream>

struct Entity {
	static int x, y;

	static void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};

static void Print(Entity e) {
	std::cout << e.x << ", " << e.y << std::endl;
}

int Entity::x;
int Entity::y;


int main13() {

	Entity::x = 5;
	Entity::y = 9;
	//Entity::Print();

	Entity e;
	Print(e);

	std::cin.get();
	return 0;
}