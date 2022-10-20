#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int s,int e,int key){
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==key)return mid;
    if(arr[mid]<key) {
        return binarySearch(arr,mid+1,e,key);
    }
    return binarySearch(arr,s,mid-1,key);
}
int main()
{
    int n=5;
    int arr[5]={1,2,3,4,5};
    int key=4;
    int ans=binarySearch(arr,0,n-1,key);
    cout<<ans<<endl;
return 0;
}