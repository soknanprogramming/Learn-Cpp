#include <iostream>
#include <string>

class Entity15 {
public:
	int x;
public:
	void Print() const {
		std::cout << "Hello!" << std::endl;
	}
};

class ScopedPtr {
private:
	Entity15* m_Obj;
public:
	ScopedPtr(Entity15* entity)
		: m_Obj(entity) {

	}
	~ScopedPtr() {
		delete m_Obj;
	}

	Entity15* GetObject() const {
		return m_Obj;
	}
	Entity15* operator->() {
		return m_Obj;
	}

	const Entity15* operator->() const {
		return m_Obj;
	}
	
};

int main15() {
	ScopedPtr entity = new Entity15();
	entity.GetObject()->Print();

	Entity15* entity2 = new Entity15();
	entity2->Print();

	ScopedPtr entity3 = new Entity15();
	entity3->Print();

	std::cin.get();
	return 0;
}