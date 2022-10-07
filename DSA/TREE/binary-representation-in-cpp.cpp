#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node (int val)
    {
        data =val;
        right=left=NULL;
    }
};
void inOrder(Node* root)
{
    if(root==NULL)
      return;
    inOrder(root->left);
    cout<<root->data<<"\n";
    inOrder(root->right);
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right= new Node(30);
    root->left->left = new Node(40);

    // Now we need traversal techniques for traversing elements of the tree
    // We have BFS and DFS
    // Lets do DFS : inOrder Technique
    cout<<"Inorder traversal of Tree: \n";
    inOrder(root);
    return 0;
}