/*
#include <iostream>
#include <string>

class Entity {
private:
	int x;
public:
	Entity(int x) : x(x) {
		std::cout << "Created Entity!" << std::endl;
	}
	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

int* CreateArray() {
	int array[50];
	return array;
}

int main() {

	Entity* entity;

	{
		Entity* e = new Entity(8);
		entity = e;
		std::cout << "Size of e: " << sizeof(e) << std::endl;
	}

	delete entity;
	std::cout << "Size of entity: " << sizeof(entity) << std::endl;

	int array[50];
	int* arr = CreateArray();
	delete arr;

	std::cin.get();
	return 0;
}
*/