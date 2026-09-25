#include <iostream>
using namespace std;

int main() {
    double salary = 50000;

    double &newSalary = salary;

    // Increase salary by 10%
    newSalary = newSalary + (newSalary * 0.10);

    // Display salary using old variable
    cout << "Salary after 10% increment: " << salary << endl;

    return 0;
}