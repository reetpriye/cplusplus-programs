// Dynamic Init.. of Objects using Cons..
// Author: REET

#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    // r can be value like 0.04
    BankDeposit(int p, int y, int R);
    // R can be % value like 4
    void show(void);
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = 0;
    for (int i = 0; i < y; i++)
    {
        returnValue = principal * (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = (float)R / 100;
    returnValue = 0;
    for (int i = 0; i < y; i++)
    {
        returnValue = principal * (1 + interestRate);
    }
};

void BankDeposit ::show(void)
{
    cout << "Principal Amount: " << principal << endl
         << "Return value after " << years << " years: " << returnValue << endl;
};

int main()
{
    BankDeposit bd1, bd2;
    int p,p1, y;
    float r;
    int R;

    cout << "Enter the Principal Amount: ";
    cin >> p;
    cout << "Enter the Years: ";
    cin >> y;
    cout << "Enter the Rate: ";
    cin >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the Principal Amount: ";
    cin >> p1;
    cout << "Enter the Years: ";
    cin >> y;
    cout << "Enter the Rate: ";
    cin >> r;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
}