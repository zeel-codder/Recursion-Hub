#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int *p;  bad practise of creating the address becaue it contain the garbege value
    // int i=5;
    // int *ptr=&i;

    // int *p=0;
    // p=&i;
    // cout<<"Address of ptr is :: "<<ptr<<endl;
    // cout<<"Value of ptr is :: "<<*ptr<<endl;

    // int num=5;
    //  cout<<"Before "<<num<<endl;
    // int *p=&num;
    // (*p)++;
    // cout<<"After "<<num<<endl;

    //copying pointer in another pointer

    // int i=5;
    // int *p=&i;
    // int *q=p;
    // (*q)++;
    //  cout<<p<<" - "<<q<<endl;
    //  cout<<*p<<" - "<<*q<<endl;

    // Important concept

    int i=5;
    int *p=&i;
    // *p++; give a error
    (*p)++;
    cout<<*p<<endl;



return 0;
}