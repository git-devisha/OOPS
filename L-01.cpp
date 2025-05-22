#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
class Teacher
{
public:
    Teacher(string name, string dept, string subject, double salary)
    {
        // Parameterised constructor
        this->name = name;
        this->dept = dept;
        this->salary = salary;
        this->subject = subject;
    }
    Teacher()
    {
        name = " ";
        dept = " ";
        salary = 0;
        subject = " ";
    }
    // properties/attributes
    string name;
    string dept;
    string subject;
    // copy constructor
    Teacher(Teacher &orgObj)
    {
        cout << "copy constructor called" << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->salary = orgObj.salary;
        this->subject = orgObj.subject;
    }

private:
    double salary;

    void changedept(string newdept)
    {
        dept = newdept;
    }

public:
    // setter
    void setsalary(double sal)
    {
        salary = sal;
    }
    // getter
    double getsalary()
    {
        return salary;
    }

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "\n";
    }
};

// Encapsulation
class Account
{
public:
    string accountid;
    string username;

private:
    double balance;
    string password;
};

int main()
{
    Teacher t1("john", "CS", "cpp", 25000); // constructor is called initialised
    t1.getinfo();

    Teacher t2(t1); // shallow copy
    t2.getinfo();
    return 0;
    Teacher t3;
    Teacher t4;
    Teacher t5;
    return 0;
}