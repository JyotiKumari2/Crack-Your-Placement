class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Method 01: Optimised Approach TC:O(n) , SC:O(1)
        // int n=nums.size();
        // int ind1=-1;
        // int ind2=-1;
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(nums[i-1]<nums[i])
        //          ind1=i;
        // }
        // for(int i=n-1;i>=0;i--)
        // {
        //     if(nums[i]>nums[ind1])
        //         ind2=ind1;
        // }
        // swap(nums[ind1],nums[ind2]);
        // if(ind1<0)
        //     reverse(nums.begin(),nums.end());
        // else
        // reverse(nums.begin()+ind1+1,nums.end());
        
        
        //Method 02 : Using In-Built Function
        next_permutation(nums.begin(),nums.end());
    }
};