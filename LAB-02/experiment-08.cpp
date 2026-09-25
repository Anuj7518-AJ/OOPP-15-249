#include <iostream>
using namespace std;


void callByValue(int x) {
    x = x + 10;
}

void callByReference(int &x) {
    x = x + 10;
}


void callByAddress(int *x) {
    *x = *x + 10;
}

int main() {

    int a = 10;
    int b = 10;
    int c = 10;

    cout << "Before Call by Value: " << a << endl;
    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    cout << endl;

    cout << "Before Call by Reference: " << b << endl;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl;

    cout << endl;

    cout << "Before Call by Address: " << c << endl;
    callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}