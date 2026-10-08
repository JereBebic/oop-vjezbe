#include <iostream>

using namespace std;

int main() {
    int a{};
    int b{};

    cout << "Unesite broj a: ";
    cin >> a;
    cout << "Unesite broj b: ";
    cin >> b;

    int zbroj{a + b};
    double sredina{(a + b) / 2.0};
    bool jeManje{a < b};

    cout << "Zbroj: " << zbroj << endl;
    cout << "Aritmeticka sredina: " << sredina << endl;
    cout << "Usporedba (a < b): " << jeManje << endl;

    return 0;
}