/*
#include <iostream>
#include <string>
#include <algorithm>

namespace apple {
	void print(const char* text) {
		std::cout << text << std::endl;
	}
	namespace function {
		void print(){}
	}
}

namespace orange {
	void print(const char* text) {
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << temp << std::endl;
	}
	void print_again(const std::string& text) {

	}
}

int main() {
	// using namespace apple;

	//using namespace apple::function;

	//using namespace apple;
	//using namespace function;


	apple::print("Hello");
	orange::print("Hello");
	namespace o = orange;
	o::print_again("Hello");
	apple::function::print();

	std::cin.get();
	return 0;
}
*/
