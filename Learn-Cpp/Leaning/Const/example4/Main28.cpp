#include <iostream>
#include <string>
class Entity {
private: 
	int x = 1, y = 2;
	mutable int var = 1;
public:
	int GetX() const {
		var = 3;
		// this->x = 9; // It can not change value
		return this->x;
	}
	void SetX(int x) {
		this->x = x;
	}
};

void PrintEntity(const Entity& e) {
	std::cout << e.GetX() << std::endl;
}

int main28(int argc, char* argv) {
	Entity e;
	PrintEntity(e);
	std::cin.get();
	return 1;
}