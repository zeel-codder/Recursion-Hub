/*
* Contributor🎅
* Name: Saksham Negi
* Github: https://github.com/sakshamian
*/

/**
*   Problem: String Creation
*   Description: Given a string, generate all different strings that can be created using its characters in alphabetical order.
*   Explanation: First print an integer k: the number of strings. 
*   Then print k lines: the strings in alphabetical order.
*
*   Input: 
*     abc
*   Output: 
*     6
*     abc
*     acb
*     bac
*     bca
*     cab
*     cba   
         
*/

#include<bits/stdc++.h>
using namespace std;
 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
set<string> ans;
 
void permute(string s, int l ,int r){
    if(l==r)
        ans.insert(s);
    
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
 
void solve(){
    string s; cin>>s;
    permute(s,0,s.size()-1);
 
    cout<<ans.size()<<endl;
    for(auto str:ans){
        cout<<str<<endl;
    }
}
int main() {
    fast;
    solve();
}