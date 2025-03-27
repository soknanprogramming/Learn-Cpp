#include <iostream>

struct Vector2 {
	float x, y;
};

struct Vector4 {
	float x, y, z, w;
};

void PrintVector2(const Vector2& vector) {
	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main() {
	struct Union {
		union {
			float a;
			int b;
		};
	};

	Union u;
	u.a = 2.0f;
	std::cout << u.a << ", " << u.b << std::endl;

	std::cin.get();
	return 0;
}