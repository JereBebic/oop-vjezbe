#include <iostream>

using namespace std;

int& find_max(int arr[], int n) {
    int max=0;
    for (int i =1; i < n; i++) {
        if (arr[i] > arr[max]) {
            max=i;
        }
    }
    return arr[max];
}
int main() {
    int numbers[]={4,-7,12,0,9,-3};
    for (int broj : numbers) {
        cout << broj << " ";
    }
    cout << endl;

    for (int& broj : numbers) {
        if (broj < 0 ) {
            broj = -broj;
        }
    }
    find_max(numbers,6)=0;

    for (int broj : numbers) {
        cout << broj << " ";
    }
    return 0;
}