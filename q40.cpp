// 40. Program using structure to store student details.
#include <iostream>
using namespace std;

struct a {
    int r;
    float m;
};

int main() {
    a res;
    cout << "Enter roll: "; cin >> res.r;
    cout << "Enter marks: "; cin >> res.m;
    cout << "Roll: " << res.r << " Marks: " << res.m;
    return 0;
}