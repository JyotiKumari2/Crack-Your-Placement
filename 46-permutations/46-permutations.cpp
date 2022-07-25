class Solution {
public:
    void solve(int i, vector<vector<int>>&ans, vector<int>&ds, vector<int>nums)
    {
        if(i==nums.size())
           {
               ans.push_back(ds);
           }
        
        for(int j=i;j<nums.size();j++)
        {
            swap(nums[i],nums[j]);
            ds.push_back(nums[i]);
            solve(i+1,ans,ds,nums);
            swap(nums[i],nums[j]);
            ds.pop_back();
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        solve(0,ans,ds,nums);
        return ans;
    }
};