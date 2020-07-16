// Header Files and Operators
// Author: REET

/*
There are two types of header files:
1. System header files: It comes with the
compiler.
2. User defined header files: It is
written by the programmer.

Visit en.cppreference.com
*/

#include <iostream>
using namespace std;

int main()
{

    int a = 4, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators in C++" << endl;
    cout << "The value of a + b is: " << a + b << endl;
    cout << "The value of a - b is: " << a - b << endl;
    cout << "The value of a * b is: " << a * b << endl;
    cout << "The value of a / b is: " << a / b << endl;
    cout << "The value of a % b is: " << a % b << endl;
    cout << "The value of a++ is: " << a++ << endl;
    cout << "The value of a-- is: " << a-- << endl;
    cout << "The value of ++a is: " << ++a << endl;
    cout << "The value of --a is: " << --a << endl;
    cout << endl;

    // Comparison Operator
    cout << "Comparison Operator in C++" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << endl;

    // Logical Operators
    cout << "Logical Operators in C++" << endl;
    cout << "The value of logical and operator ((a == b) && (a < b)): " << ((a == b) && (a < b)) << endl;
    cout << "The value of logical or operator ((a == b) || (a < b)): " << ((a == b) && (a < b)) << endl;
    cout << "The value of logical not operator (!(a == b)): " << (!(a == b)) << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The value of a + b is: 9
The value of a - b is: -1
*/