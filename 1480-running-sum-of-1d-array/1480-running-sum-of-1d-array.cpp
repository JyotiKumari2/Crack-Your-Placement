class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n);
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            if(low==0)
            {
                v[low]= nums[low];
                low++;
            }
            else
            {
                v[low]=v[low-1]+nums[low];
                low++;
            }
        }
        return v;
    }
};