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

int main13() {
	Player* player = new Player();
	Entity* e = player;
	Entity* e1 = new Enemy();

	// Player* p = (Player*)e1;
	Player* p = static_cast<Player*>(e1);
	Player* p1 = dynamic_cast<Player*>(e1);

	std::cin.get();
	return 0;
}