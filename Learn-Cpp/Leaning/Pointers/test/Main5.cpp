#include <iostream>

int main5() {
	char ch = 'a';
	char cd = 'h';
	char gg = '0';
	char* prtA = &ch;
	char** prtB = &prtA;
	prtA = &cd;

	**prtB = '3';
	*prtB = &gg;

	std::cin.get();
	return 0;


}