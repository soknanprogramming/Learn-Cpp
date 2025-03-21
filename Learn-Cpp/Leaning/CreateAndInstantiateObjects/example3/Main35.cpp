/*
#include <iostream>
#include <string>

using String = std::string;

class Entity35 {
private:
	String m_Name;
public:
	Entity35() : m_Name("Unknown") {}
	Entity35(const String& name) : m_Name(name) {}
	const String& const getName() { return m_Name; }
};

int main35() {
	Entity35* e; 
	{
		Entity35* entity = new Entity35("Cherno");
		e = entity;
		std::cout << entity->getName() << std::endl;
	}
	std::cout << e->getName() << std::endl;
	delete e;
	
	


	std::cin.get();
	return 0;
}
*/