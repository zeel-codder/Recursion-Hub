// always store  Unique element 
#include <bits/stdc++.h>
using namespace std;
int main()
{
set<int> s;
s.insert(1);
s.insert(1);
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
// for(auto i : s){
//     cout<<i<<" "<<endl;
// }


cout<<"After erase"<<endl;
set<int> :: iterator it=s.begin();
s.erase(it);
// 
cout<<"Present or not "<<s.count(6)<<endl;
set<int>:: iterator itr=s.find(4);
for(auto it=itr;it!=s.begin();it++)
{
    cout<<it<<endl;
}
}