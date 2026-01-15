

// 39. Program demonstrating pointers basic operations.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter value: "; cin >> a;
    int *p = &a;
    cout << "Value: " << *p << " Address: " << p;
    return 0;
}