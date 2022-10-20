// double ended queue insertion and deletion can perform at both side
#include <bits/stdc++.h>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(5);
    d.push_front(2);
    d.push_front(3);
    // for (int i = 0; i < d.size(); i++)
    // {
    //     cout << d[i] << " ";
    // }
    for (int i : d)
    {
        cout << i << " ";
    }
    // d.pop_back();
    cout << endl;
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    cout << "First element at index 1 is ::" << d.at(1) << endl;
    cout << "Front :: " << d.front() << endl;
    cout << "Back :: " << d.back() << endl;
    cout << "Empty or not :: " << d.empty() << endl;
    cout << "Before erase Size :: " << d.size() << endl;
    // d.clear();
    // cout << "Before erase Size :: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase Size :: " << d.size() << endl;

    for (int i : d)
    {
        cout << i << " ";
    }

    // cout << "Before erase Capacity :: " << d.capacity() << endl;
}