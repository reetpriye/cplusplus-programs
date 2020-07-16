// Reference Variable & Typecasting
// Author: REET

#include <iostream>
using namespace std;

int a = 45;
int main()
{

    int a = 0;
    cout << "The value of local variable a is: " << a << endl;
    cout << "The value of global variable a is: " << ::a << endl;
    cout << endl;
    // Explicitly demanding for global variable value.

    float d = 34.4F;
    cout << "The value of d is: " << (int)d << endl;
    // By default when we pass values to function. It is
    // considered as double.
    // We can use F/f or L/l to explicitly declare it
    // float or double.
    cout << "The size of 34.4 is: " << sizeof(34.4) << endl;   //Double
    cout << "The size of 34.4F is: " << sizeof(34.4F) << endl; //Float
    cout << "The size of 34.4f is: " << sizeof(34.4f) << endl; //Float
    cout << "The size of 34.4L is: " << sizeof(34.4L) << endl; //LongDouble
    cout << "The size of 34.4l is: " << sizeof(34.4l) << endl; //LongDouble
    cout << endl;

    // ====Reference Variables=====
    // Rohan --> Monty --> Rohu --> Dangerous Coder

    float x = 455;
    float &y = x;
    cout << x << endl;
    cout << y << endl;
    cout << endl;

    // ====Type Casting====
    float b = 45.46;
    cout << "The value of int(b) is: " << int(b) << endl;
    cout << "The value of (int)b is: " << (int)b << endl;

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The value of local variable a is: 0
The value of global variable a is: 45
*/