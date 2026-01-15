
// 9. Program to compute area of circle, triangle, rectangle.
#include <iostream>
using namespace std;

int main() {
    float r, b, h, l, w, res;
    cout << "Enter radius: "; cin >> r;
    res = 3.14 * r * r;
    cout << "Circle: " << res << endl;
    cout << "Enter base and height: "; cin >> b >> h;
    res = 0.5 * b * h;
    cout << "Triangle: " << res << endl;
    cout << "Enter length and width: "; cin >> l >> w;
    res = l * w;
    cout << "Rectangle: " << res;
    return 0;
}
