// 84. Program for hierarchical inheritance.
#include <iostream>
using namespace std;

class a { public: int x = 10; };
class b : public a {};
class c : public a {};

int main() {
    b m; c n;
    cout << m.x << n.x;
    return 0;
}