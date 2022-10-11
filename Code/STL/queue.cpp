// Queue mean Line it works on First in First Out FIFO
#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<string> q;
    q.push("Ayush");
    q.push("Yadav");
    q.push("SDE");
    cout << "Front element is " << q.front();
    cout << "Size befor pop is :: " << q.size() << endl;
    q.pop();
    cout << endl;
    cout << "Front element is " << q.front() << endl;
    cout << "Size after pop is ::" << q.size() << endl;
}