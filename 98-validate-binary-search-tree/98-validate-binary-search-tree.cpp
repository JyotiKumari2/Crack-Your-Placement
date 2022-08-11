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
    bool isValidBST(TreeNode *root) {
        return isValidBST(root, INT_MIN, INT_MAX, false, false);
    }
 private:
     
    bool isValidBST(TreeNode* root, int lower_bound, int upper_bound, bool lower, bool upper)
    {
        if (!root) return true;
        bool lower_check = lower? root->val > lower_bound : true;
        bool upper_check = upper? root->val < upper_bound : true;
        return lower_check && upper_check
            && isValidBST(root->left, lower_bound, root->val, lower, true)
            && isValidBST(root->right, root->val, upper_bound, true, upper);
    }
};