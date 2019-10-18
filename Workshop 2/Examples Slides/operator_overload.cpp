#include <iostream>
#include <string>
using namespace std;

class Quadrilateral {
   public:
      Quadrilateral();
      Quadrilateral(double, double);
      void PrintArea();
      Quadrilateral operator+(Quadrilateral rhs); // Overloaded declaration
      Quadrilateral operator*(int rhs);
   private:
      double width;
      double height;
};
Quadrilateral::Quadrilateral(){
   width = 0;
   height = 0;
}
Quadrilateral::Quadrilateral(double width, double height) {
   this->width = width;
   this->height = height;
}
void Quadrilateral::PrintArea() {
   cout << "Area - " << width * height << endl;
}

Quadrilateral Quadrilateral::operator+(Quadrilateral rhs) { // Overloaded definition 
   Quadrilateral total;

   total.width = width + rhs.width;  
   total.height = height + rhs.height;  

   return total;
}
Quadrilateral Quadrilateral::operator*(int rhs) {
   Quadrilateral total;

   total.width = width * rhs;  
   total.height = height + rhs;  

   return total;
}

int main() {
   Quadrilateral quadOne(5, 5);
   Quadrilateral quadTwo(2, 2);
   Quadrilateral quadThree;

   quadThree = quadOne + quadTwo;
   quadThree.PrintArea();
   quadThree = quadThree * 2; // Scale up by factor of 2
   quadThree.PrintArea();

   return 0;
}
