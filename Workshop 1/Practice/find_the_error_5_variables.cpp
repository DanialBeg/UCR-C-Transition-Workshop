#include <iostream>

int main(int argC, char** argV)
{
	int x = 5;
	int* xPtr = &x;

	std::cout << *xPtr << std::endl;

	int* newPtr = xPtr;
	delete xPtr;

	std::cout << *newPtr << std::endl;

	return 0;
}
