#include <memory>

int main(int argC, char** argV)
{
  std::unique_ptr<int> uPtr  = std::make_unique<int>();

  std::shared_ptr<int> sPtr  = std::make_shared<int>();
  std::shared_ptr<int> sPtr2 = sPtr;
  
  std::weak_ptr<int>   wPtr  = std::make_shared<int>();
  std::weak_ptr<int>   wPtr2 = wPtr;
  return 0;
}
