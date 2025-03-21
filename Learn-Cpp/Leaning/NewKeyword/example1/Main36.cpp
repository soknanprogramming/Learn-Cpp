#include <iostream>
#include <string>

using String = std::string;

class Entity36 {
private:
	String m_Name;
public:
	Entity36() : m_Name("Unknown") {
		// std::cout << "Hello world! " << std::endl;
	}
	Entity36(const String& name) : m_Name(name) {}
	const String& getName() const { return m_Name; }

	int main(/*int argc, char** argv*/) {
		int a = 2;
		int* b = new int;
		*b = 2;

		int* c = new int[50]; // 200 bytes because int 4 bytes => 4 * 50 = 200

		Entity36* e = new Entity36();
		Entity36* e2 = (Entity36*)malloc(sizeof(Entity36));

		std::cin.get();
		return 0;
	}
};