#include <iostream>
#include <string>

class Entity29 {
private:
	int* m_X, m_Y;
public:
	const int* const GetX() {
		return m_X;
	}

	void SetX(int x) {
		*m_X = x;
	}
};

int main29(int argc, char* argv) {
	Entity29* entity = new Entity29();
	const int* a = entity->GetX();
	std::cout << a << std::endl;

	std::cin.get();
	return 0;
}