Name	Github	WebSite	Problem	Description	Explanation	Language
Apurva Bhaskar
https://github.com/ApurvaBhaskar
https://apurvabhaskar.github.io/Portfolio/
Binary Search
To search & check if particular element is present in the list or not using binary search.
Size of an array, Array, & key element is given by user & following algorithm will check if that element is present in arraylist or not & give its index accordingly!
C++
#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], num, first, last, middle;
    cout<<"Enter 10 Elements (in ascending order): ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    first = 0;
    last = 9;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
}
