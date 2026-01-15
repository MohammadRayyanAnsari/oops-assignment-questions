// 93. Program for virtual base class.
#include <iostream>
using namespace std;

class a { public: int x; };
class b : virtual public a {};
class c : virtual public a {};
class d : public b, public c {};

int main() {
    d res;
    res.x = 10;
    cout << res.x;
    return 0;
}
