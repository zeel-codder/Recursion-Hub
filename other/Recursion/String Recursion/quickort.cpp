// Time complexity is O(nlog n);

#include <bits/stdc++.h>
using namespace std;
int partition(int *arr,int s ,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    //left or right wala part
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
  int p= partition(arr,s,e);
  //left part ke leye
  quickSort(arr,s,p-1);
  //Right part ke leye
  quickSort(arr,p+1,e);


}
int main()
{
    int arr[6]={3,1,2,4,5,0};
    int n=6;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}