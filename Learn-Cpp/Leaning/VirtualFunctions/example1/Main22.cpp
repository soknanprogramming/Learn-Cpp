#include <iostream>
#include <string>
class Entity {
public:
	virtual std::string GetName() const {
		return "Entity";
	}
	virtual ~Entity() = default;
};

class Player : public Entity {
private:
	std::string m_Name;
public:
	Player(const std::string& name) : m_Name(name){}
	std::string GetName() const override {
		return m_Name;
	}

};

void PrintName(const Entity* entity) {
	std::cout << entity->GetName() << std::endl;
}

int main22() {
	Entity* e = new Entity();
	PrintName(e);

	Player* p = new Player("Cherno");
	PrintName(p);

	Entity* entity = p;
	PrintName(entity);

	delete e;
	delete p;

	std::cin.get();
	return 0;
}