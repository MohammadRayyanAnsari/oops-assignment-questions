// 50. Program to count number of objects using static variable.
#include <iostream>
using namespace std;

class a {
public:
    static int c;
    a() { c++; }
};

int a::c = 0;

int main() {
    a x, y, z;
    cout << "Objects: " << a::c;
    return 0;
}