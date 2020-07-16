// Structures, Unions & Enums in C++
// Author: REET

#include <iostream>
using namespace std;

// struct employee1 {
//     int eId;
//     char favChar;
//     float salary;
// };

// union employee2 {
//     int eId;
//     char favChar;
//     float salary;
// };

// Using Typedef

typedef struct employee1 {
    int eId; // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 bytes
} em1;
// Allocates (4+1+4)bytes

typedef union employee2 {
    int eId; 
    char favChar;
    float salary;
} em2;

/*
Allocates memory for one variable only
whose allocation size is larges.
In this case 4 bytes will be alloted.
*/

int main() {

    // struct employee1 ravi;
    em1 ravi;
    ravi.eId = 871289;
    ravi.favChar = 'r';
    ravi.salary = 120000000;
    cout << "Ravi's Employee ID: " << ravi.eId << endl;
    cout << "Ravi's Favourite Character: " << ravi.favChar << endl;
    cout << "Ravi's Salary: " << ravi.salary << endl;

    // union employee2 reet;
    em2 reet;
    reet.eId = 871289;
    reet.favChar = 'r';
    reet.salary = 120000000;
    cout << "Reet's Employee ID: " << reet.eId << endl;
    cout << "Reet's Favourite Character: " << reet.favChar << endl;
    cout << "Reet's Salary: " << reet.salary << endl;

    enum Meal { breakfast, lunch, dinner };
    Meal m1 = breakfast;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    cout << "Is (m1 == 0): "<< (m1 == 0) << endl;
    cout << "Is (m1 == 1): "<< (m1 == 1) << endl;
  return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
Ravi's Employee ID: 871289
Ravi's Favourite Character: r
Ravi's Salary: 1.2e+08
Reet's Employee ID: 1290068416
Reet's Favourite Character: �
Reet's Salary: 1.2e+08
0
1
2
Is (m1 == 0): 1
Is (m1 == 1): 0
*/