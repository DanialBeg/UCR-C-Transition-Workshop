#include <iostream>

int main(int argC, char** argV)
{
	auto sum  = [](int x, int y) { return x + y; };
	auto diff = [](int x, int y) { return x - y; };
	auto mul  = [](int x, int y) { return x * y; };
	auto quot = [](int x, int y) { return x / y; };

	std::cout << sum(1, 5) << std::endl;
	std::cout << diff(7, 2) << std::endl;
	std::cout << mul(3, 8) << std::endl;
	std::cout << quot(0, 4) << std::endl;

	return 0;
}
