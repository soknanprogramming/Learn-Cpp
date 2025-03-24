#include <iostream>
#include <string>

struct Vector2E4 {
	float x, y;
	Vector2E4(float x, float y)
		: x(x), y(y) { }
	Vector2E4 Add(const Vector2E4& other) const {
		return Vector2E4(x + other.x, y + other.y);
	}
	Vector2E4 Multiple(const Vector2E4& other) const {
		return Vector2E4(x * other.x, y * other.y);
	}
};

int main4() {
	Vector2E4 postition(4.0f, 4.0f);
	Vector2E4 speed(0.5f, 1.5f);
	Vector2E4 powerup(1.1f, 1.1f);
	Vector2E4 result = postition.Add(speed.Multiple(powerup));

	std::cin.get();
	return 0;
}