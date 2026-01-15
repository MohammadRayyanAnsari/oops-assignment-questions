// 19. Program to check leap year.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter year: "; cin >> a;
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) cout << "Leap year";
    else cout << "Not leap year";
    return 0;
}
