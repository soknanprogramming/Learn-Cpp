#include <iostream>
class Entity {
public:
	float X, Y;
	Entity() {
		X = 0.0f;
		Y = 0.0f;
	}
	Entity(float x, float y) {
		X = x;
		Y = y;
	}
	void Print() {
		std::cout << X << ", " << Y << std::endl;
	}
};
class Log {
public:
	Log() = delete;

	static void Write() {

	}
};

int main14() {
	Log::Write();
	// Log l;

	std::cin.get();
	return 1;
}