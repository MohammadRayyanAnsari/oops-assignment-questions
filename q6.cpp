// 6. Program to calculate simple interest.
#include <iostream>
using namespace std;

int main() {
    float p, r, t, res;
    cout << "Enter principal: "; cin >> p;
    cout << "Enter rate: "; cin >> r;
    cout << "Enter time: "; cin >> t;
    res = (p * r * t) / 100;
    cout << "Interest: " << res;
    return 0;
}
