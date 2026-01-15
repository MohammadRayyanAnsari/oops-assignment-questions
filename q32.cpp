// 32. Program to find largest element in array.
#include <iostream>
using namespace std;

int main() {
    int a[5], res;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) cin >> a[i];
    res = a[0];
    for (int i = 1; i < 5; i++) if (a[i] > res) res = a[i];
    cout << "Largest: " << res;
    return 0;
}