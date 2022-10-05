---
Name: 'Navapallav Borthakur'
Github: 'https://github.com/raj-hero'
Problem: 'Wildcard Matching'
Description: '? matches single char, * matches a sequence.'
Explalnation: 'recursion+memoization- for ? we need to compare only 1 char each time, for * we need to compare a sequence. We first write the recursion, then memoize it.'
Language: 'cpp'
---
```cpp

class Solution {
public:
    // helper function
    bool fun(int i,int j,string &p,string &s,vector<vector<int>>&dp)
    {
        // base cases
        if(i<0&&j<0) 
            return true;
        else if(i<0&&j>=0) 
            return false;
        else if(j<0&&i>=0)
        {
            for(int k=0;k<=i;++k){
                if(p[k]!='*') 
                    return false;
            }
            return true;
        }
        else if(dp[i][j]!=-1) 
            return dp[i][j];
        // recursive calls
        else if(p[i]==s[j]||p[i]=='?')
            return dp[i][j]=fun(i-1,j-1,p,s,dp);
        else if(p[i]=='*'){
            return dp[i][j]=(fun(i-1,j,p,s,dp)||fun(i,j-1,p,s,dp));
        }
        return false;
    }
    bool isMatch(string s, string p) {
        int n=p.size(),m=s.size();
        // for memoization
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return fun(n-1,m-1,p,s,dp);
    }
};
```
