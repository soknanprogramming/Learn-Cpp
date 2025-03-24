#include <iostream>
#include <string>
// void PrintEntity7(const Entity7* e); // error line
// void PrintEntity72(const Entity7& e); // error line
class Entity7 {
public:
	int x, y;
	Entity7(int x = 0, int y = 0) {
		//Entity7* e = this;
		//e->x = x;
		//e->y = y;
		this->x = x;
		this->y = y;
		//(*this).x = x;
		//(*this).y = y;
		// PrintEntity7(this);
		Entity7& e = *this;
		// PrintEntity72(*this);
	}

	int GetX7() const {
		const Entity7& e = *this;
		return e.x;
	}

	friend std::ostream& operator<<(std::ostream& stream, const Entity7& Entity7);
};

std::ostream& operator<<(std::ostream& stream, const Entity7& Entity7) {
	stream << "[" << Entity7.x << ", " << Entity7.y << "]";
	return stream;
}

void PrintEntity7(const Entity7* e) {
	//std::cout << *e << std::endl;
	std::cout << e->x << ", " << e->y << std::endl;
}
void PrintEntity72(const Entity7& e) {
	std::cout << e.x << ", " << e.y << std::endl;
}


int main7() {
	Entity7 e(3, 4);
	// PrintEntity7(&e);
	std::cout << e.GetX7() << std::endl;

	std::cin.get();
	return 0;
}