class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0;
        int op=0;
        int r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]+nums[r]==k)
            {
                 op++;
                l++;
                r--;
            }
            else
                if(nums[l]+nums[r]<k)
                     l++;
                 else
                     r--;
            
        }
        return op;
    }
};