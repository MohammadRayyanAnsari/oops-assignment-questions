
// 55. Program to demonstrate constructor overloading.
#include <iostream>
using namespace std;

class a {
public:
    a() { cout << "None "; }
    a(int x) { cout << "One "; }
};

int main() {
    a x, y(5);
    return 0;
}