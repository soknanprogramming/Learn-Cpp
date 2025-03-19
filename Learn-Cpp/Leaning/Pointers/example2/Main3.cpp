#include <iostream>

#define LOG(x) std::cout << x << std::endl;

int main3() {

	int var = 8;
	void* ptr = &var;
	

	double* ptr2 = (double*)&var;
	int test0 = 10;
	double test = 9.9999;
	char a = 'f';

	int* ptrTest = (int*)ptr;
	*ptrTest = 99;

	std::cout << *ptrTest << std::endl;
	std::cin.get();
	return 0;
}