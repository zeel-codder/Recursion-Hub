---
Name: 'Raj Anand'
Github: 'https://github.com/raazanand'
WebSite: ''
Problem: 'Find the Winner of the Circular Game'
Description: 'There are n friends that are playing a game. The friends are sitting in a circle and are numbered from 1 to n in clockwise order. More formally, moving clockwise from the ith friend brings you to the (i+1)th friend for 1 <= i < n, and moving clockwise from the nth friend brings you to the 1st friend.

The rules of the game are as follows:

1. Start at the 1st friend.
2. Count the next k friends in the clockwise direction including the friend you started at. The counting wraps around the circle and may count some friends more than once.
3. The last friend you counted leaves the circle and loses the game.
4. If there is still more than one friend in the circle, go back to step 2 starting from the friend immediately clockwise of the friend who just lost and repeat.
5. Else, the last friend in the circle wins the game.
Given the number of friends, n, and an integer k, return the winner of the game.'
Language: 'Java'
---

```java

import java.util.*;

class Solution {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter number of friend");
    int n = sc.nextInt();
    System.out.println("Enter value of k");
    int k = sc.nextInt();
    int ans = findTheWinner(n,k);
    System.out.println("winner of the game is: "+ans);
}

public int findTheWinner(int n, int k) {
   List<Integer> list = new ArrayList<>();
    for(int i=0;i<n;i++) {
        list.add(i+1);
    }
    solve(0,k-1,list);
    return list.get(0);
}

private static void solve(int index, int k, List<Integer> list) {
    if(list.size()==1) {
        return;
    }
    index=(index+k)%list.size();
    list.remove(index);
    solve(index,k,list);
    }
}
