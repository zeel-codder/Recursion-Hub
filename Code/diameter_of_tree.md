---
Name: "Abhijeet anand"
Github: "abhijeet-crypto"
WebSite: ""
Problem: "diameter of a binary tree"
Description: "find diameter of a tree using recursion in O(n) time"
Language: "c++"
---

```c++


// Recursive optimized C program to find the diameter of a
// Binary Tree

#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node *left, *right;
};
struct node* newNode(int data);
int max(int a, int b) { return (a > b) ? a : b; }
int height(struct node* node);

int diameter(struct node* tree)
{
	// base case where tree is empty
	if (tree == NULL)
		return 0;

	// get the height of left and right sub-trees
	int lheight = height(tree->left);
	int rheight = height(tree->right);

	// get the diameter of left and right sub-trees
	int ldiameter = diameter(tree->left);
	int rdiameter = diameter(tree->right);

	return max(lheight + rheight + 1,
			max(ldiameter, rdiameter));
}



int height(struct node* node)
{

	if (node == NULL)
		return 0;

	return 1 + max(height(node->left), height(node->right));
}


struct node* newNode(int data)
{
	struct node* node
		= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

// Driver Code
int main()
{

	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// Function Call
	cout << "Diameter of the given binary tree is "
		<< diameter(root);

	return 0;
}

```
