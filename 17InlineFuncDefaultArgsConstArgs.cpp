// Inline Function,Default & Constant Args
// Author: REET

#include <iostream>
using namespace std;

inline int multiply(int x, int y)
{
    return x * y;
}

int func1(int x, int y)
{
    static int z = 0;
    z = z + 1; // Next time this function is run, the value of z will be retained
    return x * y + z;
}

/*
Make a function inline only if the 
computation inside the function is few.
If we make a heavy computing function 
inline, it will take all the space of the
cache.
Don't use static variable with inline.
This is just a request to the compiler.
*/

int moneyReceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}

/*
By default, if we pass only one argument
factor will be by default 1.04
Always keep initialized parameters at the
last.
*/

/*
int strlen(const char *p) {

}
We can use const keyword so that function
don't change the actual parameter.
e.g. We just need the length of the string
from this function.
No need to change any string.
*/


int main()
{

    int a, b;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << "The product is: " << multiply(a, b) << endl;
    cout << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << "The result using static is: " << func1(a, b) << endl;
    cout << endl;
    int money = 100000;
    cout << "If you have Rs. " << money << " in your account, you will receive Rs. " << moneyReceived(money) << " in your account" << endl;
    cout << "For VIP: If you have Rs. " << money << " in your account, you will receive Rs. " << moneyReceived(money, 1.1) << " in your account" << endl;

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the value of a: 
4
Enter the value of b: 
5
The product is: 20
The product is: 20
The product is: 20
The product is: 20
The product is: 20
The product is: 20
The product is: 20
The product is: 20
The product is: 20
The product is: 20

The result using static is: 21
The result using static is: 22
The result using static is: 23
The result using static is: 24
The result using static is: 25
The result using static is: 26
The result using static is: 27
The result using static is: 28
The result using static is: 29
The result using static is: 30

If you have Rs. 100000 in your account, you will receive Rs. 104000 in your account
For VIP: If you have Rs. 100000 in your account, you will receive Rs. 110000 in your account
*/