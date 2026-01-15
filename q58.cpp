// 58. Program to dynamically allocate memory in constructor.
#include <iostream>
using namespace std;

class a {
    int *p;
public:
    a(int v) { p = new int(v); cout << *p; }
    ~a() { delete p; }
};

int main() {
    a res(50);
    return 0;
}