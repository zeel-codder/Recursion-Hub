---
Name: 'Ankit Rao'
Github: 'https://github.com/DragonUncaged'
WebSite: 'https://www.linkedin.com/in/ankitrao/'
Problem: 'Reverse Linked List'
Description: 'For The Given linked List reverse the linked List And Print It.'
Explanation: 'make the previous node of the current node as his next node to reverse the linked list..'
Language: 'c++' 

---
```c++
/*
Ex. 
Input:
1 2 3 4
Output:
4 3 2 1    

We return the pointer of next node to his previous(current) node and then make the previous node as the next node of returned node and then returning the current node.

We first traverse till the last node and making the last node as the head node of reversed linked list and then applying the above procedure in the recursive manner.
*/

#include <iostream>
using namespace std;
  
struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
  
struct LinkedList {
    Node* head;
    LinkedList()
    {
        head = NULL;
    }
  
//reverse Linked List
    Node* reverse(Node* node)
    {
        if (node == NULL)
            return NULL;
        if (node->next == NULL) {
            head = node;
            return node;
        }
        Node* node1 = reverse(node->next);
        node1->next = node;
        node->next = NULL;
        return node;
    }

    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
  
    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};
  
int main()
{
    LinkedList ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
  
    cout << "Given linked list\n";
    ll.print();
  
    ll.reverse(ll.head);
  
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}


```
