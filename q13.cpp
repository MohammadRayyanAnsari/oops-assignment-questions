// 13. Program to demonstrate logical operators.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter 0 or 1 for a and b: "; cin >> a >> b;
    cout << "AND: " << (a && b) << " OR: " << (a || b);
    return 0;
}