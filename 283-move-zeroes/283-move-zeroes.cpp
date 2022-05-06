class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Method 01: TC:O(n) && SC:O(n)
        // This solution doesn't meet the problem constraint
        int count0=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                  count0++;
            else
                ans.push_back(nums[i]);
        }
        while(count0--)
            ans.push_back(0);
        for(int i=0;i<nums.size();i++)
            nums[i]=ans[i];
         
    }
};