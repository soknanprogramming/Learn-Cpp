#include <iostream>

class Entity {
public:
	float X, Y;
	void Move(float xa, float ya) {
		X += xa;
		Y += ya;
	}
};

class Player : public Entity {
public:
	const char* Name;

	void PrintName() {
		std::cout << Name << std::endl;
	}
};

int main20() {
	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;

	Player player;
	player.X = 2;
	player.Y = 3;
	player.Move(1, 2);
	player.PrintName();

	std::cin.get();
	return 0;
}