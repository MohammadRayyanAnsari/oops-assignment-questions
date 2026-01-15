
// 20. Program to check if a number is positive/negative/zero.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number: "; cin >> a;
    if (a > 0) cout << "Positive";
    else if (a < 0) cout << "Negative";
    else cout << "Zero";
    return 0;
}