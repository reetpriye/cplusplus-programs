// Parameterized & Default Constructors
// Author: REET

#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    Complex(int, int);
    void printNumber(void);
};

// This is a parameterized Constructor
// as it takes 2 parameter
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

void Complex ::printNumber(void)
{
    cout << "Your Number is " << a << "+" << b << "i" << endl;
}

int main()
{
    // Implicit Call
    Complex a(4, 6);

    // Explicit Call
    Complex b = Complex(5, 7);

    a.printNumber();
    b.printNumber();
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Your Number is 4+6i
Your Number is 5+7i
*/