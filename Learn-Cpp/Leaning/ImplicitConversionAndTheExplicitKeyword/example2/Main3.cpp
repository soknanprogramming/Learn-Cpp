#include <iostream>
#include <string>
class Entity3 {
private:
	std::string m_Name;
	int m_Age;
public:
	explicit Entity3(const std::string& name)
		: m_Name(name), m_Age(-1) { }
	explicit Entity3(int age)
		: m_Name("Unknown"), m_Age(age) {}
	const std::string& getName() const {
		return m_Name;
	}
	int getAge() const {
		return m_Age;
	}
};

void PrintEntity3(const Entity3& Entity3) {
	std::cout << Entity3.getName() << ", " << Entity3.getAge() << std::endl;
}

int main3() {
	// PrintEntity3("Cherno"); // ❌ ERROR! Implicit conversion is blocked
	PrintEntity3(Entity3("Cherno")); // ✅ OK: Explicit conversion
	std::cin.get();
	return 0;
}