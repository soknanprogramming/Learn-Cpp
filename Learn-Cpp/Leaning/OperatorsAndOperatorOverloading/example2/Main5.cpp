#include <iostream>
#include <string>
struct Vector2E5 {
	float x, y;
	Vector2E5(float x, float y) : x(x), y(y) {}
	Vector2E5 Add(const Vector2E5& other) const {
		return Vector2E5(x + other.x, y + other.y);
	}
	Vector2E5 Multiple(const Vector2E5& other) const {
		return Vector2E5(x * other.x, y * other.y);
	}

	Vector2E5 operator+ (const Vector2E5& other) {
		return Add(other);
	}

	Vector2E5 operator* (const Vector2E5& other) {
		return Multiple(other);
	}

};

void PrintVector2E5(const Vector2E5& vertor2) {
	std::cout << "[" << vertor2.x << " ," << vertor2.y << "]" << std::endl;
}

int main5() {
	Vector2E5 position(4.0f, 4.0f);
	Vector2E5 speed(0.5f, 1.5f);
	Vector2E5 powerup(1.1f, 1.1f);
	PrintVector2E5(position);

	Vector2E5 result = position + speed * powerup;

	PrintVector2E5(result);

	std::cin.get();
	return 0;
}