#include <iostream>

using namespace std;

inline bool ascending(int a, int b) {
    return a < b;
}
inline bool descending(int a, int b) {
    return a > b;
}

void my_sort(int arr[], int n, bool(*cmp) (int, int)) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (cmp(arr[j], arr[i])) {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main() {
    int arr[]= {5, 2, 8, 1, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    my_sort(arr, n, ascending);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    my_sort(arr, n, descending);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}