#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
};

class Teacher
{
public:
    string subject;
    double salary;
};
// multiple inheritance
class TA : public Student, public Teacher
{
public:
    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    TA t1;
    t1.name = "john";
    t1.subject = "C++";
    t1.getinfo();
    return 0;
}