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

void levelOrderTraversal(Node *root)
{
    vector<vector<int>>ans;
    if(root==NULL)
    return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        
        int sz = q.size();
        vector<int>level;
        for(int i=0;i<sz;i++)
        {
            Node *node = q.front();
            q.pop();
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
        
    }
    // Print Level Order:
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main()
{

    Node *root =  new Node(10);
    root->left =  new Node(30);
    root->right = new Node(20);
    root->left->left = new Node(45);
    root->left->right= new Node(35);
    root->right->left = new Node(75);

    cout<<"Level Order Traversal: \n";
    levelOrderTraversal(root);
    return 0;
}