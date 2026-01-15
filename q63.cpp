// 63. Program with friend function accessing private data.
#include <iostream>
using namespace std;

class a {
    int v = 100;
    friend void f(a x);
};

void f(a x) { cout << x.v; }

int main() {
    a res;
    f(res);
    return 0;
}