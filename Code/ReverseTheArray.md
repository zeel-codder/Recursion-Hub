---
Name: 'DragonUncaged'
Github: 'https://github.com/DragonUncaged'
WebSite: 'https://www.linkedin.com/in/ankitrao/'
Problem: 'Reverse_Array_Recursively'
Description: 'For The Given Array and its Size reverse the Array And Print It.'
Explanation: 'Just Swap the Value Of first to the Last second to the Second Last and so On..'
Language: 'c++' 
---
```c++
/**
Ex. 
Input:
1
4
1 2 3 4
Output:
4 3 2 1    
    void function (arr,start ,end,size)

    Base Case : If Traversed to all the size

    //swap the values of start and end
    swap(arr[start], arr[end]);

    //Increase the value of start and Decrease the value of end
    reverseArr(arr, start + 1, end - 1, size);
*/
#include "bits/stdc++.h"
using namespace std;

void reverseArr(int arr[], int start, int end, int n)
{
    if (start >= end)
        return;
    swap(arr[start], arr[end]);
    reverseArr(arr, start + 1, end - 1, n);
}
void PrintArr(int a[], int N)
{
    for (int z = 1; z <= N; z++)
        cout << a[z] << " ";
    cout << endl;
}

signed main()
{
    int N;
    cin >> N;
    int a[N];
    loop(i, 0, N - 1)
        cin>>a[i];

    reverseArr(a, 0, N, N);
    PrintArr(a, N);

    return 0;
}

```