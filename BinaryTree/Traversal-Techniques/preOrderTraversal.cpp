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

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(40);
    root->right->left = new Node(30);
    cout<<"PreOrderTraversal:\n";
    preOrderTraversal(root);
    return 0;
}