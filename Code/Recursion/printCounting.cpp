#include <bits/stdc++.h>
using namespace std;
void deccount(int n){
    //Tail Recursion
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    deccount(n-1);
}
void inccount(int n){
    // Head Recursion
    if(n==0)
    {
        return ;
    }
    inccount(n-1);
    cout<<n<<endl;
   
}
int main()
{
    int n;
    cout<<"Enter the value of N::"<<endl;
    cin>>n;

deccount(n);
cout<<"Incresing count is "<<endl;
inccount(n);
return 0;
}