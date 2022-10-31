---
Name: 'Jaydeep pipaliya'
Github: 'https://github.com/jaydeep-pipaliya'
WebSite: ''
Problem: 'Longest Common Prefix'
Description: 'Find Longest common prefix'
Explanation : After sorting we compare first and last string and from that we make a answer string.
Language: 'c++' 
---
```c++

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        
        // Sort the vector
        sort(strs.begin(), strs.end());
        string ans = ""; // for storing answer
        
        string a = strs[0]; // after sorting first element
        string b = strs[n-1]; // after sorting last element
        
        // We can compare for first and last , since they are sorted
        // i < a.length() ==> common prefix we can select least word
        for(int i = 0; i < a.length(); i++){
            if(a[i] == b[i]){
                // If same add in answer
                ans += a[i];
            }else{
                break;
            }
        }
        return ans;
    }
};
