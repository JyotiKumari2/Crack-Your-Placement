#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data=val;
        right=left=NULL;
    }
};

// Post Order Traversal : Left---> Right ---> Root
void postOrderTraversal(Node *root)
{
    if(root==NULL)
     return;
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<"\n";
}
int main()
{

    Node *root = new Node(10);
     root->left = new Node(20);
     root->right = new Node(30);
     root->left->right = new Node(55);

     cout<<"Post Order Traversal:\n";
     postOrderTraversal(root);
    
   return 0;
}