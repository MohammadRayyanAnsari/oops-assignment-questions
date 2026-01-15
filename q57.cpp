// 57. Program to show order of constructor execution.
#include <iostream>
using namespace std;

class a { public: a() { cout << "A"; } };
class b : public a { public: b() { cout << "B"; } };

int main() {
    b res;
    return 0;
}
