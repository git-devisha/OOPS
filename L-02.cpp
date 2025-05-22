#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double *cpaptr;
    double cgpa;

    // Constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
        cpaptr = new double;
        *cpaptr = cgpa;
    }

    // Deep copy constructor
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpa = obj.cgpa;
        cpaptr = new double;
        *cpaptr = *(obj.cpaptr);
    }

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cpaptr << endl;
    }
};

int main()
{
    Student s1("rahul kumar", 8.9);
    Student s2(s1);     // deep copy
    *(s2.cpaptr) = 9.0; // only modifies s2 now
    s1.getinfo();       // prints 8.9 — correct!
    s2.getinfo();       // prints 9.0
    return 0;
}
