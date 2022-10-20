#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Vlue of n \n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){       //outer loop
        for(int j=0;j<n;j++){        //inner
                cout<<"*";
        }
        cout<<endl;
    }   

return 0;
}