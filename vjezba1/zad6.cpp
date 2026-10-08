#include <iostream>
#include <numeric>

using namespace std;

struct Fraction {
    int numerator;
    int denominator;

    void reduce() {
        int nzd = std::gcd(numerator, denominator);
        numerator /= nzd;
        denominator /= nzd;
    }

    double value() const {
        return static_cast<double>(numerator) / denominator;
    }

    void print() const {
        cout << numerator << "/" << denominator;
    }
};

Fraction sum(const Fraction& a, const Fraction& b) {
    Fraction rezultat;
    rezultat.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    rezultat.denominator = a.denominator * b.denominator;
    rezultat.reduce();
    return rezultat;
}

int main() {
    Fraction f1{1, 2};
    Fraction f2{1, 4};

    Fraction f3 = sum(f1, f2);

    f1.print();
    cout << " + ";
    f2.print();
    cout << " = ";
    f3.print();
    cout << endl;

    cout << "Vrijednost: " << f3.value() << endl;

    return 0;
}