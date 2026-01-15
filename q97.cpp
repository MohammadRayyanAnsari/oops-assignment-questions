// 97. Program demonstrating operator overloading.
#include <iostream>
using namespace std;

class a {
    int v;
public:
    a(int x) : v(x) {}
    void operator++() { ++v; cout << v; }
};

int main() {
    a res(10);
    ++res;
    return 0;
}