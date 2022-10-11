#include <bits/stdc++.h>
using namespace std;
int main()
{
    // char *ch=new char;
    // cout<<"Enter the Character"<<endl;
    // cin>>ch;
    // cout<<ch<<endl;

    // int *arr=new arr[5];
    int n;
    cout<<"Enter the N :: \n";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Value of index :: "<<i<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }



return 0;
}