// Parameterized And Default Constructor
// Author: REET

#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x;
    int y;
    friend Point distanceCalc(Point o1, Point o2);

public:
    Point(int a, int b);
    void displayPoint();
    void distanceCalc(Point o1, Point o2);
};

Point ::Point(int a, int b)
{
    x = a;
    y = b;
}

void Point ::displayPoint()
{
    cout << "The point is "
         << "(" << x << "," << y << ")" << endl;
}

void Point ::distanceCalc(Point o1, Point o2)
{
    cout << "The distance between the point is: " << (double)sqrt((pow((o1.x - o2.x), 2)) + (pow((o1.y - o2.y), 2))) << endl;
}

int main()
{
    Point p(1, 4);
    p.displayPoint();

    Point q(1, 6);
    q.displayPoint();
;
    p.distanceCalc(p, q);
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
The point is (1,4)
The point is (1,6)
The distance between the point is: 2
*/