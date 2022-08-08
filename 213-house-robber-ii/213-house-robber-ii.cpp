class Solution {
public:
    int solve(int ind , vector<int>&arr, vector<int>&dp)
    {
        if(ind==0)  return arr[0];
        if(ind<0)   return 0;
        
        if(dp[ind]!=-1)
              return dp[ind];
        //pick
        
        int pick = solve(ind-2,arr,dp)+arr[ind];
        
        //not pick
        
        int nonPick = solve(ind-1,arr,dp)+0;
        
        return dp[ind]=max(pick,nonPick);
    }
    int maximumNonAdjSum(vector<int>&arr)
    {
        int n=arr.size();
        vector<int>dp(n,-1);
        int ans=solve(n-1,arr,dp);
        return ans;
    }
    int rob(vector<int>& nums) {
        vector<int>temp1;
        vector<int>temp2;
        int n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)  temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
            int max1= maximumNonAdjSum(temp1);
            int  max2=maximumNonAdjSum(temp2);
        
            return max(max1,max2);
        
    }
};