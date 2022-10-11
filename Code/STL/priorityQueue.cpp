// first element is always  big , the default is Max heap otherwise it will be Min Heap

#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> max; // It is a Max Heap way to create a priority queue when we remove a element it will always remove max element in full queue

    priority_queue<int, vector<int>, greater<int> > min; // way of creation of Min Heap
    //for Maximum heap
    max.push(1);
    max.push(2);
    max.push(3);
    max.push(0);
    cout<<"Size is :: "<<max.size()<<endl;
    int n=max.size();
    for (int i = 0; i < n; i++)
    {
        cout<<max.top()<<endl;
        // cout << i << " ";
        max.pop();
    }
    cout<<endl;

    // Minimum Heap


     min.push(1);
    min.push(2);
    min.push(3);
    min.push(0);
    cout<<"Size is :: "<<min.size()<<endl;
    int m=min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<endl;
        // cout << i << " ";
        min.pop();
    }
    cout<<endl;
}