#include <iostream>
#include <string>

class Entity30 {
private:
	std::string m_Name = "Hello";
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const { 
		m_DebugCount++;
		return m_Name; 
	};
};

int main30() {

	Entity30 entity = Entity30();
	const std::string& name = entity.GetName();

	int x = 8;
	auto f = [&x]() 
		{
			x++;
			std::cout << "Hello: " << x  << std::endl;
		};
	f();
	f();

	std::cin.get();
	return 0;
}