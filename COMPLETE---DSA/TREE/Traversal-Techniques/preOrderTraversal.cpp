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

// Pre-Order : Root ---> Left--->Right
void preOrderTraversal(Node *root)
{
    if(root==NULL)
       return ;
    cout<<root->data<<"\n";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    
}
int main()
{

    Node *root = new Node(50);
    root->left = new Node(40);
    root->left->left = new Node(30);
    root->left->left->left = new Node(25);
    cout<<"PreOrderTraversal:\n";
    preOrderTraversal(root);
    return 0;
}