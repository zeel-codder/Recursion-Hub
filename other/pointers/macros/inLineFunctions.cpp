#include <bits/stdc++.h>
using namespace std;

void func(int& a,int& b){
    a++;
    b++;
    cout<<a<<b<<endl;
}
inline int getMax(int a,int b){
        return (a>b) ?a:b;
}
int main()
{
    // func(5,6);
    int a=5;
    int b=6;
    // cout<<(a>b ?a:b);
    cout<<getMax(a,b)<<endl;

    a=a+3;
    b=b+1;
    cout<<getMax(a,b)<<endl;
return 0;
}