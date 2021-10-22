---
Name: 'Ankit Raibole'
Github: 'https://github.com/iota-008'
WebSite: 'https://iota-008.github.io'
Problem: 'Reverse a doubly linkedlist'
Description: 'Reverse a doubly linkedlist using recursion'
Language: 'C++' 
---
```C++
/**
Algorithm 
1) If list is empty, return 
2) Reverse head by swapping head->prev and head->next 
3) If prev = NULL it means that list is fully reversed. Else reverse(head->prev)
*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *next, *prev;
};

Node* getNode(int data)
{
	Node* new_node = new Node;
	new_node->data = data;
	new_node->next = new_node->prev = NULL;
	return new_node;
}

void push(Node** head_ref, Node* new_node)
{
	new_node->prev = NULL;

	new_node->next = (*head_ref);

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;
}

Node* Reverse(Node* node)
{
	if (!node)
		return NULL;

	Node* temp = node->next;
	node->next = node->prev;
	node->prev = temp;

	if (!node->prev)
		return node;

	return Reverse(node->prev);
}

void printList(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}

int main()
{
	Node* head = NULL;

    int n;

    cout<<"Enter number of nodes you want to insert in list : ";
    cin>>n;

    for(int i=0; i<n; i++){

        int x;
        xin>>x;
        push(&head, getnode(x));
    }

	cout << "Original list: ";
	printList(head);

	head = Reverse(head);
	cout << "\nReversed list: ";
	printList(head);
	return 0;
}
```