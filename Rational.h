#include <ostream>
class Rational
{
    public:
    int num();
    int den();
    Rational(int p, int q = 1);
    Rational(const Rational& r);
    Rational operator * (Rational b);
    Rational operator / (Rational b);
    Rational operator + (Rational b);
    Rational operator - (Rational b);
    Rational operator * (int b);
    Rational operator / (int b);
    Rational operator + (int b);
    Rational operator - (int b);
    Rational operator = (Rational a);
    bool operator != (Rational b);
    bool operator <= (Rational b);
    bool operator >= (Rational b);
    bool operator < (Rational b);
    bool operator > (Rational b);
    bool operator == (Rational b);
    inline friend std::ostream& operator<<(std::ostream& out, Rational a) {
        out << a.num() << "/" << a.den();
    }
    private:
    int p, q;
    int gcd(int a, int b);
};