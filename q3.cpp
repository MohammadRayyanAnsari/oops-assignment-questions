// 3. Program to swap two numbers using a third variable.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter first number: "; cin >> a;
    cout << "Enter second number: "; cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "Swapped: " << a << " " << b;
    return 0;
}
