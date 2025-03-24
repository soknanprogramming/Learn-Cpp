/*
#include <iostream>
#include <string>
#include <vector>

struct Vectex {
	float x, y, z;
	Vectex(float x, float y, float z)
		: x(x), y(y), z(z) {
		std::cout << "Copied!" << std::endl;
	}
};

int main() {
	std::vector<Vectex> vertices;
	vertices.reserve(3);
	//vertices.push_back(Vectex(2, 4, 6));
	//vertices.push_back(Vectex(1, 3, 4));
	//vertices.push_back(Vectex(4, 5, 6));
	vertices.emplace_back(Vectex(2, 4, 6));
	vertices.emplace_back(Vectex(1, 3, 4));
	vertices.emplace_back(Vectex(4, 5, 6));

	std::cin.get();
	return 0;
}
*/