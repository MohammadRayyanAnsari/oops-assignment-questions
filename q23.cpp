// 23. Program using nested if.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number: "; cin >> a;
    if (a != 0) {
        if (a > 0) cout << "Positive";
        else cout << "Negative";
    }
    return 0;
}