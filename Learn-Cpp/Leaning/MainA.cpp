#include <memory>
#include <iostream>
class Test {
private:
    int x;
public:
    Test(int x) : x(x) {
        std::cout << "Create : " << this->x << std::endl;
    }
    ~Test() {
        std::cout << "Gone!" << std::endl;
    }
    void sadHello() {
        std::cout << "Hello bro" << std::endl;
    }
};

int mainA() {
    
    std::unique_ptr<Test> test(new Test(99));
    test->sadHello();
    
    std::unique_ptr<int> ptr(new int(10));  // Create a unique_ptr managing an integer.
    std::cout << *ptr << std::endl;          // Access the value.

    // Transfer ownership using std::move.
    std::unique_ptr<int> ptr2 = std::move(ptr);
    if (!ptr) {
        std::cout << "ptr is now empty" << std::endl;
    }

    return 0;
}
