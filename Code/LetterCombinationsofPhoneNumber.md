---
Name: 'Simran Sahni'
Github: 'https://github.com/Simran-Sahni'
WebSite: 'https://zeelcodder.tech/'
Problem: 'Letter Combinations from a phone number'
Description: 'Find all possible letter combinations for Numbered string.'
Language: 'C++' 
---
```cpp
/*
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Problem link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
*/
class Solution {
    public:
    
    //this approach is recursion + backtracking
    /* Recusion ka 1 way is to make the input smaller in every call,
    Other paradigm is: Base case - Hypothesis - Induction 
    */
    vector<string> ans;
  
    map<char,string> dict;
    
    void recurse(string formed,string digits)
    {
        
       if(digits.length() == 0)
       {
           ans.push_back(formed);
       }
        string corresponds = dict[digits[0]];
        for(int i = 0;i<corresponds.length();i++)
        {
            string next_call = formed + corresponds[i];
            recurse(next_call,digits.substr(1));
            
        }
        
        
    }
    vector<string> letterCombinations(string digits) {
        ans.clear();
        
        if(digits.length()==0) return ans;
         dict['2'] = "abc";
         dict['3'] = "def";
         dict['4'] = "ghi";
         dict['5'] = "jkl";
         dict['6'] = "mno";
         dict['7'] = "pqrs";
         dict['8'] = "tuv";
         dict['9'] = "wxyz";
         recurse("",digits);
        return ans;
    }
};
```