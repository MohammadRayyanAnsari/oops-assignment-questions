// 37. Program for string length without using library function.
#include <iostream>
using namespace std;

int main() {
    char a[50];
    int res = 0;
    cout << "Enter string: "; cin >> a;
    while (a[res] != '\0') res++;
    cout << "Length: " << res;
    return 0;
}