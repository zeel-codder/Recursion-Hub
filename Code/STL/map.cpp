//data will be store in form of key value and all key are unique and all are in sorted form
//complecity of map in case of insert ,erase and all O(logn)
#include <bits/stdc++.h>
// #include<map>
using namespace std;
int main()
{

map<int,string>m;// ordered map
m[1]="Ayush";
m[13]="SDE";
m[2]="Yadav";
//another way of insert
// m.insert({5,"Chandan"});
// m.insert({4,"Ayush"});
cout<<"Before erase\n";
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<"finding 13 =>"<<m.count(13)<<endl;
cout<<"after erase"<<endl;
m.erase(13);
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}
auto it=m.find(2);
for(auto i=it;it!=m.end();i++){
    cout<<(*i).first<<endl;
}

}