#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i];
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    printArray(arr,5,2);
return 0;
}