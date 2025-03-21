#include <iostream>
#include <string>

using String = std::string;

class Entity33 {
private:
	String m_Name;
public:
	Entity33() : m_Name("Unknown") {}
	Entity33(const String& name) : m_Name(name) {}

	const String& const GetName() { return m_Name; }
};

int main33() {
	// Entity33 entity;
	Entity33 entity = Entity33("Hello");
	std::cout << entity.GetName() << std::endl;

	std::cin.get();
	return 0;
}