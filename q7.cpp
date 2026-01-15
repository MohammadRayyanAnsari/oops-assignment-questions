// 7. Program to convert temperature (C to F).
#include <iostream>
using namespace std;

int main() {
    float c, res;
    cout << "Enter Celsius: "; cin >> c;
    res = (c * 9 / 5) + 32;
    cout << "Fahrenheit: " << res;
    return 0;
}