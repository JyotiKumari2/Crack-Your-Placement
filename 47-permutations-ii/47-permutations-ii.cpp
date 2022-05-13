class Solution {
private:
    void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> t){
        if(t.size()==nums.size()){
            ans.push_back(t);
            return ;
        }
        
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=11){
			 
			
            if(j>0 && nums[j]==nums[j-1]) continue;       
            int i=nums[j];
            nums[j]=11;
            t.push_back(i);
            solve(nums,ans,t);
            t.pop_back();
            nums[j]=i;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());          
        vector<vector<int>> ans;
        solve(nums,ans,{});
        return ans;
    }
};