// List is implemented using Double Linked List(front pointer and back pointer ) we can not access is not possible using at krke ni nikal skte h and hume triverse krke pahuchna hoga wha
// jumesa sbki time complexity O(1) hogi but erase ki O(n)
#include <bits/stdc++.h>
// #include <list>
using namespace std;
int main()
{
    list<int> l;
    // list<int> n(l);
    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "After erase is :: " << endl;
    l.erase(l.begin());
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << "Size of list is " << l.size();
}