// 24. Program for grading system using if-else.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter marks: "; cin >> a;
    if (a >= 90) cout << "S";
    else if (a >= 75) cout << "A";
    else cout << "B";
    return 0;
}
