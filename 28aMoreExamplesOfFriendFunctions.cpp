// More Examples of Friend Functions
// Author: REET

#include <iostream>
using namespace std;

class Y;
class X
{
    int data;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects give me " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add(a1, b1);

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Summing data of X and Y objects give me 8
*/