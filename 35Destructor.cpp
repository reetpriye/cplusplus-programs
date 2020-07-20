// Destructor in C++
// Author: REET

#include <iostream>
using namespace std;

int count = 0;

class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when constructor is called for the object n" << count << endl;
    }
    ~Num()
    {
        cout << "This is the time when destructor is called for the object n" << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are inside the main function" << endl;
    cout << "Creating first object n1" << endl;
    Num n1;
    {
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "We are back in main function block" << endl;
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
We are inside the main function
Creating first object n1
This is the time when constructor is called for the object n1
Creating two more objects
This is the time when constructor is called for the object n2
This is the time when constructor is called for the object n3
Exiting this block
This is the time when destructor is called for the object n3
This is the time when destructor is called for the object n2
We are back in main function block
This is the time when destructor is called for the object n1
*/