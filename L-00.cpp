#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
class Teacher
{
public:
    // properties/attributes
    string name;
    string dept;
    string subject;

private:
    double salary;

    // methods/member functions
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
};

int main()
{
    Teacher t1;
    t1.name = "John";
    t1.dept = "CS";
    t1.setsalary(20000);
    t1.subject = "cpp"; // This will not work because changedept is private
    cout << t1.name << endl;
    cout << t1.getsalary() << endl;

    Teacher t2;
    Teacher t3;
    Teacher t4;
    Teacher t5;
    return 0;
}