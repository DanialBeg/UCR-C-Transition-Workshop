#include <iostream>

int main(int argC, char** argV)
{
  char* myArray = new char[6]{ 48, 65, 97, 90, 122, '\0' };
  char* item = new char{'!'};
  char* iter = myArray;
  while(*iter)
  {
    std::cout << *iter << std::endl;
    iter++;
  }
  
  std::cout << *item << std::endl;
  
  delete item;
  delete[] myArray;
  
  return 0;
}
