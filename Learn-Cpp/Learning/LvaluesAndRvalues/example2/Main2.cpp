#include <iostream>

void SetValue(const int& value) {

}

int main2() {
	int i = 10;
	const int& a = 10;
	SetValue(i);
	SetValue(10);

	std::cin.get();
	return 0;
}