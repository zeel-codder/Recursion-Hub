// stack work on Last in first out LIFO operation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Ayush");
    s.push("Yadav");
    s.push("SDE");
    cout << "Front :: " << s.top();
    s.pop();
    cout << "Front :: " << s.top() << endl;
    ;
    cout << "Size of stack is ::" << s.size() << endl;
    cout << "Is empty stack or not " << s.empty() << endl;
}