---
Name: 'Ankit Raibole'
Github: 'https://github.com/iota-008'
WebSite: 'https://iota-008.github.io'
Problem: 'Alternate splitting of linked list'
Description: 'splitting the linked list such that each new list has alternate elements from original list'
Language: 'C++' 
---
```C++

/**
Original linked List: 0 1 2 3 4 5 
Resultant Linked List 'a' : 4 2 0 
Resultant Linked List 'b' : 5 3 1
*/

#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	struct Node* next;
};

void push(Node** head, int new_data)
{
	Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head);
	(*head) = new_node;
}

void moveNode(Node* a, Node* b)
{
	if (b == NULL || a == NULL)
		return;

	if (a->next != NULL)
		a->next = a->next->next;

	if (b->next != NULL)
		b->next = b->next->next;

	moveNode(a->next, b->next);
}

void alternateSplitLinkedList(Node* head, Node** aRef,
										Node** bRef)
{
	Node* curr = head;
	*aRef = curr;
	*bRef = curr->next;
	moveNode(*aRef, *bRef);
}

void display(Node* head)
{
	Node* curr = head;
	while (curr != NULL) {
		printf("%d ", curr->data);
		curr = curr->next;
	}
}

int main()
{
	Node* head = NULL;
	Node *a = NULL, *b = NULL;

    int n;
    cout<<"Enter number of nodes to insert : ";
    cin>>n;

    for(int i=0; i<n; i++){

        int x;
        cin>>x;
        push(&head, x);
    }

	alternateSplitLinkedList(head, &a, &b);

	printf("a : ");
	display(a);
	printf("\nb : ");
	display(b);

	return 0;
}
```