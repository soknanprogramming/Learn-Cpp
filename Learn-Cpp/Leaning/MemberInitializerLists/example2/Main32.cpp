#include <iostream>
#include <string>
class Example32 {
public:
	Example32() {
		std::cout << "Created Entity!" << std::endl;
	}


	Example32(int x) {
		std::cout << "Created Entity with " << x << " !" << std::endl;
	}
};
class Entity32 {
private:
	std::string m_Name;
	Example32 m_Example;
public:
	Entity32() : m_Example(Example32(8)){
		m_Name = std::string("Unknow");
		// m_Example = Example32(8);
	}
	Entity32(const std::string& name) : m_Name(name), m_Example(Example32(9)) {

	}
};
int main32() {
	Entity32 e = Entity32();

	std::cin.get();
	return 0;
}