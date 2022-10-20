#include <bits/stdc++.h>
using namespace std;

// void reverse(string &s,int i,int j){
//     if(i>j)
//     {
//         return ;
//     }
//     swap(s[i],s[j]);

//     reverse(s,i+1,j-1);
// }

// void reverseStr(string s){
//     if(s.size()==0){
//         return ;
//     }
//     reverseStr(s.substr(1));
//     cout<<s[0];

// }

void revStr(string &s ,int i){
    if(s.size()==i){
        return ;
    }
    char temp=s[i];
    revStr(s,i+1);
    cout<<temp;
}
int main()
{

string s="Ayush Yadav";
// reverse(s,0,s.length()-1);
// cout<<s<<endl;
// reverseStr(s);
revStr(s,0);


return 0;
}