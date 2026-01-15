// 71. Program with static data member.
#include <iostream>
using namespace std;

class a { public: static int s; a() { s++; } };
int a::s = 0;

int main() {
    a x, y;
    cout << a::s;
    return 0;
}