#include <iostream>

using namespace std;

void my_transform(int arr[], int n, int (*f)(int)) {
    for (int i = 0; i < n; i++) {
        arr[i] = f(arr[i]);
    }
}

int twice(int x) {
    return x * 2;
}

int main() {
    int arr[]= {1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    my_transform(arr, n, twice);

    cout << "Nakon twice: ";
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int arr2[]={1,2,3,4,5};

    my_transform(arr2,n, [](int x) {
        if (x % 2 == 0) {
            return x / 2;
        } else {
            return x * 2;
        }
    });

    cout << "Nakon lambda: ";
    for (int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    int suma=0;
    int produkt=1;

    auto calc=[&](int x) {
        suma+=x;
        produkt*=x;
    };

    for (int i = 0; i < n; i++) {
        calc(arr2[i]);
    }

    cout << "Suma: " << suma << ", Produkt: " << produkt << endl;

    int prag=3;
    int s=0;

    auto sum_above=[prag, &s](int x) {
        if (x > prag) {
            s+=x;
        }
    };

    for (int i = 0; i < n; i++) {
        sum_above(arr2[i]);
    }

    cout << "Suma elemenata većih od " << prag << ": " << s << endl;

    return 0;
}