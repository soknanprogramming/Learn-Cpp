#include <iostream>
#include <string>

class Vector2E6 {
private:
	float x, y;
public:
	Vector2E6(float x = 0.0f, float y = 0.0f) : x(x), y(y) {}

	Vector2E6 operator+(const Vector2E6& other) const {
		return Vector2E6(x + other.x, y + other.y);
	}
	Vector2E6 Add(const Vector2E6& other) const {
		return operator+(other);
	}
	Vector2E6 operator*(const Vector2E6& other) const {
		return Vector2E6(x * other.x, y * other.y);
	}
	Vector2E6 Multiple(const Vector2E6& other) const {
		//return operator*(other);
		return *this * other;
	}

	bool operator==(const Vector2E6& other) const {
		return x == other.x && y == other.y;
	}

	bool operator!=(const Vector2E6& other) const {
		// return x != other.x && y != other.y;
		// return !(*this == other);
		return !operator==(other);
	}
	friend std::ostream& operator<<(std::ostream& stream, const Vector2E6& other) {
		stream << "[" << other.x << ", " << other.y << "]";
		return stream;
	}
};



int main6() {
	Vector2E6 position(4.0f, 4.0f);
	Vector2E6 speed(0.5f, 1.5f);
	Vector2E6 powerup(1.1f, 1.1f);

	Vector2E6 result1 = position + speed * powerup;
	Vector2E6 result2 = position.Add(speed.Multiple(powerup));

	std::cout << "result1: " << result1 << std::endl;
	std::cout << "result2: " << result2 << std::endl;
	if (result1 == result2) {
		std::cout << "It is the same number!" << std::endl;
	}
	if (position != result1) {
		std::cout << "position is not equal result1" << std::endl;
	}


	std::cin.get();
	return 0;
}