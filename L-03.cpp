#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    // Constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    // Destructor
    ~Student()
    {
        cout << "desctructor function called" << endl;
        delete cgpaPtr; // Free the allocated memory
    }

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("rahul kumar", 8.9);
    s1.getinfo(); // prints 8.9 — correct!
    return 0;
}
