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
    int res=0;
    int height(TreeNode* root)
    {
        if(root==NULL)
             return 0;
        int lh = height(root->left);
        int rh = height(root->right);
        res = max(res,lh+rh+1);
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
         height(root);
        return res-1;
    }
};