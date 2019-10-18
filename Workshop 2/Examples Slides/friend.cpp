#include <iostream>
#include <string>
using namespace std;

class Quadrilateral {
   public:
      Quadrilateral();
      Quadrilateral(double, double);
      friend void PrintArea(Quadrilateral); // Friend global function
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
void PrintArea(Quadrilateral q) {
   // Since PrintArea() is a friend function, it has access to private member variables width & height
   cout << "Area - " << q.width * q.height << endl; 
}

int main() {
   Quadrilateral quadOne;
   Quadrilateral quadTwo(4, 4);

   PrintArea(quadOne);
   PrintArea(quadTwo);

   return 0;
}


