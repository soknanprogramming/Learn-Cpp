#include <iostream>
#include <string>

class Entity1 {
private:
	std::string name;
public:
	Entity1() : name("Unknown") {
		std::cout << "Hello World" << std::endl;
	}
	Entity1(const std::string& name) : name(name) {}
	const std::string& const getName(){ return this->name; }
};


int main1() {
	int a = 2; 
	int* b = new int;
	int* b2 = (int*)malloc(4);
	int* c = new int[50];

	Entity1* e = new Entity1();
	Entity1* e2 = (Entity1*)malloc(sizeof(Entity1));
	// Entity* e3 = new(b) Entity(); // It wrong // but it work throught error

	delete b;
	free(b2);
	delete[] c;
	delete e;
	free(e2);

	std::cin.get();
	return 0;
}
