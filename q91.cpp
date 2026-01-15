

// 91. Program showing constructor order in inheritance.
#include <iostream>
using namespace std;

class a { public: a() { cout << "1"; } };
class b : public a { public: b() { cout << "2"; } };

int main() {
    b res;
    return 0;
}
