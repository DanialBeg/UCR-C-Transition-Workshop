#include <iostream>

void swap(int* x, int* y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

int main(int argC, char** argV)
{
	int* x = new int; 
	int* y = new int;

	std::cout << "Enter two numbers: ";
	std::cin >> *x >> *y;
	printf("Before swap -> x: %d, y: %d\n", *x, *y);
	swap(x, y);
	printf("After swap -> x: %d, y: %d\n", *x, *y);
}
