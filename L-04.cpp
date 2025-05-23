#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    // parameterized constructor
    Person()
    {
    }
};
class Student : public Person
{
    // inherit person name and age
public:
    int rollno;

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "rahul";
    s1.age = 21;
    s1.rollno = 123;

    s1.getinfo();
    return 0;
}