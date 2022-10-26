---
Name: 'Sujata Choudhary'
Github: 'https://github.com/sujatachoudhary598'
WebSite: ''
Problem: 'Unique Binary Search Trees'
Description: 'Given an integer n, return the number of structurally unique BST's (binary search trees) which has exactly n nodes of unique values from 1 to n.'
Language: 'Java'
---

```java
public class Solution {
    public int numTrees(int n) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        map.put(0,1);
        map.put(1,1);
        return numTrees(n, map);
    }
    
    private int numTrees(int n, Map<Integer, Integer> map){
        // check memory
        if(map.containsKey(n)) return map.get(n);
        // recursion
        int sum = 0;
        for(int i = 1;i <= n;i++)
            sum += numTrees(i-1, map) * numTrees(n-i, map);
        map.put(n, sum);
        return sum;
    }
}

```