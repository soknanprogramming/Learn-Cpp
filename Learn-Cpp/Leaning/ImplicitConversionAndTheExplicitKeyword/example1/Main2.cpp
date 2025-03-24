#include <iostream>
#include <string>
class Entity2 {
private:
	std::string m_Name;
	int m_Age;
public:
	Entity2(const std::string& name) 
		: m_Name(name), m_Age(-1) { }
	Entity2(const int& age)
		: m_Name("Unknow"), m_Age(age) { }
	const std::string& getName() const {
		return m_Name;
	}
	const int& getAge() const {
		return m_Age;
	}

};

void PrintEntity2(const Entity2& Entity2) {
	std::cout << Entity2.getName() << ", " << Entity2.getAge() << std::endl;
}

int main2() {
	Entity2 a = std::string("Cherno");
	Entity2 b = 27;
	PrintEntity2(a);
	PrintEntity2(b);
	PrintEntity2(Entity2("Soknan"));
	std::cin.get();
	return 0;
}