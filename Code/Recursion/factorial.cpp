#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    //Base Case
    if(n==0){
        return 1;
    }
    // int smallerProblem=factorial(n-1);
    // int bigerProblem=n*smallerProblem;
    // return bigerProblem;

    return n* factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter the n :: \n";
    cin>>n;
    int ans=factorial(n);
    cout<<"Factorial is :: "<<ans<<endl;
return 0;
}