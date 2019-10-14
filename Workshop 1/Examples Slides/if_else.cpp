#include <iostream>
#include <ctime>

int main(int argC, char** argV)
{	
	srand(static_cast<unsigned int>(time(0)));
	int randNum = rand() % 11 + 1;
	int num = 0;

	if		  (randNum % 3 == 0) { num = pow(randNum, 3); }
	else if (randNum % 2 == 0) { num = pow(randNum, 2); }
	else				               { num = randNum; }

	std::cout << randNum << std::endl;

	return 0;
}
