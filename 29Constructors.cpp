// Constructors in C++
// Author: REET

/*
============= CONSTRUCTOR =============
Constructor is a special member function
with the same name as of the class.
It is used to initialize objects of its
class.
It is automatically invoked whenever an
object is created.
=====Characteristics of Constructor=====
It should be declared in the public
section of the class.
Automatically gets invoked whenever the
object is created.
They cannot return values and do not have
return types.
It can have default arguments.
We can not refer to their address.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber(void);
};

// This is a default constructor, 
// as it takes no parameter

Complex ::Complex(void)
{
    cout << "Hello World..." << endl;
    a = 10;
    b = 0;
    
}

void Complex ::printNumber(void)
{
    cout << "Your Number is " << a << "+" << b << "i" << endl;
}

int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Hello World...
Hello World...
Hello World...
Your Number is 10+0i
Your Number is 10+0i
Your Number is 10+0i
*/