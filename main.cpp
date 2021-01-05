#include <iostream>
#include <string.h>
#include "Rational.h"

using namespace std;

int main() {
    Rational a(1, 2);
    Rational b(1, 4);
    Rational s = a + b;
    Rational m = a * b;
    Rational d = a / b;
    Rational ss = a - b;
    Rational ss1 = b - 1;
    cout << " a + b = ";
    cout << s;
    cout << endl;
    cout << " a * b = ";
    cout << m;
    cout << endl;
    cout << " a / b = ";
    cout << d;
    cout << endl;
    cout << " a - b = ";
    cout << ss;
    cout << endl;
    cout << "b - a = ";
    cout << ss1;
    cout << endl;   
    cout << "a > 0 = " << (a > 0) << endl;
    cout << "a - b > 0 = " << (a - b > Rational(0)) << endl;
    cout << "b - a > 0 = " << (b - a > Rational(0)) << endl;
    cout << a * 2 << endl;
    cout << a + 2 << endl;
    cout << a - 2 << endl;
    cout << a / 2 << endl;
}
