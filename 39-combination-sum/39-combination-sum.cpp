class Solution {
public:
    
    void findCombinations(vector<int>&temp, vector<vector<int>>&ans, int i, vector<int>candidates,int target, int n)
    {
        
        if(i==n)
        {
            if(target==0)
            {
                ans.push_back(temp);
            }
            return;
        }
        // pick
        if(candidates[i]<=target)
        {
        temp.push_back(candidates[i]);
        findCombinations(temp,ans,i,candidates,target-candidates[i],n);
        temp.pop_back();
        }
        findCombinations(temp,ans,i+1,candidates,target,n);
        
        
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>temp;
        findCombinations(temp,ans,0,candidates,target,n);
        return ans;
    }
};