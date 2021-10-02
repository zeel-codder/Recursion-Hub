---
Name: 'Tanmay Kulkarni'
Github: 'https://github.com/tanmayck1201'
WebSite: 'https://tanmayck1201.github.io/'
Problem: 'Binary Search'
Description: 'To search & check if particular element is present in the list or not using binary search.'
Explanation: 'Size of an array, Array, & key element is given by user & following algorithm will 
check if that element is present in arraylist or not & give it's index accordingly!
Ex. 
Size of an array: 5     (given by user)
A:  12, 34, 45, 57, 67  (given by user)
Key: 45                 (given by user)

// recursive binary search algo/logic
RBinSearch(A, l, h, key) = {
        // get mid index of list
        mid = (l + h) / 2;

        // low(l) shouldn't get greater than/equals to high(h), if becomes then STOP!
        while(l <= h)
            // if key found at middle of list, return it's index.
            A[mid] == key

            // if key is less than mid, search in 1st half of divided list
            RBinSearch(A, l, mid - 1, key);

            // if key is greater/equals than mid, search in 2nd half of divided list
            RBinSearch(A, mid + 1, h, key);

        // else returns -1 as element not found in the list at last!
        return -1;
}
O/P of given info & code -
The element is found at index: 2
'  
Language: 'C++' 
---
```C++
#include <iostream>
using namespace std;

class BinSearch
{
public:
    float *A;
    int size;
    int l;

    BinSearch();
    void Display();
    int RBinSearch(float A[], int l, int h, int key);
};

// Default cons. to get array elements.
BinSearch ::BinSearch()
{
    int n;
    cout << "Enter size of an array: ";
    cin >> size;
    A = new float[size];
    l = 0;

    cout << "Enter no. of elements to enter: ";
    cin >> n;

    cout << "Enter the elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    l = n;
}

// Recursive function to implement binary search!
int BinSearch ::RBinSearch(float A[], int l, int h, int key)
{
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == key)
        {
            return mid;
        }
        else if (key < A[mid])
        {
            return RBinSearch(A, l, mid - 1, key);
        }
        else
        {
            return RBinSearch(A, mid + 1, h, key);
        }
    }
    // if key not found.
    return -1;
}

// Can display array elements.
void BinSearch ::Display()
{
    cout << "The array elements are: \n";
    for (int i = 0; i < l; i++)
    {
        cout << A[i] << endl;
    }
}

// Main/Driver function
int main()
{
    int key;
    BinSearch BS;
    cout << "Enter element to be searched: ";
    cin >> key;
    cout << "The element is found at index: " << BS.RBinSearch(BS.A, 0, BS.l, key) << endl;
    //BS.Display();

    return 0;
}
```