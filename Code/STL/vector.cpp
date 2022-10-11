// time complexity Big O(1);

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> a(5, 1); // assign the element with size 5 and 1 other vice in defacult case it will assign with 0
    for (int i : a)
    {
        cout << i << " ";
    }
    // vector<int> last(a); copy the element of a into last
    // v.push_back(1, 2, 3, 4, 5);
    // // int n = v.size();
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout << v[i] << endl;
    // // }
    cout << "Size is :: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Size is :: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size is :: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size is :: " << v.capacity() << endl;
    cout << "size is :: " << v.size() << endl;
    cout << "ELement at 2nd Index is :: " << v.at(2) << endl;

    cout << "front element is ::" << v.front() << endl;
    cout << "last element is ::" << v.back() << endl;
    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back(); // remove from back
    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }

    // clear operation me size zero hota h  or capacity zero ni hoti kiu ki capacity assign ho chuki hoti h
    cout << "Array size is " << v.size() << endl;
    v.clear(); // clear the vector
    cout << "Array size is " << v.size() << endl;
    // begin operation
}

// vector is a dynamic array