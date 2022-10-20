#include <bits/stdc++.h>
using namespace std;
int search(int *arr,int s,int e,int key){
if(s>e){
    return false;
}
int mid=s+(e-s)/2;
if(arr[mid]==key) return mid;
 
return search(arr,s+1,e,key);
}
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    int key=4;
    int ans=search(arr,0,n-1,key);
    cout<<ans<<endl;
    
return 0;
}