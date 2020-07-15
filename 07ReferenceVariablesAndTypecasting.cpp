// Reference Variable & Typecasting
// Author: REET

/*

*/

#include <iostream>
using namespace std;

int c = 45;
int main()
{
    int a, b, c = 0;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    cout << "The value of local variable c is: " << c << endl;
    cout << "The value of global variable c is: " << ::c << endl;
    // Explicitly demanding for global variable value.

    return 0;
}