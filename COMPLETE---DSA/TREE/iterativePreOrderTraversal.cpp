#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *right;
    Node *left;
    Node(int val)
    {
        data=val;
        right=left=NULL;
        
    }
};


// Iterative Pre Order Traversal;    ROOT--->Left---->Right
void iterativePreOrderTraversal(Node*root)
{
    if(root==NULL)
      return;
    stack<Node*>s;    // LIFO
    s.push(root);
    while(!s.empty())
    {
        Node *root = s.top();
        s.pop();
        cout<<root->data<<" ";
        if(root->right!=NULL)s.push(root->right);
        if(root->left!=NULL)s.push(root->left);
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left=new Node(35);
    root->right->left=new Node(25);
    root->right->right=new Node(15);
    cout<<"Iterative Level Order Traversal:\n";
    iterativePreOrderTraversal(root);
    return 0;
}