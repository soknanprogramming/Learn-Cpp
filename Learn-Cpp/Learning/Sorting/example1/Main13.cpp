#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
std::ostream& operator<<(std::ostream& stream, const std::vector<T>& values) { 
    stream << "{";
    for (size_t i = 0; i < values.size(); i++) {
        stream << " " << values[i];
        if (i < values.size() - 1) stream << ",";
    }
    stream << " }";
    return stream;
}

int main13() {
	std::vector<int> values = { 3, 5, 1, 4, 2 };
	// std::sort(values.begin(), values.end()); // 1 to 5
    // std::sort(values.begin(), values.end(), std::greater<int>()); // 5 to 1
    /*
    std::sort(values.begin(), values.end(), [](int a, int b) {
        return a < b;
        }); // 1 to 5
    */
    /*
    std::sort(values.begin(), values.end(), [](int a, int b) {
        return a > b;
        }); // 5 to 1
    */
    std::sort(values.begin(), values.end(), [](int a, int b) {
        if (a == 1)
            return false;
        if (b == 1)
            return true;
        return a < b;
        });

	std::cout << values;

	std::cin.get();
	return 0;
}