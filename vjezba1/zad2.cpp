#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int godinaRodjenja{};
    cout << "Unesite godinu rodenja: ";
    cin >> godinaRodjenja;
    
    cin.ignore();

    string imePrezime;
    cout << "Unesite ime i prezime: ";
    getline(cin, imePrezime);

    string inicijali;
    bool novo = true;
    int brojZnakova = 0;

    for (char c : imePrezime) {
        if (!isspace(c)) {
            brojZnakova++;
            if (novo) {
                inicijali += toupper(c);
                inicijali += ".";
                novo = false;
            }
        } else {
            novo = true;
        }
    }

    int trenutnaGodina = 2026;
    int godine = trenutnaGodina - godinaRodjenja;

    cout << "Vasi inicijali su: " << inicijali << endl;
    cout << "Ove godine punite: " << godine << " god." << endl;
    cout << "Broj slova u imenu i prezimenu (bez razmaka): " << brojZnakova << endl;

    return 0;
}