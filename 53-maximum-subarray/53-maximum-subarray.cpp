class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        // Kadane's Algorithm
        int n=nums.size();
        int sum=0;
        int max_sum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            
                max_sum=max(max_sum,sum);
            if(sum<0)
                sum=0;
                
            
            
        }
        return max_sum;
    }
};