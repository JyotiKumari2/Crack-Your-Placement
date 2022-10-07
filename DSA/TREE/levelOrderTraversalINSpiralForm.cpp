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

void levelOrderSpiralForm(Node *root)
{
    if(root==NULL)
       return ;
       vector<vector<int>>ans;
       queue<Node*>q;
       q.push(root);
       bool rev=false;
       while(!q.empty())
       {
         vector<int>level;
         
         int sz = q.size();
         for(int i=0;i<sz;i++)
         {
            Node *node= q.front();
            q.pop();
            if(node->left!=NULL)q.push(node->left);
            if(node->right!=NULL)q.push(node->right);
            level.push_back(node->data);
         }
         if(!rev)
         {
           ans.push_back(level);
           rev=!rev;
         }
           else{
            reverse(level.begin(),level.end());
            ans.push_back(level);
            rev=!rev;

           }

       }

       for(int i=0;i<ans.size();i++)
       {
        for(int j=0;j<ans[i].size();j++)
             cout<<ans[i][j]<<" ";
        cout<<"\n";
       }
}
int main()
{
    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->left=new Node(40);
    root->left->right=new Node(50);
    root->right->left=new Node(60);
    root->right->right=new Node(70);
    root->left->left->left=new Node(80);
    root->left->left->right=new Node(90);
    root->right->left->right=new Node(100);
    cout<<"Level Order Traversal in Spiral Form:\n";
    levelOrderSpiralForm(root);
    return 0;
}