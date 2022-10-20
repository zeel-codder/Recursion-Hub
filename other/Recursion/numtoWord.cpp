#include <bits/stdc++.h>
using namespace std;
void converter(int n ,string arr[])
{

    if(n==0){
        cout<<"Zero"<<" ";
        return ;
    }
    
    int digit=n%10;
    n=n/10;
    
    converter(n,arr);
    cout<<arr[digit]<<" ";

    
}
int main()
{   

    int n;
    cout<<"Enter the Vaue of N ::\n";
    cin>>n;
    string arr[10]={"Zero","one","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
     
   

    converter(n,arr);

return 0;
}