class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //Method 01: Optimised Approach TC:O(n) , SC:O(1)
       int i=nums.size()-2;
        while(i>=0 && nums[i+1]<=nums[i])
              i--;
        if(i>=0)
        {
            int j=nums.size()-1;
            while(nums[j]<=nums[i])
                 j--;
            swap(nums[j],nums[i]);
        }
        reverse(nums.begin()+i+1,nums.end());
        
        
        //Method 02 : Using In-Built Function
        // next_permutation(nums.begin(),nums.end());
    }
};