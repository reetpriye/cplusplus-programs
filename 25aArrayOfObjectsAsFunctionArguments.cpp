// Array of Objects as Function Arguments
// Author: REET

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the Id of the Employee: ";
        cin >> id;
    }
    void getId(void)
    {
        cout << "The Id of this Employee is: " << id << endl;
    }
};

int main()
{
    // Employee ravi, raja, lovish, shruti;
    // ravi.setId();
    // ravi.getId();
    // raja.setId();
    // raja.getId();
    // lovish.setId();
    // lovish.getId();
    // shruti.setId();
    // shruti.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter the Id of the Employee: 1
The Id of this Employee is: 1
Enter the Id of the Employee: 2
The Id of this Employee is: 2
Enter the Id of the Employee: 3
The Id of this Employee is: 3
Enter the Id of the Employee: 4
The Id of this Employee is: 4
*/