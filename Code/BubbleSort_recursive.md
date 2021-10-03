---
Name: 'DragonUncaged'
Github: 'https://github.com/DragonUncaged'
WebSite: 'https://www.linkedin.com/in/ankitrao/'
Problem: 'Sort the List Using Bubble Sort Recursively'
Description: 'Given List Of the number Use the Bubble Sort Algorithm To Sort the Array Increasing Order '
Explanation: 'Same the Bubble Sort Algorithm But the Loop is being replaced By Recursion'
Language: 'c++' 
---
```c++
/*
Ex. 
Input:
6
64 34 25 12 22 11 90
Output:
11 12 22 25 34 64 90 

Base Case: If array size is 1, return.
Do One Pass of normal Bubble Sort. This pass fixes last element of current subarray.
Recur for all elements except last of current subarray.

*/

#include "bits/stdc++.h"
using namespace std;

#define vi vector<int>
#define PB push_back


void bubbleSort(vi &a, int i, int n)
{
    if (n == 1)
        return;

    if (i == n - 1)
    {
        loop(z, 0, a.size() - 1) cout << a[z] << " ";
        cout << "\n";
        bubbleSort(a, 0, n - 1);
        return;
    }

    if (a[i] > a[i + 1])
        swap(a[i], a[i + 1]);

    bubbleSort(a, i + 1, n);
}

signed main()
{
    int T;
    cin >> T;
    vi arr;
    loop(i, 0, T - 1)
    {
        int x;
        cin >> x;
        arr.PB(x);
    }
    bubbleSort(arr, 0, T);
    logarr(arr, 0, arr.size() - 1);
    return 0;
}

```
