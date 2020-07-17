// Friend Function in C++
// Author: REET

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    friend Complex sumComplex(Complex o1, Complex o2);
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "Your Number is: " << a << "+" << b << "i" << endl;
    }
};

/*
If some foreign function wants to get
the private data of a class. The class
needs to make a "friend" declaration
of the function.
Also this foreign function has just got
the permission to access the private 
variables. This function is not a member
of the class.
======FRIEND FUNCTION PROPERTIES=======
Not in the scope of the class.
c1.sumComplex() is invalid.
Can be invoked without the help of any
object.
Usually contains the object as arguments.
Can be declared inside public or private
section of the class.
It can not access the members directly 
by their names and need
object_name.member_name to access any
member.
*/

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Your Number is: 1+4i
Your Number is: 5+8i
Your Number is: 6+12i
*/