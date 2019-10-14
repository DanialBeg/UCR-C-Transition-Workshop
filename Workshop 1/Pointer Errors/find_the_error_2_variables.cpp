#include <iostream>
using namespace std;

// think of int* the same as int[]
// the int* points to the first element
// int* + 1 points to the second element 
// int* + n points to the (n+1) element
// this program doesn't print correctly
// can you fix it?

int main() {
    int* intArr = new int(4);
    *intArr = 1;
    *(intArr+1) = 2;
    *(intArr+2) = 3;
    *(intArr+3) = 4;

    cout << "This program is supposed to print 1 2 3 4 " << endl;

    for (unsigned i = 0; i < 4; ++i) {
        cout << intArr << " ";
    }

    cout << endl;
}
