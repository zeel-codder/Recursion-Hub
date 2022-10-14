#include <bits/stdc++.h>
using namespace std;
int poweroftwo(int n){
    //  Base case
    if(n==0){
        return 1;
    }
    // rescursive function

    return 2 * poweroftwo(n-1);

}
int main()
{
    int n;
    cout<<"Enter the value of n :: \n";
    cin>>n;
    int ans=poweroftwo(n);
    cout<<ans<<endl;
return 0;
}