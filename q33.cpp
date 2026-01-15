// 33. Program to find second-largest element.
#include <iostream>
using namespace std;

int main() {
    int a[5], m1 = -1, m2 = -1;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) cin >> a[i];
    for (int i = 0; i < 5; i++) {
        if (a[i] > m1) { m2 = m1; m1 = a[i]; }
        else if (a[i] > m2 && a[i] != m1) m2 = a[i];
    }
    cout << "Second Largest: " << m2;
    return 0;
}