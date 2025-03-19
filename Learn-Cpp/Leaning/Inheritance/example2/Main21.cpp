#include <iostream>
#include <string>

class Entity {
public:
	std::string GetName() {
		return "Entity";
	}
};

class Player : public Entity {
private:
	std::string m_Name;
public:
	Player() {

	}
};

int main21() {

	std::cin.get();
	return 0;
}