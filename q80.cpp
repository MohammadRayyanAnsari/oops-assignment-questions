// 80. Program dynamic object creation & deletion using new/delete.
#include <iostream>
using namespace std;

class a { public: a() { cout << "New "; } ~a() { cout << "Delete"; } };

int main() {
    a *res = new a;
    delete res;
    return 0;
}