#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a=5;
    int *p=&a;
    int **q=&p;
    cout<<a<<endl;
    cout<<"Address of a is :: "<<p<<endl; 
    // cout<<"Address of a &p is :: "<<&p<<endl; 
    cout<<"Address of a is :: "<<p<<endl; 
    cout<<"Address of p is "<<q<<endl;
return 0;
}