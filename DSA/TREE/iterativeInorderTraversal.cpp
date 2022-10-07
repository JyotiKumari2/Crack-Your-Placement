#include<bits/stdC++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node (int val)
    {
        data=val;
        left=right=NULL;
    }
};

void iterativeInorderTraveral(Node* root)
{
     vector<int>ans;
      stack<Node*>s;
    Node *node = root;
      while(true)
      {
        if(node!=NULL)
            {
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty())
                   break;
                node=s.top();
                s.pop();
                ans.push_back(node->data);
                node=node->right;
            }
      }
      for(int i=0;i<ans.size();i++)
         cout<<ans[i]<<" ";
}
int main()
{

    Node *root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    cout<<"Iterative Inorder Traversal:\n";
    iterativeInorderTraveral(root);
    return 0;

}