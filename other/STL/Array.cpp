// complexity if O(1);
#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4}; // int array with 4 size;
    // dyanamic array array<int>a;

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Element at 2nd Index is " << a.at(2) << endl;
    cout << "Array is Empty or not :: " << a.empty() << endl;
    cout << "First element is :: " << a.front() << endl;
    cout << "Last element is :: " << a.back() << endl;
}