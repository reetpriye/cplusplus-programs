// Static Data Members And Methods
// Author: REET

#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void);
    void getData(void);
    static void getCount(void);
};

void Employee::setData(void)
{
    cout << "Enter the Employee ID: ";
    cin >> id;
    count++;
}

void Employee::getData(void)
{
    cout << "The Id of this Employee is " << id << " and this is the Employee number " << count << endl;
}

void Employee::getCount(void)
{
    {
        cout << "Value of count is: " << count << endl;
        // cout << id; Can only access static variables
    }
}

int Employee ::count;
// int Employee ::count = 1000;

/*
=======STATIC VARIABLES========
Also known as class variable, used to
share same memory location.
Every obejct of the class share this
variable.
Every object of the class has the permission
to change the value of static variables,
and it'll be retained on next call.
Default value is 0.

========STATIC METHODS===========
No need for any object reference to invoke
the method.
*/

int main()
{
    Employee ravi, raja, roshan;
    ravi.setData();
    ravi.getData();
    Employee ::getCount();
    raja.setData();
    raja.getData();
    Employee ::getCount();
    roshan.setData();
    roshan.getData();
    Employee ::getCount();
    return 0;
}