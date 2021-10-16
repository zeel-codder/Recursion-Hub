---
Name: 'Ashutosh Pandey'
Github: 'https://github.com/Ashutoshpandey-coder'
Problem: 'ReverseInGroups'
Description: 'Reverse the Linked List in groups of K, using recusion.'
Language: 'java' 
---
```java

/* PROBLEM STATEMENT
  * Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. 
    If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed.
*/
/* EXAMPLE 1 */
/* INPUT 
 * LinkedList: 1->2->2->4->5->6->7->8
   K = 4
 */
/* OUTPUT 
 * 4 2 2 1 8 7 6 5 
 */

/* EXAMPLE 2 */
/* INPUT 
 * LinkedList: 1->2->3->4->5
   K = 3
 */
/* OUTPUT 
 * 3 2 1 5 4
 */

import java.lang.*;
import java.util.*;

class Node{
    int data;
    Node next;
    Node(int data){
        this.data = data;
        next = null;
    }
}
public class ReverseInGroups {
    
    static Node head;
    
    static void printList(Node node){
        while(node != null){
            System.out.print(node.data + " ");
            node = node.next;
        }
        System.out.println();
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0){
            int n = sc.nextInt();
            Node head = new Node(sc.nextInt());
            Node tail = head;
            for(int i = 1; i< n; i++){
                tail.next = new Node(sc.nextInt());
                tail = tail.next;
            }
            int k = sc.nextInt();
            Solution sol = new Solution();
            Node res = sol.Reversekth(head,k);
            printList(res);
            t--;
        }
        
    }
    
}
class Solution{
    public static Node Reversekth(Node head, int k){
        Node curr = head, next = null, prev = null;
        int count = 0;
        while(curr != null && count < k){
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next != null){
            Node rest_head = Reversekth(next,k);
            head.next = rest_head;
        }
        return prev;
    }
}
