
// 28. Program using do-while to print number series.
#include <iostream>
using namespace std;

int main() {
    int a, i = 1;
    cout << "Enter limit: "; cin >> a;
    do {
        cout << i << " ";
        i++;
    } while (i <= a);
    return 0;
}