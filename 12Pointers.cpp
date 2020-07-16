// Pointers in C++
// Author: REET

#include <iostream>
using namespace std;

int main()
{

    int a = 4;
    int *b = &a;
    // Pointer is a variable which stores address of a variable

    // & -> (Address of) Ampersand Operator
    cout << "The address of variable a is: " << b << endl;
    cout << "The address of variable a is: " << &a << endl;
    cout << endl;

    // * -> (Value at) Dereference Operator
    cout << "The value of variable a is: " << a << endl;
    cout << "The value of variable a is: " << *b << endl;
    cout << endl;

    //Pointer to Pointer
    int **c = &b;
    cout << "The address of pointer which holds address of variable a is: " << c << endl;
    cout << "The address of pointer which holds address of variable a is: " << &b << endl;
    cout << "The value of c is: " << *c << endl;
    cout << "The value of pointer which holds address of variable a is: " << **c << endl;
    cout << endl;

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The address of variable a is: 0x7ffd1d3dbcd4
The address of variable a is: 0x7ffd1d3dbcd4

The value of variable a is: 4
The value of variable a is: 4

The address of pointer which holds address of variable a is: 0x7ffd1d3dbcd8
The address of pointer which holds address of variable a is: 0x7ffd1d3dbcd8
The value of c is: 0x7ffd1d3dbcd4
The value of pointer which holds address of variable a is: 4
*/