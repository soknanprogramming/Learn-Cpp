#include <iostream>
#include <variant>
#include <optional>
enum class ErrorCode {
	None = 0,
	NotFount = 1,
	NoAccess = 2
};

std::variant<std::string, ErrorCode> ReadFileAsString() {
	return {};
}

int main6() {
	std::variant<std::string, int> data;
	std::cout << sizeof(int) << "\n";
	std::cout << sizeof(std::string) << "\n";
	std::cout << sizeof(data) << "\n";
	data = "Cherno";
	std::cout << std::get<std::string>(data) << "\n";
	//if (auto* value = std::get_if<std::string>(&data)) {
	//	std::string& v = *value;
	//}
	data = 2;

	// std::cout << std::get<std::string>(data) << "\n";
	std::cout << std::get<int>(data) << "\n";

	std::cin.get();
	return 0;
}