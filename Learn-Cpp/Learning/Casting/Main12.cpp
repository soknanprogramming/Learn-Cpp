/*
#include <iostream>
class Base {
public:
	Base() {

	}
	~Base() {

	}
};
class Derived : public Base {
public:
	Derived() {

	}
	~Derived() {

	}
};
class AnotherClass : public Base {
public:
	AnotherClass() {

	}
	~AnotherClass() {

	}
};

int main() {
	Derived* derived = new Derived();
	Base* base = derived;

	// AnotherClass* ac = dynamic_cast<AnotherClass*>(ac);
	Derived* as = dynamic_cast<Derived*>(base);

	std::cin.get();
	return 0;
}
*/