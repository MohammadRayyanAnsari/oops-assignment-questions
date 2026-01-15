// 25. Program using switch statement.
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter day (1-7): "; cin >> a;
    switch(a) {
        case 1: cout << "Mon"; break;
        default: cout << "Invalid";
    }
    return 0;
}