#include<bits/stdc++.h>
using namespace std;

// defining Node
struct Node{
    int data;
    Node *left;
    Node *right;
    Node (int val)
    {
        data=val;
        right=left=NULL;
    }
};

// Inorder Traversal Technique
void inOrder(Node *root)
{
    if(root==NULL)
      return;

    // Inorder : Left---> Root---> Right
    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);

    // Call Inorder Traversal Function
    inOrder(root);
    return 0;
}