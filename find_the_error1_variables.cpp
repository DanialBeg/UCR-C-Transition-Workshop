#include <iostream>
using namespace std;

// HINT : how do declare a pointer?

int main() {
    int a = 100;
    int* a_ptr = a;

    cout << "a's value: " << *a_ptr << endl;
    cout << "a's address: " << a_ptr << endl;

    if (a > 111) {
        *a_ptr = 23;
    } else {
        *a_ptr = 999;
    }

    cout << "\na's new value: " << a << endl;
    cout << "a's address: " << &a << endl;
}
