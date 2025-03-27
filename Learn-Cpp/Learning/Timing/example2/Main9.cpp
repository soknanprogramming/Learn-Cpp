#include <iostream>
#include <chrono>
#include <thread>
class Timer {
private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
	
public:
	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << "ms " << std::endl;
	}
};

void function9() {
	Timer time;
	for (int i = 0; i < 100; i++) {
		std::cout << "Hello" << std::endl;
	}
}

int main9() {

	function9();

	std::cin.get();
	return 0;
}