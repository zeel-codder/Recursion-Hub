/* Heap Ki memory agr use kr li hai toh hume usko clear ya free bhi krna hai  or agr memory allocate kar di 
or usko free ni kra tb use  memory leak kha jata h */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter Row :: \n";
    cin>>row;
    cout<<"Enter the col :: \n";
    cin>>col;
   
    int** arr=new int* [row];
    //Creating Memory
    for(int i=0;i<row;i++){

        arr[i]=new int [col];
    }

        for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<"Enter the value of element :: "<<i<<j<<endl;
            cin>>arr[i][j];
        }
    }
       for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){

            cout<<arr[i][j];
        }
        cout<<endl;
        
    }

    // Releasing memory

      for(int i=0;i<row;i++){

        delete [] arr[i];
    }
    delete []arr;
return 0;
}