#include <iostream>
#include <string>

using String = std::string;

class Entity34 {
private:
	String m_Name;
public:
	Entity34() : m_Name("Unknown") {}
	Entity34(const String& name) : m_Name(name) {}

	const String& const GetName() {
		return m_Name;
	}
};

int main34() {
	Entity34* e;
	{
		Entity34 entity = Entity34("Cherno");
		e = &entity;
		std::cout << entity.GetName() << std::endl;
	}
	std::cout << "It is " << e->GetName() << std::endl;
	return 0;
}