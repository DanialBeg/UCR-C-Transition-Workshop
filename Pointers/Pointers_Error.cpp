#include <iostream>

int main(int argC, char** argV)
{
	char* cString = new char[100];

	std::cin >> cString;
	std::cout << *cString << std::endl;

	return 0;
}
