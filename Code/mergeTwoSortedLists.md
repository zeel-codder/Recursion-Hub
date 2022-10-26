---
Name: 'Sujata Choudhary'
Github: 'https://github.com/sujatachoudhary598'
WebSite: ''
Problem: 'Merge Two Sorted Lists'
Description: 'You are given the heads of two sorted linked lists list1 and list2.
Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
Return the head of the merged linked list.'
Language: 'Java'
---

```java
public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
	if(l1 == null) return l2;
	if(l2 == null) return l1;

	ListNode l3 = null, p3 = l3;

	if(l1.val <= l2.val) {
		ListNode p1 = mergeTwoLists(l1.next, l2);
		ListNode newNode = new ListNode(l1.val);
		if(l3 == null) {
			l3 = newNode;
		} else {
			p3.next = newNode;
		}
		p3 = newNode;
		p3.next = p1;
	} else {
		ListNode p2 = mergeTwoLists(l1, l2.next);
		ListNode newNode = new ListNode(l2.val);
		if(l3 == null) {
			l3 = newNode;
		} else {
			p3.next = newNode;
		}
		p3 = newNode;
		p3.next = p2;
	}

	return l3;
}
```