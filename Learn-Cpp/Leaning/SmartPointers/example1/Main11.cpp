#include <iostream>
#include <string>
#include <memory>
#include <cstdlib>

class Entity11 {
private:
	std::string name;
public:
	Entity11(const std::string& name) : name(name) {
		std::cout << "Created Entity11 : " << this->name << std::endl;
	}
	~Entity11() {
		std::cout << "Destroyed Entity11 : " << this->name << std::endl;
	}
	void PrintHello(const std::string& thing) {
		std::cout << "Hello : " << thing << std::endl;
	}
};

int main11() {
	// std::unique_ptr<Entity11> Entity11 = new Entity11(); // it error we cannot write like this
	// std::unique_ptr<Entity11> Entity11(new Entity11); // way 1
	{
		std::shared_ptr<Entity11> e0;
		Entity11* e;
		{
			std::unique_ptr<Entity11> entity11 = std::make_unique<Entity11>("Entity11");
			std::shared_ptr<Entity11> sharedEntity11 = std::make_shared<Entity11>("sharedEntity11");
			std::shared_ptr<Entity11> sharedEntity112(new Entity11("sharedEntity112"));
			// std::shared_ptr<Entity11> e0 = sharedEntity112;
			e0 = sharedEntity11;
			// Entity11->~Entity11();
			// Entity11->PrintHello();
			e = entity11.get();
			// std::cout << "Size of unquine ptr: " << sizeof(Entity11) << std::endl;
		}
		e0->PrintHello("it shared");
		e->PrintHello("testing");
		e0.reset();
	}
	system("cls");
	{
		std::weak_ptr<Entity11> e0;
		{
			std::shared_ptr<Entity11> sharedEntity112 = std::make_shared<Entity11>("sharedEntity112");
			e0 = sharedEntity112;
		}
		std::shared_ptr<Entity11> soknan = e0.lock();
		soknan->PrintHello("Soknan");
	}
	std::cin.get();
	return 0;
}