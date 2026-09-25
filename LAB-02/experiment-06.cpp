#include <iostream>
using namespace std;

int main() {
    double salary = 50000;

    
    double *newSalary = &salary;

    
    *newSalary = *newSalary + (*newSalary * 0.10);

    
    cout << "Salary after 10% increment: " << salary << endl;

    return 0;
}