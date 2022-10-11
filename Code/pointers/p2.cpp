#include <bits/stdc++.h>
using namespace std;
int main()
{
    // float f=10.5;
    // float p=2.5;
    // float *ptr=&f;
    // (*ptr)++;
    // *ptr=p;
    // cout<<*ptr<<"  "<<f<<"  "<<p<<endl;
    // int a=7;
    // int b=17;
    // int *c=&b;
    // *c=7;
    // cout<<a<<" "<<b;
    // int *a=0;
    // int b=10;
    // *a=b;
    // int a=7;
    // int *c=&a;
    // c=c+1;
    // cout<<a<<" "<<*c;
    // int a=7;
    // int *c=&a;
    // c=c+1;
    // cout<<c<<endl;
    // int a[]={1,2,3,4};
    // cout<<*a<<" "<<(*a+1)<<endl;
    // char s[]="hellow";
    // char *p=s;
    // cout<<s[0]<<" "<<p[0];

    // char st[]="ABCD";
    // for(int i=0;st[i]!='\0';i++){
    //     cout<<st[i]<<(*st)+i<<*(i+st)<<i[st]<<endl;

    // }

    float a[5]={12.5,10.0,13.5,90.5,0.5};
    float *ptr1=&a[0];
    float *ptr2=ptr1+3;

    cout<<*ptr2;
    cout<<ptr2-ptr1;






return 0;
}