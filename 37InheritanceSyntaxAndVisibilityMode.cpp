// Inheritance Syntax and Visibility Mode
// Author: REET

#include <iostream>
using namespace std;

// Base Class

class Employee
{
public:
    int id;
    float salary;
    Employee(){};
    // Derived class need this constructor
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Derived Class
/*
Syntax:
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} 
{
    class members/methods/etc...
}
+++++++++++++++Some Notes+++++++++++++++
By default visibility mode is private.
Public Visibility Mode: Public members of
the base class become Public members of
the derived class.
Private Visibility Mode: Publci members
of the base class becomes Private members
of the derived class.
Private members are never inherited.
*/

class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(void)
    {
        cout << id << endl;
    }
};

int main()
{

    Employee ravi(1), raja(2);
    cout << ravi.salary << endl;
    cout << raja.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();
    // skillF.id; Not allowed as inherited privately
    return 0;
}