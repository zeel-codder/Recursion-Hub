/**
* Contributor🎅
* Name: NuclearCactus
* Github: https://github.com/NuclearCactus
*/

/*
* 👉 Problem: Subsequences
* 👑 Description: Print all the subsequences (power set) of a given string
* 🎓 Explanation(optional):A subsequence is a set of characters from the string given in order
*    
*    Ex.
*    If the string is "abcd"
*    Subsequences are: "", "a", "b", "c", "d", "ab", "ac", "ad", "bc", "bd", "cd", "abc", "abd", "acd", "bcd", "abcd"    
*
*    The solution to this problem passes partitioned strings into a recursive function and prints the final subsequence at the base case
*/

#include<iostream>
using namespace std;

void subseq(string input, string output) {
    if(input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    subseq(input.substr(1), output);
    subseq(input.substr(1), output + input[0]);
}

int main()
{
    string word;
    cin >> word;
    subseq(word, "");
    return 0;
}