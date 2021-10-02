---
Name: 'Saksham Negi'  
Github: 'https://github.com/sakshamian'  
Problem: 'Sum Of Digits'  
Description: 'Given a number, you need to find sum of its digits using recursion.' 
Language: 'cpp'
---

```C
#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

 
ll compute(ll n){
    if(n==0){
        return 0;
    }
   return (n%10 + compute(n/10));
}
 
void solve(){
    ll n; cin>>n;
    cout<<compute(n);
}

int main() {
    fast;
    solve();
}
```
