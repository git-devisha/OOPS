#include <iostream>
#include <string>
using namespace std;

class parent
{
public:
    void getinfo()
    {
        cout << "parent class" << endl;
    }

    virtual void hello()
    {
        cout << "hello from child" << endl;
    }
};

class child : public parent
{
public:
    void getinfo()
    {
        cout << "child class" << endl;
    }
};

int main()
{
    parent *p;
    child c;
    p = &c;       // base class pointer pointing to derived class object
    p->getinfo(); // calls child class getinfo() function
    p->hello();   // calls parent class hello() function
    return 0;
}