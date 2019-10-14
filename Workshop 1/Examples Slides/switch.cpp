#include <iostream>
#include <ctime>

int main(int argC, char** argV)
{	
	int num1, num2;
	char operation;
	std::cout << "Enter an expression: ";
	std::cin >> num1 >> operation >> num2;

	switch (operation)
	{
	case '+':
		std::cout << num1 + num2 << std::endl;
		break;
	case '-':
		std::cout << num1 - num2 << std::endl;
		break;
	case '*':
		std::cout << num1 * num2 << std::endl;
		break;
	case '/':
		std::cout << num1 / num2 << std::endl;
		break;
	default:
		std::cout << "Invalid Operation" << std::endl;
	}

	return 0;
}
