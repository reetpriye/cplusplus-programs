// Call by Value & Call by Reference
// Author: REET

#include <iostream>
using namespace std;

// Call by Value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Call by Reference using Pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by Reference using C++ Reference Variables
void swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Reference Variable Return
int &referenceVarReturn(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int x = 40, y = 30;
    cout << "The values of x and y are: " << x << " " << y << endl;
    swap(x, y);
    cout << "The swapped values of x and y are: " << x << " " << y << endl;
    // Values will not be changed as actual parameters(x,y) just copies its
    // value to the formal parameters(a,b). We need to pass address in order to swap.

    cout << "The values of x and y are: " << x << " " << y << endl;
    swapPointer(&x, &y);
    cout << "The swapped values of x and y are: " << x << " " << y << endl;

    cout << "The values of x and y are: " << x << " " << y << endl;
    swapReferenceVar(x, y);
    cout << "The swapped values of x and y are: " << x << " " << y << endl;

    referenceVarReturn(x, y) = 744;
    cout << "Updated value of x using reference variable: " << x << endl;
    // The function is returning a reference variable which is pointing x
    // That's the reason value of x gets updated.
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The values of x and y are: 40 30
The swapped values of x and y are: 40 30
The values of x and y are: 40 30
The swapped values of x and y are: 30 40
The values of x and y are: 30 40
The swapped values of x and y are: 40 30
Updated value of x using reference variable: 744
*/