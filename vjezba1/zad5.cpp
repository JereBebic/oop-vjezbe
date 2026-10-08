#include <iostream>
#include <cmath>

using namespace std;

struct Tocka {
    double x;
    double y;
};

void pomakni(Tocka* t, double dx, double dy) {
    t->x += dx;
    t->y += dy;
}

double udaljenost(const Tocka* a, const Tocka* b) {
    return sqrt((a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y));
}

void pomakni(Tocka& t, double dx, double dy) {
    t.x += dx;
    t.y += dy;
}

double udaljenost(const Tocka& a, const Tocka& b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

int main() {
    Tocka t1{1.0, 2.0};
    Tocka t2{4.0, 6.0};

    pomakni(&t1, 2.0, 3.0);
    double d1 = udaljenost(&t1, &t2);

    pomakni(t1, 2.0, 3.0);
    double d2 = udaljenost(t1, t2);

    cout << "Udaljenost (pokazivaci): " << d1 << endl;
    cout << "Udaljenost (reference): " << d2 << endl;

    Tocka tocke[5] = {
        {3.0, 4.0},
        {1.0, 1.0},
        {5.0, 2.0},
        {-0.5, 0.5},
        {2.0, 3.0}
    };

    Tocka ishodiste{0.0, 0.0};
    int najblizaIndeks = 0;
    double minUdaljenost = udaljenost(tocke[0], ishodiste);

    for (int i = 1; i < 5; i++) {
        double d = udaljenost(tocke[i], ishodiste);
        if (d < minUdaljenost) {
            minUdaljenost = d;
            najblizaIndeks = i;
        }
    }

    cout << "Tocka najbliza ishodistu: (" 
         << tocke[najblizaIndeks].x << ", " 
         << tocke[najblizaIndeks].y << ")" << endl;

    return 0;
}