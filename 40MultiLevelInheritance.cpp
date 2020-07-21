// Multi Level Inheritance in C++
// Author: REET

/*
If we are inheriting B from A and C from
B: [A-->B-->C]
1. A is the base class for B and B is the
base class for C.
2. A --> B --> C is the inheritance path.
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number(void)
    {
        cout << "The roll number is " << roll_number << endl;
    }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1, float p1)
{
    maths = m1;
    physics = p1;
}

void Exam ::get_marks(void)
{
    cout << "The marks obtained in Maths are: " << maths << endl;
    cout << "The marks obtained in Physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result ravi;
    ravi.set_roll_number(126162);
    ravi.set_marks(78.00, 92.00);
    ravi.display();
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The roll number is 126162
The marks obtained in Maths are: 78
The marks obtained in Physics are: 92
Your percentage is 85%
*/