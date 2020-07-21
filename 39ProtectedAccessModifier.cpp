// Protected Access Modifier in C++
// Author: REET

#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

/*
Protected members act as Private members
which can be inherited.
----------------------------------------
Members | PublDerv | PrivDerv | ProtDerv
----------------------------------------
Priv    | NotInher | NotInher | NotInher
Prot    | Prot     | Priv     | Prot
Publ    | Publ     | Priv     | Prot
----------------------------------------
*/

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout << b.a;
    // Will not work as it is derived as protected member
    return 0;
}