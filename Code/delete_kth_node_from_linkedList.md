---
Name: 'Rajib Mondal'
Github: 'https://github.com/mondalraj'
WebSite: 'https://www.linkedin.com/in/dev-rajib-mondal/'
Problem: 'Deleting k-th node from linked list'
Description: 'Given a singly linked list, delete a node at the kth position without using the loop.'
Language: 'java' 
---
```java
/**
Given a singly linked list, delete a node at the kth position without using the loop.
Example -
Input : list = 9->8->3->5->2->1 
          k = 4
Output : 9->8->3->2->1 

Input  : list = 0->0->1->6->2->3 
            k = 3
Output : 0->0->6->2->3 
*/

class deleteKthNode
{
	
  static class Node
  {
    int data;
    Node next;
  };
  
  static Node deleteNode(Node start, int k)
  {
    if (k < 1)
    return start;

    if (start == null)
    return null;

    if (k == 1)
      {
        Node res = start.next;
        return res;
      }

    start.next = deleteNode(start.next, k-1);
    return start;
  }

  static Node push( Node head_ref, int new_data)
  {
    Node new_node = new Node();
    new_node.data = new_data;
    new_node.next = head_ref;
    head_ref = new_node;
    return head_ref;
  }

  static void printList( Node head)
  {
    while (head!=null)
      {
        System.out.print(head.data + " ");
        head = head.next;
      }
    System.out.printf("\n");
  }

  public static void main(String args[])
  {
    Node head = null;

    head=push(head,3);
    head=push(head,2);
    head=push(head,6);
    head=push(head,5);
    head=push(head,11);
    head=push(head,10);
    head=push(head,15);
    head=push(head,12);

    int k = 3;
    head = deleteNode(head, k);

    System.out.printf("\nModified Linked List: ");
    printList(head);
  }
}
```
