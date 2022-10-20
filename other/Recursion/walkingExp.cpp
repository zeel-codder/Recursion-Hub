#include <bits/stdc++.h>
using namespace std;
void reachHome(int src,int des){

    cout<<"Source "<<src <<" Destination "<<des<<endl;
    if(src==des){
        cout<<"Reached Home \n";
        return ;
    }

    src++;  // processing 

    //rescursive call
    reachHome(src,des);


}
int main()
{

    int des=10;
    int src=1;
    cout<<endl;
    reachHome(src,des);
return 0;
}