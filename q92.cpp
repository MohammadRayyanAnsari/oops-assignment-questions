// 92. Program showing destructor order in inheritance.
#include <iostream>
using namespace std;

class a { public: ~a() { cout << "2"; } };
class b : public a { public: ~b() { cout << "1"; } };

int main() {
    { b res; }
    return 0;
}