#include <iostream>
#include <string>
#include <thread>
#include <chrono> // Include the chrono header for std::chrono::seconds

static bool s_Finished = false;

void DoWork() {
	// using namespace std::literals::chrono_literals;
	std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

	while (!s_Finished) {
		std::cout << "Working..." << std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1)); // Use std::chrono::seconds(1)
	}
}

int main7() {
	int a = 9;
	std::thread worker(DoWork);
	std::cin.get();
	s_Finished = true;

	worker.join();
	std::cout << "Finished" << std::endl;
	std::cout << "Started thread id: " << std::this_thread::get_id() << std::endl;
	std::cin.get();
	return 0;
}