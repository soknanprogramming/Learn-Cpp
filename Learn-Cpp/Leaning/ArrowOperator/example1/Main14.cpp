#include <iostream>
#include <string>

class Entity14 {
public:
	void Print() const {
		std::cout << "Hello!" << std::endl;
	}
};

int main14() {

	Entity14 e;
	e.Print();

	Entity14* ptr = &e;
	Entity14& entity = *ptr;
	(*ptr).Print();
	ptr->Print();
	entity.Print();

	std::cin.get();
	return 0;
}