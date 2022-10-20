#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num=6;
    cout<<num<<endl;
    // Address of is & operator
    cout<<"Address is "<<&num<<endl;
    int *ptr=&num;
    cout<<ptr<<endl;
    // cout<<num++<<endl;
    cout<<*ptr<<endl;
return 0;
}