// Recursion and Recursive Functions
// Author: REET

#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n * fact(n - 1);
}

int fib(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

/*
fib(5)
fib(4) + fib(3)
fib(3) + fib (2) + fib (2) + fib(1)
As we are invoking with same argument,
so it's better to use iterative approach
here.
*/

int main()
{
    int n, m;
    cout << "Enter the number you want factorial of: " << endl;
    cin >> n;
    cout << "The factorial of " << n << " is " << fact(n) << endl;
    cout << "Kindly enter the position no. to get the fibonacci at that position" << endl;
    cin >> m;
    cout << "The term in fibonacci series at position " << m << " is: " << fib(m) << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the number you want factorial of: 
5
The factorial of 5 is 120
Kindly enter the position no. to get the fibonacci at that position
4
The term in fibonacci series at position 4 is: 3
*/