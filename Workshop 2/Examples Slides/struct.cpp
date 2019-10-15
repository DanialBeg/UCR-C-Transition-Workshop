#include <iostream>
#include <string>
using namespace std;

struct movie {
   int year;
   string title;
};

int main() {
   movie myMovie;

   myMovie.year = 2019;
   myMovie.title = "The Joker";

   cout << myMovie.title << " - " << myMovie.year << endl;
}
