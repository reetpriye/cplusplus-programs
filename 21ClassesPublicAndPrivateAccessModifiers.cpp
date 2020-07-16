//
// Author: REET

#include <iostream>
using namespace std;

/*
Structure's variables can be accessed
from anywhere. For security purpose, we
use class.
Also it's better to create methods in 
class.
*/

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData(void)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

// :: ----> Scope Resolution Operator

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee ravi;
    // ravi.a = 1;
    // You can't do this as variable a is private. This can be done with some method of the class.
    ravi.d = 4;
    ravi.e = 5;
    ravi.setData(1, 2, 3);
    ravi.getData();
}