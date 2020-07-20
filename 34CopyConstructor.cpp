// Copy Constructors in C++
// Author: REET

/*
Even if there is no copy constructor,
compiler provides its own copy 
constructor.
*/

#include <iostream>
using namespace std;

class Number
{
    int a = 0;

public:
    Number(){};
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy Constructor Called..." << endl;
        a = obj.a;
    }
    void display(void)
    {
        cout << "The number of this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    Number z1(z); // Copy Constructor Invoked
    z1.display();
    z2 = z;
    z2.display();
    // Copy Constructor Not Invoked, as 
    // z2 already has been initialized
    Number z3 = z;
    z3.display();
    return 0;
}