#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return isSorted(arr+1,n-1);

}
int main()
{
    int n=6;
    int arr[6]={2,9,6,9,11,13};

   bool ans= isSorted(arr,n);
   if(ans){
    cout<<"Array is Sorted"<<endl;
   }
   else{
    cout<<"Array is Not Sorted"<<endl;
   }

return 0;
}