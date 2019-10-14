#include <iostream>

int main(int argC, char** argV)
{
	int x, y;
	int* xPtr, yPtr;
	
	std::cin >> x >> y;

	std::cout << "Before change: " << x << '\t' << y << std::endl;

	*xPtr ^= *yPtr;
	*yPtr ^= *xPtr;
	*xPtr ^= *yPtr;

	std::cout << "After change: " << x << '\t' << y << std::endl;

	return 0;
}
