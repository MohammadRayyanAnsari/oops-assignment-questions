

// 17. Program Using conditional (ternary) operator.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: "; cin >> a >> b;
    int res = (a > b) ? a : b;
    cout << "Larger: " << res;
    return 0;
}