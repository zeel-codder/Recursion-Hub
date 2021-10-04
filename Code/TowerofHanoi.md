---
Name: 'Divya Patel'  
Github: 'https://github.com/dd-712'  
WebSite: ''  
Problem: 'Tower of Hanoi'  
Description: 'Move Entire stack of disc from one rod to another'  
Language: 'C++' 
---

```C++

#include <bits/stdc++.h>
using namespace std;

// In this puzzel we have n disks and 3 rods 
// All the disk are on rod A and our objective is to bring all the disks
// on C by following given rules
// 1. One disk can me moved at a time
// 2. Disk can be moved from top of the stack of a rod to top of the stack of another rod
// 3. No disk should be placed on smaller disk

// this function will print the steps to achieve our objective
void tOH(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move " << n << ": " << from << "----->" << to << endl;
        return;
    }

    tOH(n - 1, from, aux, to);
    cout << "Move " << n << ": " << from << "----->" << to << endl;
    tOH(n - 1, aux, to, from);
}

int main()
{
    int n;
    // number of discs
    cin >> n;

    // A,B,C are the rods
    tOH(n, 'A', 'C', 'B');

    return 0;
}

```