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
     bool find_it(TreeNode* root, int target)
{
    if(!root) return false;
    if(!root->left and !root->right)
    {
    
        return target== root->val;
    }
    return find_it(root->left, target- root->val) or
           find_it(root -> right, target-root->val);
}
public:
bool hasPathSum(TreeNode* root, int targetSum) {
    
    return find_it(root, targetSum);
}
};