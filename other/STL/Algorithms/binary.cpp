#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding the Number 6 "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower Bound is "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound is "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"Max of "<<a<<" & "<<b<<" is :"<<max(a,b)<<endl;
    cout<<"Min of "<<a<<" & "<<b<<" is :"<<min(a,b)<<endl;

    cout<<" Without Swap a & b are "<<a<<" & " << b<<endl;
    swap(a,b);

    cout<<" After Swap a & b are "<<a <<" & "<< b<<endl;

    string abc="Ayush";
    reverse(abc.begin(),abc.end());
    cout<<abc<<endl;
    // if(abc==r){
    //     cout<<"The name is similar from back to front or front to back\n";
    // }
    // else{
    //     cout<<"The name is not similar from back to front or front to back\n";
    // }
    // rotate(v.begin(),v.end());
    // cout<<"After rotate "<<endl;
    // for(auto i:v){
    //     cout<<i<<endl;
    // }
    sort(v.begin(),v.end()); // based on intro sort algorithm made by three algorithms like quick sort ,heap sort ,insertion sort
    for(auto i:v){
        cout<<i<<" ";
    }
}