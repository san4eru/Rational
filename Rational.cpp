#include <ostream>
#include "Rational.h"
int Rational::num() {return p;}
int Rational::den() {return q;}
Rational::Rational(int p, int q) {
    if (q != 0) {
        this->p = p / abs(gcd(p, q));
        this->q = abs(q) / abs(gcd(p, q));
    } else {
        this->p = p;
        this->q = 1;
    }
}

Rational::Rational(const Rational& r) {
    this->p = r.p;
    this->q = r.q;
}

Rational Rational::operator * (Rational b) {
    return Rational(this->num() * b.num(), this->den() * b.den());
}

Rational Rational::operator/ (Rational b) {
    if (b.den() == 0) return *this;
    return *this * Rational(b.q * b.p / abs(b.p), abs(b.p));
}
Rational Rational::operator+ (Rational b) {
    return Rational(this->p * b.q + b.p * this->q, abs(this->q * b.q));
}
Rational Rational::operator - (Rational b) {
//std::cout << this->num() << " " << this->den() << " " << b.num() << " " << b.den() << std::endl;
    return *this + Rational(-b.p, b.q);
}

Rational Rational::operator * (int b) {
    return Rational(b) * (*this);
}

Rational Rational::operator+ (int b) {
    return Rational(b) + (*this);
}

Rational Rational::operator-(int b) {
    return (*this) - Rational(b);
}

Rational Rational::operator/ (int b) {
    return (*this) / Rational(b);
}

Rational Rational::operator= (Rational a) {
    if (*this != a) {
        this->p = a.p;
        this->q = a.q;
    }
    return *this;
}
bool Rational::operator!= (Rational b) {
    return !(*this==b);
}
bool Rational::operator <= (Rational b) {
    return (*this - b).p <= 0;
}
bool Rational::operator >= (Rational b) {
    return (*this - b).p >= 0;
}
bool Rational::operator < (Rational b) {
    return (*this - b).p < 0;
}
bool Rational::operator > (Rational b) {
    return (*this - b).p > 0;
}
bool Rational::operator == (Rational b) {
    return (this->p == b.p && this->q == b.q);
}

int Rational::gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}