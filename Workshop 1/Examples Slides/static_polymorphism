#include <iostream>

void swap(int* x, int* y, int* z)
{
	swap(x, y);
	swap(y, z);
}

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
	int* z = new int;

	std::cout << "Enter three numbers: ";
	std::cin >> *x >> *y >> *z;
	printf("Before swap -> x: %d, y: %d, z: %d\n", *x, *y, *z);
	swap(x, y, z);
	printf("After swap -> x: %d, y: %d, z: %d\n", *x, *y, *z);
}
