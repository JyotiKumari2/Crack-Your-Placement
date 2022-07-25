class Solution {
public:
    
    void solve(int i, set<vector<int>>&ans,vector<int>nums,vector<int>&ds)
    {
        if (i==nums.size())
        {
            ans.insert(ds);
            return;
        }
        //pick
        ds.push_back(nums[i]);
        solve(i+1,ans,nums,ds);
        ds.pop_back();
        solve(i+1,ans,nums,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        vector<int>ds;
        solve(0,ans,nums,ds);
        
        vector<vector<int>>ans1;
        for(auto it: ans)
        {
            ans1.push_back(it);
        }
        
        return ans1;
    }
};