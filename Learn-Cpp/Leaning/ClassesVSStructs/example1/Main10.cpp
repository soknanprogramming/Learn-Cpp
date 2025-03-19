#include <iostream>

#define LOG(x) std::cout << x << std::endl;

struct Player {
	int x, y;
	int speed;

	void Move(int xa, int xb) {
		x += xa * speed;
		y += xb * speed;
	}
};
struct Vec2 {
	float x, y;
	void Add(const Vec2& other) {
		x += other.x;
		y += other.y;
	}
};

int main10() {
	Player player;
	player.Move(1, -1);

	std::cin.get();
	return 0;
}