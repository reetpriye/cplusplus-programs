// Single Inheritance(Publicly Derived)
// Author: REET

#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData()
{
    data1 = 10;
    data2 = 20;
}

int Base ::getData1()
{
    return data1;
}

int Base ::getData2()
{
    return data2;
}

class Derived : public Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Value of data1 is  " << getData1() << endl;
    cout << "Value of data2 is  " << data2 << endl;
    cout << "Value of data3 is  " << data3 << endl;
}

/*
Private member can not be inherited,
but we have the getData1() function which
helps to get access to private variable
of the base class.
For data1, we have to invoke function
getData1() as data1 is private member of
Base Class.
data2 can be obtained directly as it is
inherited publicly from base class.
data3 can be directly printed as it is 
initialized in derived class.
*/

int main()
{
    Derived der;
    der.setData();
    der.process();
    der.display();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Value of data1 is  10
Value of data2 is  20
Value of data3 is  200
*/