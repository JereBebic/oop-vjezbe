#include <iostream>
#include <string>

using namespace std;

struct Student {
    string ime;
    string jmbag;
    int godina_studija;
    int ects_bodovi;
    double prosjek_ocjena;
};

void filter_students(Student s[], int n, void (*action)(Student&), bool (*cond)(const Student&)) {
    for (int i = 0; i < n; i++) {
        if (cond(s[i])) {
            action(s[i]);
        }
    }
}
void print_student(Student& s) {
    cout << "Ime: " << s.ime << ", JMBAG: " << s.jmbag << ", Godina studija: " << s.godina_studija
         << ", ECTS bodovi: " << s.ects_bodovi << ", Prosjek ocjena: " << s.prosjek_ocjena << endl;
}

void povecaj_godinu(Student& s) {
    s.godina_studija++;
    cout << "Povecana godina studija za studenta: " << s.ime << " nova godina studija: " << s.godina_studija << endl;
}

int main() {
    Student s[]= {
        {"Ana Anic", "123456789", 2, 60, 4.5},
        {"Ivan Ivić", "987654321", 3, 90, 3.8},
        {"Marko Markić", "456789123", 1, 30, 4.2},
        {"Petra Petrović", "321654987", 4, 120, 3.5},
        {"Luka Lukić", "654987321", 2, 75, 4.0}
    };

    int n=sizeof(s)/sizeof(s[0]);

    cout << "---Studenti prve godine s polozenim ispitima---" << endl;
    filter_students(s, n, print_student, [](const Student& st) {
        return st.godina_studija == 1 && st.ects_bodovi > 0;
    });

    cout << "\n---Studenti s prosjekom ocjena iznad 3.5---" << endl;
    filter_students(s, n, print_student, [](const Student& st) {
        return st.prosjek_ocjena > 3.5;
    });

    cout << "\n---Studenti s 45+ ECTS bodova (upis vise godine)---" << endl;
    filter_students(s,n,povecaj_godinu,[](const Student& st){
        return st.ects_bodovi > 45;
    });
    return 0;

}