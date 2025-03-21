#include <iostream>

class Entity31 {
private:
	std::string m_Name;
	int m_Score;
	int x, y, z;
public:
	Entity31() : m_Name("Unknow"), m_Score(0), x(0), y(0), z(0) {}
	Entity31(const std::string& name, int score) : m_Name(name), m_Score(score), x(0), y(0), z(0) { }

	const std::string& GetName() const {
		return m_Name;
	}
};

int main31() {
	Entity31 entity = Entity31("Soknan", 99);
	const std::string& name = entity.GetName();

	std::cout << name << std::endl;
	std::cin.get();
	return 0;
}