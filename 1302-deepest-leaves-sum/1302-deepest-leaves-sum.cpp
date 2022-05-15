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
    int deepestLeavesSum(TreeNode* root) {
        int s = 0;
        queue<TreeNode*> q{};
        q.push(root);
        while(!q.empty())
        {
            s = 0;
            int sz = q.size();
            for( int i = 0; i < sz; ++i)
            {
                TreeNode *top = q.front();
                q.pop();
                s += top->val;
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
            }
        }
        return s;
    }
};