#include <bits/stdc++.h>
using namespace std;
void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}

int& func(int a){
    int num=10;
    int ans=&num;
    return ans;

}
int main()
{
    // int i=5;
    // int &j=i;
    // cout<<"Value of i is "<<i<<endl;
    // cout<<"Reference of i is "<<&i<<endl;
    
    // cout<<"Reference Value  of i in J :: "<<j<<endl;
    // j++;
    //  cout<<"Value of i  after j++ is "<<i<<endl;
    // cout<<"Reference Value  of i in J :: "<<j<<endl;


    // cout<<"Reference Address  of i in J :: "<<&j<<endl;

    int n=5;
    cout<<"Before Update :: "<<n<<endl;
    update2(n);
    cout<<"After Update :: "<<n<<endl;
return 0;
}