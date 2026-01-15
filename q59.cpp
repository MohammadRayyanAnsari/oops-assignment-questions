// 59. Program to initialize const data members in constructor.
#include <iostream>
using namespace std;

class a {
    const int v;
public:
    a(int x) : v(x) { cout << v; }
};

int main() {
    a res(10);
    return 0;
}