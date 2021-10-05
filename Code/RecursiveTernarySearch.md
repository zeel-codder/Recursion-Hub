---
Name: 'Divya Patel'  
Github: 'https://github.com/dd-712'  
WebSite: ''  
Problem: 'Ternary Search'  
Description: 'Search for given key in an array using Ternary Search recursively'  
Language: 'C++' 
---

```C++

#include <bits/stdc++.h>
using namespace std;

// to implement ternary search we require sorted array
// we will divide array into three parts and will check 
// in which part our key might be present

int ternarySearch(int l, int r, int key, int ar[])
{
    if (l > r)
        return -1;

    int mid1 = l + (r - l) / 3;
    int mid2 = r - (r - l) / 3;

    if (ar[mid1] == key)
        return mid1;
    if (ar[mid2] == key)
        return mid2;

    if (key < ar[mid1])
        return ternarySearch(l, mid1 - 1, key, ar);
    else if (key > ar[mid2])
        return ternarySearch(mid2 + 1, r, key, ar);
    else
        return ternarySearch(mid1 + 1, mid2 - 1, key, ar);

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    int index = ternarySearch(0, n, key, arr);

    if (index != -1)
        cout << key << " found at index " << index << endl;
    else
        cout << "Key not found";
}

```