#include <iostream>
using namespace std;

int main() {
    int a{}, b{};

    cin >> a >> b;

    int zbroj{a + b};
    double sredina{(a + b) / 2.0};
    bool usporedba{a < b};

    cout << zbroj << endl;
    cout << sredina << endl;
    cout << usporedba << endl;

    cin.ignore();
    cin.get();
    return 0;
}
