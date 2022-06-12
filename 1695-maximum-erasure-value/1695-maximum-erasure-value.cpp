class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        set<int>s;
        int n=nums.size();
        int i=0;
        int start=0;
        int sum=0;
        int maxSum=0;
        while(i<n)
        {
            int currE=nums[i];
            if(!s.count(currE))
            {
                s.insert(currE);
                sum+=currE;
                maxSum=max(sum,maxSum);
                i++;
            }
            else
            {
                int deleteE=nums[start];
                s.erase(deleteE);
                sum=sum-deleteE;
                start++;
            }
        }
        return maxSum;
    }
};