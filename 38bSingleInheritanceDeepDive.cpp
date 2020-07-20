// Single Inheritance(Privately Derived)
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

class Derived : private Base
{
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{
    setData();
    data3 = data2 * getData1();
}

/*
Now we have to invoke setData() in
process as it is privately inherited from
base class and is private member of
derived class.
*/

void Derived ::display()
{
    cout << "Value of data1 is  " << getData1() << endl;
    cout << "Value of data2 is  " << data2 << endl;
    cout << "Value of data3 is  " << data3 << endl;
}

int main()
{
    Derived der;
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