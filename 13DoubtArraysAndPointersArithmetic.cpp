// Author: REET

#include <iostream>
using namespace std;

int main()
{
    // Array Example
    int marks1[] = {23, 45, 56, 89};

    int mathMarks1[4];
    mathMarks1[0] = 2278;
    mathMarks1[1] = 738;
    mathMarks1[2] = 378;
    mathMarks1[3] = 578;

    cout << "These are math marks1" << endl;
    cout << mathMarks1[0] << endl;
    cout << mathMarks1[1] << endl;
    cout << mathMarks1[2] << endl;
    cout << mathMarks1[3] << endl;

    // You can change the value of an array
    marks1[2] = 455;
    cout << "These are marks1" << endl;
    // cout<<marks1[0]<<endl;
    // cout<<marks1[1]<<endl;
    // cout<<marks1[2]<<endl;
    // cout<<marks1[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "The value of marks1 " << i << " is " << marks1[i] << endl;
    }

    // Pointers and arrays
    /*
    If we initialize an array, then we
    don't initialize pointer like this
    (int* a = &marks1)
    By default mentioning (int* a = marks1)
    will store the address of marks1[0] in
    the pointer a.
    If we add 1 to the pointer(e.g. p++)
    That will be a pointer to the next
    index of array(i.e marks1[1]) holding 
    its address.
    If we dereference it(e.g. *(p++)), we
    will get the value at index 1 of the
    marks1 array. i.e. marks1[1].    
    */
    int marks2[] = {1, 2, 3, 4, 5};
    int* ptrm = marks2;

    cout << "The value of marks2 at index [0] is: " << *ptrm << endl;
    cout << "The value of marks2 at index [1] is: " << *(ptrm++) << endl;
    cout << "The value of marks2 at index [2] is: " << *(ptrm+2) << endl;
    cout << "The value of marks2 at index [3] is: " << *(ptrm+3) << endl;
    cout << "The value of marks2 at index [4] is: " << *(ptrm+4) << endl;
    cout << endl;
    cout << "The address of marks2 at index [0] is: " << ptrm << endl;
    cout << "The address of marks2 at index [1] is: " << ptrm++ << endl;
    cout << "The address of marks2 at index [2] is: " << (ptrm+2) << endl;
    cout << "The address of marks2 at index [3] is: " << (ptrm+3) << endl;
    cout << "The address of marks2 at index [4] is: " << (ptrm+4) << endl;
    cout << endl;
    
    // Not the ideal way to print address as an integer value
    printf("The address of marks2 at index [0] in decimal format is: %d\n", ptrm);
    printf("The address of marks2 at index [1] in decimal format is: %d\n", ptrm++);
    printf("The address of marks2 at index [2] in decimal format is: %d\n", ptrm + 2);
    printf("The address of marks2 at index [3] in decimal format is: %d\n", ptrm + 3);
    printf("The address of marks2 at index [4] in decimal format is: %d\n", ptrm + 4);
    
    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
13ArraysAndPointersArithmetic.cpp: In function ‘int main()’:
13ArraysAndPointersArithmetic.cpp:69:81: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int*’ [-Wformat=]
 rintf("The address of marks2 at index [0] in decimal format is: %d\n", ptrm);
                                                                            ^
13ArraysAndPointersArithmetic.cpp:70:83: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int*’ [-Wformat=]
 ntf("The address of marks2 at index [1] in decimal format is: %d\n", ptrm++);
                                                                      ~~~~~~^
13ArraysAndPointersArithmetic.cpp:71:85: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int*’ [-Wformat=]
 f("The address of marks2 at index [2] in decimal format is: %d\n", ptrm + 2);
                                                                    ~~~~~~~~^
13ArraysAndPointersArithmetic.cpp:72:85: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int*’ [-Wformat=]
 f("The address of marks2 at index [3] in decimal format is: %d\n", ptrm + 3);
                                                                    ~~~~~~~~^
13ArraysAndPointersArithmetic.cpp:73:85: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘int*’ [-Wformat=]
 f("The address of marks2 at index [4] in decimal format is: %d\n", ptrm + 4);
                                                                    ~~~~~~~~^
These are math marks1
2278
738
378
578
These are marks1
The value of marks1 0 is 23
The value of marks1 1 is 45
The value of marks1 2 is 455
The value of marks1 3 is 89
The value of marks2 at index [0] is: 1
The value of marks2 at index [1] is: 1
The value of marks2 at index [2] is: 4
The value of marks2 at index [3] is: 5
The value of marks2 at index [4] is: 32767

The address of marks2 at index [0] is: 0x7fff3f0ebc64
The address of marks2 at index [1] is: 0x7fff3f0ebc64
The address of marks2 at index [2] is: 0x7fff3f0ebc70
The address of marks2 at index [3] is: 0x7fff3f0ebc74
The address of marks2 at index [4] is: 0x7fff3f0ebc78

The address of marks2 at index [0] in decimal format is: 1057930344
The address of marks2 at index [1] in decimal format is: 1057930344
The address of marks2 at index [2] in decimal format is: 1057930356
The address of marks2 at index [3] in decimal format is: 1057930360
The address of marks2 at index [4] in decimal format is: 1057930364
*/