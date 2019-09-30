#include <iostream>
using namespace std;

// char** is the same as char[][]
// its a pointer to a pointer
// since an array is just a pointer to the first element
// the char** is a pointer that points to other pointers (2)
// each (2) is a block of memory, the pointer points to the first element
// so char** is like a 2d array

int main(int argc, char** argv) {
    if (argc > 10) {
        cout << "That's too many arguments" << endl;
        return 1;
    } else {
        if (argv[2][2] == "4") {
            cout << "Correct!" << endl;
        } else {
            cout << "Try again!" << endl;
        }
    }
}
