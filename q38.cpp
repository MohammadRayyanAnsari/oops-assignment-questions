// 38. Program to copy string manually.
#include <iostream>
using namespace std;

int main() {
    char a[50], res[50];
    cout << "Enter string: "; cin >> a;
    int i = 0;
    while (a[i] != '\0') { res[i] = a[i]; i++; }
    res[i] = '\0';
    cout << "Copied: " << res;
    return 0;
}
