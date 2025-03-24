#include <iostream>
#include <string>

class Entity8 {
private:
	int x;
public:
	Entity8(int x) : x(x) {
		std::cout << "Created Entity8!" << std::endl;
	}

	~Entity8() {
		std::cout << "Destroyed Entity8!" << std::endl;
	}
	int getX() const {
		return x;
	}
};

int main8() {
	Entity8* save;
	{
		Entity8 e(7);
		save = &e;
		std::cout << "Sizeof: " << sizeof(e) << std::endl;
	}

	std::cout << save->getX() << std::endl;

	std::cin.get();
	return 0;
}