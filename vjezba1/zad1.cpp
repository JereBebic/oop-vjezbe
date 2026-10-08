#include <stdio.h>

int main() {
    int a{}, b{};

    if (scanf("%d %d", &a, &b) != 2) {
        return 1;
    }

    int zbroj{a + b};
    double sredina{(a + b) / 2.0};
    bool usporedba{a < b};

    printf("%d\n", zbroj);
    printf("%.2f\n", sredina);
    printf("%d\n", usporedba);

    return 0;
}
