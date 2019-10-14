#include <iostream>

int main(int argC, char** argV)
{
  int myArray[] = { 1, 2, 3, 4, 5 );
  
  for (auto & item : myArray)
  {
    std::cout << item << std::endl;
    item += 5;
    std::cout << item << std::endl;
  }
  return 0;
}
