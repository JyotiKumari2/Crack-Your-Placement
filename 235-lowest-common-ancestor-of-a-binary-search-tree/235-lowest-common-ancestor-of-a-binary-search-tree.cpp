/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* left = NULL;
        TreeNode* right = NULL;
        TreeNode* small = NULL;
        TreeNode* big = NULL;
        (p->val > q->val) ? (big = p, small = q) : (big = q, small = p); 
        if (root == p || root == q || root == NULL) return root;
        if (root->val > big->val) left = lowestCommonAncestor(root->left, small, big);
        else if (root->val < small->val) right = lowestCommonAncestor(root->right, small, big);
        else {
            left = lowestCommonAncestor(root->left, small, big);
            right = lowestCommonAncestor(root->right, small, big);
        }
        return left && right ? root : left ? left : right;
    }
};