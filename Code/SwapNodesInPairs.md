---
Name: 'Pallaav Sethi'  
Github: 'https://github.com/Pallaav'   
Problem: 'Swap Nodes in Pairs'  
Description: 'Swap every two adjacent nodes and return its head.'  
Language: 'Java' 
---

```java

// create a Node
class Node
{
	int data;
	Node next;

	Node(int data, Node next)
	{
		this.data = data;
		this.next = next;
	}
}

class Main
{
	// function to print a given linked list
	public static void printList(String msg, Node head)
	{
		System.out.print(msg);

		Node ptr = head;
		while (ptr != null)
		{
			System.out.print(ptr.data + " —> ");
			ptr = ptr.next;
		}

		System.out.println("null");
	}

	// function to pairwise swap adjacent nodes of the linked list
	public static Node rearrange(Node head, Node prev)
	{
		// base case
		if (head == null || head.next == null) {
			return head;
		}

		Node curr = head;
		Node temp = curr.next;
		curr.next = temp.next;
		temp.next = curr;

		if (prev == null) {
			head = temp;
		}
		else {
			prev.next = temp;
		}

		prev = curr;
		rearrange(curr.next, prev);

		return head;
	}

	public static Node rearrange(Node head) {
		return rearrange(head, null);
	}

	public static void main(String[] args)
	{
		int[] arr = { 1,2,3,4 };

		Node head = null;
		for (int i = arr.length - 1; i >= 0; i--) {
			head = new Node(arr[i], head);
		}

		printList("Before : ", head);
		head = rearrange(head);
		printList("After : ", head);
	}
}
```
