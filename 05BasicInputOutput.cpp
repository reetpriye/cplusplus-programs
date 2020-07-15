// Basic Input/Output in C++
// Author: REET

/*
In C++ sequence of bytes corresponding to
input and output are known as streams.
Input Stream: Direction of flow of bytes
from input device(e.g. Keyboard) to the
main memory.
Output Stream: Direction of flow of bytes
from main memory to the output device
(e.g. Display).

<< is known as the Insertion Operator.
>> is known as the Extraction Operator.
*/

#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter the value of num1:\n";
    cin >> num1;
    cout << "Enter the value of num2:\n";
    cin >> num2;
    cout << "The sum is: " << num1 + num2 << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the value of num1:
4
Enter the value of num2:
7
The sum is: 11
*/