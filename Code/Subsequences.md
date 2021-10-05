---
Name: 'Soham Sen'  
Github: 'https://github.com/NuclearCactus'   
Problem: 'Subsequences'  
Description: 'Print all the subsequences (power set) of a given string'  
Language: 'C++' 
---

```C++
/* 

A subsequence is a set of characters from the string given in order.
    Ex. If the string is "abcd"
    Subsequences are: "", "a", "b", "c", "d", "ab", "ac", "ad", "bc", "bd", "cd", "abc", "abd", "acd", "bcd", "abcd"

The solution to this problem passes partitioned strings into a recursive function and prints the final subsequence at the base case

*/

#include<iostream>
using namespace std;

void subseq(string input, string output) {
    if(input.length() == 0)
    { // once input string becomes "", we print the output string, which is one of the subsets
        cout << output << endl;
        return;
    }
    // on each iteration we call the function twice with the output string once passed singly, and on the other case passed concatenated with the first letter of the input string
    subseq(input.substr(1), output);
    subseq(input.substr(1), output + input[0]);
}

int main()
{ // main function
    string word;
    cin >> word;
    subseq(word, "");
    return 0;
}
```