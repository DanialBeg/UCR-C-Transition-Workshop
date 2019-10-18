#include <iostream>

class Cube
{
  int side;
  public:
    Cube()
    {
      std::cout << "Constructor Called";
    }
    ~Cube()
    {
      std::cout << "Destructor Called";
    }
};

int main()
{
  return 0;
}
