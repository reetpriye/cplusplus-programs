// Constructor with Default Arguments
// Author: REET

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a , int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData(void);
};

void Simple ::printData(void)
{
    cout << "The value of datas are " << data1 << ", " << data2 << " and " << data3 << endl;
}

int main()
{
    Simple s(1);
    s.printData();

    Simple t(1, 4);
    t.printData();

    Simple u(1, 4, 5);
    u.printData();

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The value of datas are 1, 9 and 8
The value of datas are 1, 4 and 8
The value of datas are 1, 4 and 5
*/