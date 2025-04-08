#include <iostream>
#include <string>

class Entity {
public:
	virtual void printName() {}
};

class Player : public Entity {

};

class Enemy : public Entity {

};

int main() {
	Player* player = new Player();
	Entity* actuallyEnemy = new Enemy();
	Entity* actuallyPlayer = player;

	Player* p0 = dynamic_cast<Player*>(actuallyEnemy);
	if (p0) {
		std::cout << "Why" << std::endl;
	}
	Player* p1 = dynamic_cast<Player*>(actuallyPlayer);

	std::cin.get();
	return 0;
}