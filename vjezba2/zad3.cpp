#include <iostream>
#include <algorithm>

using namespace std;

template <typename T> bool ascending(T a, T b) {
    return a < b;
}

template <typename T> bool descending(T a, T b) {
    return a > b;
}

template <typename T, typename Comp> void my_sort(T arr[], int n, Comp cmp) {
    sort(arr, arr + n, cmp);
}

int main() {
    int arr[]= {5, 2, 8, 1, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    my_sort(arr, n, ascending<int>);

    cout << "Uzlazno (int): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    double d_arr[]= {3.5, 1.2, 4.8, 2.1, 5.9};
    int d_n=sizeof(d_arr)/sizeof(d_arr[0]);
    my_sort(d_arr, d_n, descending<double>);


    cout << "Silazno (double): ";
    for (int i = 0; i < d_n; i++) {
        cout << d_arr[i] << " ";
    }
    cout << endl;

    char c_arr[]= {'z', 'a', 'm', 'b', 'c'};
    int c_n=sizeof(c_arr)/sizeof(c_arr[0]);
    my_sort(c_arr, c_n, ascending<char>);

    cout << "Uzlazno (char): ";
    for (int i = 0; i < c_n; i++) {
        cout << c_arr[i] << " ";
    }
    cout << endl;

    
    return 0;
}