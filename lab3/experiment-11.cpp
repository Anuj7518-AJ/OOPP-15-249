#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b = 0) {
        return a + b;
    }

    inline int subtract(int a, int b = 0) {
        return a - b;
    }

    inline int multiply(int a, int b = 1) {
        return a * b;
    }

    inline double divide(double a, double b = 1) {
        return a / b;
    }

    int calculate(int a, int b) {
        return a + b;
    }

    double calculate(double a, double b) {
        return a * b;
    }
};

int main() {
    Calculator c;

    cout << "Addition: " << c.add(10, 5) << endl;
    cout << "Addition with default argument: " << c.add(10) << endl;
    cout << "Subtraction: " << c.subtract(10, 5) << endl;
    cout << "Multiplication: " << c.multiply(10, 5) << endl;
    cout << "Division: " << c.divide(10, 5) << endl;
    cout << "Overloaded calculate(int): " << c.calculate(10, 5) << endl;
    cout << "Overloaded calculate(double): " << c.calculate(2.5, 4.0) << endl;

    return 0;
}