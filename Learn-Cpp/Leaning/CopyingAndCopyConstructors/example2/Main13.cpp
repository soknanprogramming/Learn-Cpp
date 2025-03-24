#include <iostream>

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string) {
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		// We can for loop to copy 
		//for (int i = 0; i < m_Size + 1; i++) {
		//	m_Buffer[i] = string[i];
		//}
		// Or we can use memcpy to copy
		memcpy(m_Buffer, string, m_Size + 1);
		m_Buffer[m_Size] = 0;
	}
	/*
	String(const String& other)
		: m_Buffer(other.m_Buffer), m_Size(other.m_Size) {

	}
	*/ // error
	// Or if we want to be more exciting...
	//String(const String& other) {
	//	memcpy(this, &other, sizeof(String));
	//} // error
	// Try delete;
	// String(const String& other) = delete; // we get error
	// Try one more
	String(const String& other)
		: m_Size(other.m_Size) {
		std::cout << "Copying String!" << std::endl;

		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	~String() {
		delete[] m_Buffer;
	}
	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string) {
	stream << string.m_Buffer;
	return stream;
}

void PrintString(const String& string) {
	// String copy = string;
	std::cout << string << std::endl;
}

int main13() {
	String string = "soknan";
	String str = string;

	str[1] = 'a';

	PrintString(string);
	PrintString(str);
	std::cin.get();
	return 0;
}