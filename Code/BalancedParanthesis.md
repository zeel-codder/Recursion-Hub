---
Name: 'Ankit Rao'
Github: 'https://github.com/DragonUncaged'
WebSite: 'https://www.linkedin.com/in/ankitrao/'
Problem: 'Print thee Balanced Paranthesis'
Description: 'For The Given number n print all the valid paranthesis.'
Explanation: ' ith can be ‘(‘ if the count of ‘(‘ till i’th is less than n and i’th character can be ‘)’ if the count of ‘(‘ is greater than the count of ‘)’ till index i. '
Language: 'c++' 
---
```c++
/*
Ex. 
Input:
n = 4
Output:
(((())))
((()()))
((())())
((()))()
(()(()))
(()()())
(()())()
(())(())
(())()()
()((()))
()(()())
()(())()
()()(())
()()()()    

Create a recursive function that accepts a string (s), count of opening brackets (o) and count of closing brackets (c) and the value of n.

if the value of opening bracket and closing bracket is equal to n then print the string and return.

If the count of opening bracket is greater than count of closing bracket then call the function recursively with the following parameters String s + “}”, count of opening bracket o, count of closing bracket c + 1, and n.

If the count of opening bracket is less than n then call the function recursively with the following parameters String s + “{“, count of opening bracket o + 1, count of closing bracket c, and n.

*/
#include "bits/stdc++.h"
using namespace std;


void gen(int open, int close, int n, std::string out)
{
    if (close == n)
    {
        std::cout << out << "\n";
        return;
    }
    if (open < n)
    {
        gen(open + 1, close, n, out + "(");
    }
    if (close < open)
    {
        gen(open, close + 1, n, out + ")");
    }
}

int main()
{
    int n;
    cin >> n;
    gen(0, 0, n, "");

    return 0;
}

```
