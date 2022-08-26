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
    vector<int> preorderTraversal(TreeNode* root) {
        
        // Iterative Approach
        vector<int>ans;
        if(root==NULL)
             return ans;
        stack<TreeNode*>s;
        s.push(root);
        while(!s.empty())
        {
            root = s.top();
            s.pop();
            ans.push_back(root->val);
            if(root->right!=NULL)s.push(root->right);
            if(root->left!=NULL)s.push(root->left);
        }
        return ans;
    }
};