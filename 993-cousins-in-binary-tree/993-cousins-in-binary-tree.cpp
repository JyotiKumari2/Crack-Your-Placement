/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        
        if(!root)
            return false;
        
        queue<TreeNode* > q;
        q.push(root);
       
        
        while(!q.empty())
        {
            int size = q.size();
            // cout<<size<<endl;
            
            bool flag = false;
            for(int i = 0; i<size ; i++)
            {
                TreeNode * front = q.front();
                
                
               
                q.pop();
                
               // cout<<i<<" "<<front->val<<endl;
                if(front->left)
                    q.push(front->left);
                if(front->right)
                    q.push(front->right);
                
                if(front->left && front->right)
                {
                    if(front->left->val == x || front->left->val == y )
                      if(front->right->val == x || front->right->val == y)
                          return false;
                }
                
                
                if(flag)
                {
                    if(front->val == x || front->val == y)
                    {
                    //    cout<<"Here "<<endl;
                          return true;
                    }
                }
                if(front->val == x || front->val == y)
                {
                    // cout<<"Entered for "<<front->val<<endl;
                     flag = true;
                }
                
                
            }
        
            if(flag) return false;
        }
        return false;
    }
};