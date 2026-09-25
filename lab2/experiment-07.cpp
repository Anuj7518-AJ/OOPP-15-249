#include <iostream>
using namespace std;


void updateByReference(double &salary) {
    salary = salary + (salary * 0.10);
}


void updateByAddress(double *salary) {
    *salary = *salary + (*salary * 0.10);
}

int main() {

    
    double salary1 = 50000;

    updateByReference(salary1);

    cout << "Salary after reference update: "
         << salary1 << endl;


    
    double salary2 = 50000;

    updateByAddress(&salary2);

    cout << "Salary after pointer update: "
         << salary2 << endl;

    return 0;
}