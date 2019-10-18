#include <iostream>
#include <string>

class Person {
  public: 
    virtual std::string getName() = 0;
};

class Student : public Person {
  public:
    std::string getName() override { return "Student"; }
};

class TA : public Person {
  public:
    std::string getName() override { return "TA"; }
};

void Print(Person* obj) {
  std::cout << obj->getName() << std::endl;
}

int main()
{
  Student* s = new Student;
  TA* t = new TA;
  
  Print(s);
  Print(t);
  
  return 0;
}
