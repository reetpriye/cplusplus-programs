#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }
    for (int i = 0; i < 40; i++)
    {
        /* code */
        if (i == 2)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}

/*
WARNING: Output may vary according to
architecture type or input.
Output of the program : 
0
1
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
*/