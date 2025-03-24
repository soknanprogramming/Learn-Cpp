#include <iostream>
#include <string>

class Entity10 {
private:
	int x;
public:
	Entity10() {
		std::cout << "Created Entity10!" << std::endl;
	}
	~Entity10() {
		std::cout << "Destroyed Entity10!" << std::endl;
	}
	void showHello() {
		std::cout << "Hello world" << std::endl;
	}
};

class ScopedPtr10 {
private:
	Entity10* m_Ptr;
public:
	ScopedPtr10(Entity10* ptr) : m_Ptr(ptr) {}
	~ScopedPtr10() {
		delete m_Ptr;
	}
	const Entity10* getPtr() const {
		return m_Ptr;
	}
};

int* CreateArray() {
	int* array = new int[50];
	return array;
}

int main10() {
	{
		ScopedPtr10 e = new Entity10();
		Entity10* e2 = new Entity10();
	}

	std::cin.get();
	return 0;
}