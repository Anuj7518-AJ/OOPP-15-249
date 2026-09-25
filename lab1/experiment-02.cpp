#include <iostream>
using namespace std;
// Define a class named Student

class Student
{
    string name;
    int roll;
    string branch;

public:
    void setData(string n, int r, string b)
    {
        name = n;
        roll = r;
        branch = b;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main()
{
    Student s1, s2;

    s1.setData("Anuj", 101, "CSE");
    s2.setData("Rahul", 102, "ECE");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}