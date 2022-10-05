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
    void solve(TreeNode* root, int val, int depth, int currDepth){
        if(!root) return;
        currDepth++;
        if(currDepth == depth -1){
            // cout<<currDepth<<endl;
            TreeNode* newNode1 = new TreeNode(val);
            TreeNode* newNode2 = new TreeNode(val);
            TreeNode* p1 = root->left;
            TreeNode* p2 = root->right;
            root->left = newNode1;
            root->right = newNode2;
            newNode1->left = p1;
            newNode2->right = p2;
        }
        solve(root->left, val, depth, currDepth);
        solve(root->right, val, depth, currDepth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth == 1){
            TreeNode* newNode = new TreeNode(val);
            newNode->left = root;
            root = newNode;
            return root;
        }
        solve(root, val, depth, 0);
        return root;
    }
};