#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "int :" << x << endl;
    }
    void show(char ch)
    {
        cout << "char :" << ch << endl;
    }
};

int main()
{
    Print p;
    p.show('$');
    return 0;
}