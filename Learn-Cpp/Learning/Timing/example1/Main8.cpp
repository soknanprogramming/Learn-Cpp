#include <iostream>
#include <chrono>
#include <thread>

int main8() {
	using namespace std::literals::chrono_literals; // using for 1s instead of std::chrono::seconds(1)

	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(1s);
	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float> duration = end - start;

	std::cout << duration.count() << "s" << std::endl;

	std::cin.get();
	return 0;
}