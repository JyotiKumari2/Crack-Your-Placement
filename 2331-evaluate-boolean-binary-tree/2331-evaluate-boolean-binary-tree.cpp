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
    
    bool solve(TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
              return root->val;
        bool left = solve(root->left);
        bool right = solve(root->right);
        if(root->val == 2)
              return left || right;
        else
            return left && right;
    }
    bool evaluateTree(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
              return root->val;
        return solve(root);
    }
};