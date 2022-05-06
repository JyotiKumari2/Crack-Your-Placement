class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //Method 01: TC:O(n) && SC:O(n)
        // This solution doesn't meet the problem constraint
        // int count0=0;
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //           count0++;
        //     else
        //         ans.push_back(nums[i]);
        // }
        // while(count0--)
        //     ans.push_back(0);
        // for(int i=0;i<nums.size();i++)
        //     nums[i]=ans[i];
        
        
        // Method02: Sub-Optimal TC:O(n) && SC:O(1)
        
        // int lastNonZeroFound=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //         nums[lastNonZeroFound++]=nums[i];
        // }
        // for(int i=lastNonZeroFound;i<nums.size();i++)
        // {
        //     nums[i]=0;
        // }
        
        
        // Optimal Approach : TC:O(n) && SC:O(n)
        for(int lN0=0, i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                swap(nums[lN0++],nums[i]);
        }
        
         
    }
};