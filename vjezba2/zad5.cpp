#include <iostream>

using namespace std;

inline double add(double a, double b) {
    return a + b;
}

inline double subtract(double a, double b) {
    return a - b;
}

inline double multiply(double a, double b) {
    return a * b;
}

inline double divide(double a, double b) {
    return a / b;
}

int main() {
    double(*operations[4])(double,double)={add,subtract,multiply,divide};

    double num1,num2;
    int choice;

    cout << "Unesi prvi broj: ";
    cin >> num1;

    cout << "Unesi drugi broj: ";
    cin >> num2;

    cout << "Unesi redni broj operacije (0-zbrajanje, 1-oduzimanje, 2-mnozenje, 3-dijeljenje): ";
    cin >> choice;


    if (choice >= 0 && choice < 4) {
        if (choice == 3 && num2 == 0) {
            cout << "Greska: Dijeljenje s nulom nije dozvoljeno." << endl;
        } else {
            double result = operations[choice](num1, num2);
            cout << "Rezultat: " << result << endl;
        }
    } else {
        cout << "Greska: Neispravan izbor operacije." << endl;
    }
    return 0;
}
