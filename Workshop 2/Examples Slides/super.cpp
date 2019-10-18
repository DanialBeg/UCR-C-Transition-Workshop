#include <string>
#include <iostream>

class Person {
  private:
    std::string name;
  public:
    Person() {
      this->name = "Person";
    }
    std::string getName() { return this->name; };
};

class Student : public Person {
  private:
    std::string name;
  public:
    Student() {
      this->name = "Student";
    }
    std::string getName() { return this->name; };
};

int main() {
  Student* s = new Student();
  std::cout << s->Person::getName() << std::endl;  // Prints "Person"
  std::cout << s->getName() << std::endl;           // Prints "Student"
}
