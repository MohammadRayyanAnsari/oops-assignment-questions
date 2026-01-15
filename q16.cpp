// 16. Program demonstrating increment/decrement.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter number: "; cin >> a;
    cout << "Pre++: " << ++a << " Post--: " << a--;
    return 0;
}