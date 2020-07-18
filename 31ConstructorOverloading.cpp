// Constructor Overloading
// Author: REET

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber();
};

void Complex ::printNumber()
{
    cout << "Your Number is " << a << "+" << b << "i" << endl;
}

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Your Number is 4+6i
Your Number is 5+0i
Your Number is 0+0i
*/