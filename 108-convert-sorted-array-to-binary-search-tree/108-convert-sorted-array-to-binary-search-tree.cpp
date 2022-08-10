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
    TreeNode* sortedArrayToBST(vector<int>& nums, int l, int r) {
        if(l > r)
            return nullptr;
        int m = l + (r - l) / 2;
        return new TreeNode(nums[m], sortedArrayToBST(nums, l, m-1), sortedArrayToBST(nums, m+1, r));
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size()-1);
    }
};