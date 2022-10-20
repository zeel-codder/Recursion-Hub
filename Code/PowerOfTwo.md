---
Name: 'Jaydeep Pipaliya'  
Github: 'https://github.com/jaydeep-pipaliya'  
WebSite: ''  
Problem: 'Check the Given Number is Power of 2 or not'  
Description: 'Calculating power Two in O(1)'  
Language: 'C++' 
---
```C++

/*
Used Bit manipulation

Let's take some good exampes :
number->binary form
3->0000 0011
4->0000 0100
5->0000 0101
6->0000 0110
7->0000 0111
8->0000 1000

Now consider :-
bit representation of 7  -> 0111
bit representation of 8  -> 1000
bitwise AND of 7 and 8 -> 0000
we are gonna use this property for for all numbers which are powers of two

*/
#include<bits.stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        return ((n&(n-1))==0);
    }
    
int main()
{
int n;
cin>>n;
bool ans;
ans=isPowerOfTwo(n);
cout<<ans<<endl;
}
};

```
