// 30. Program to show use of goto.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter age: "; cin >> a;
    if (a < 18) goto stop;
    cout << "Enter";
    return 0;
    stop:
    cout << "Denied";
    return 0;
}