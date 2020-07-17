// Nesting of Member Functions
// Author: REET

/*
C++ initially known as C with Classes by
Stroustrup.
OOP introduced Classes & Objects.
C++ classes are extension of Structures
in C.
Structures had limitation.
-Members are public
-No methods

Classes
-Structures + More
-Can have methods & properties
-Can make few members as private and few
 as public

Structures in C++ are typedefed.
We can declare objects along with class
declaration like this:
class Shop {
    int taxNo;
    public:
    int itemId;
    float itemPrice;
} ration, electric;
But this practice is not recommended.
By default variables initialized are
private.
ration.taxNo makes no sense as taxNo is
a private variable declared.

====NESTING OF MEMBER FUNCTION====
                        Check the code...
*/

#include <iostream>
using namespace std;

class Binary
{
    string s;
    void chkBin(void); 

public:
    void read(void);
    // void chkBin(void); 
    void onesComplement(void);
    void displayComplement(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}

void Binary ::chkBin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Kindly enter valid binary number." << endl;
            exit(0);
        }
    }
}

void Binary ::onesComplement(void)
{
    chkBin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void Binary ::displayComplement(void)
{
    cout << "Binary One's complement is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    Binary b;
    b.read();
    // b.chkBin();
    // chkBin has been nesetd inside oneComplement()
    // Hiding the implementation of chkBin()
    // We r saying to the users that invoke every
    // function. We'll take care of chkBin()
    b.onesComplement();
    b.displayComplement();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Enter a binary number: 32323
Kindly enter valid binary number.
==========Input Changed===============
Enter a binary number: 1010100
Binary One's complement is: 0101011
*/