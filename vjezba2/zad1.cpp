#include <iostream>
#include <string>


using namespace std;

#define MAX(a,b) a > b ? a : b;
#define MAX2(a,b) ((a) > (b)) ? (a) : (b);

inline int myMax(int a, int b) {
    return a > b ? a : b;
}
template <typename T> T myMaxTemplate(T a, T b) {
    return a > b ? a : b;
}

int main() {
    int a=MAX(3,5);
    int b=2 * MAX(3,5);
    int c=MAX(3,5) + 1;
    int i = 3;
    int prvi=MAX(i++,2);
    int drugi=myMax(i++,2);

    cout << a << b << c << endl;
    cout << prvi << endl;
    cout << drugi << endl;

    cout << i << endl;

    cout << myMaxTemplate(3,5) << endl;
    cout << myMaxTemplate(3.5,5.2) << endl;
    cout << myMaxTemplate('a','z') << endl;
    cout << myMaxTemplate(string("hello"), string("world")) << endl;

    return 0;
}