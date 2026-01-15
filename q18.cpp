// 18. Program to evaluate an algebraic expression.
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x and y: "; cin >> x >> y;
    int res = (x * x) + (2 * x * y) + (y * y);
    cout << "(x+y)^2 is: " << res;
    return 0;
}