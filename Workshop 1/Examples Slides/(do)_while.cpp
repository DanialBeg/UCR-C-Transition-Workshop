#include <iostream>
#include <ctime>

int main(int argC, char** argV)
{
	srand(static_cast<unsigned int>(time(0)));
	int randNum;

	do 
	{
		randNum = rand() % 26;
		while (randNum % 3)
		{
			randNum = rand() % 51;
		}
	} while (randNum % 5);

	return 0;
}
