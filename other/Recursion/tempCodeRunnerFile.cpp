#include <bits/stdc++.h>
using namespace std; count(int n){
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    return count(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of N::"<<endl;
    cin>>n;
    int ans=count(n);
    cout<<ans<<endl;
return 0;
}