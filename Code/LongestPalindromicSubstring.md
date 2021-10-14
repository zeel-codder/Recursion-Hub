---
Name: 'Pranay Chauhan'  
Github: 'https://github.com/PranayChauhan2516'  
WebSite: ''  
Problem: 'Longest Palindromic Substring'  
Description: 'TC: O(n^2)'  
Language: 'Java' 
---

```java

public class LongestPalindromicSubstring {
    public static int maxLen, start;
    
    public static void main(String args[]) {
      System.out.println("Longest Palindromic Substring of 'babad' is " + longestPalindrome("babad"));
    }
    
    public static String longestPalindrome(String s) {
        if(s.length()<2) return s;
        for(int i=0;i<s.length()-1;++i) {
            go(s,i,i);
            if(s.charAt(i)==s.charAt(i+1)) go(s,i,i+1);
        }
        return s.substring(start,start+maxLen);
    }
    
    public static void go(String s, int l, int r) {
        while(l>=0 && r<s.length() && s.charAt(l)==s.charAt(r)) {
            l--;
            r++;
        }
        if(maxLen<r-l-1) {
            maxLen = r-l-1;
            start = l+1;
        }
    }
}

```
